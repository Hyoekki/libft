/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:00:01 by jhyokki           #+#    #+#             */
/*   Updated: 2025/02/18 14:06:28 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/libft.h"

/*
Split charcter string *s into muliple strings using char c as delimiter.
Count number of pointers needed for new strings. Copy new words to assigned
memory blocks calling word_dup function. Return 2D array of spitted words.
 */
static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;
	int		in_quotes;

	count = 0;
	in_word = 0;
	in_quotes = 0;
	while (*s)
	{
		if (*s == '"')
			in_quotes = !in_quotes;
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c && !in_quotes)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *start, size_t len)
{
	char	*word;

	word = malloc(sizeof(*word) * (len + 1));
	if (!word)
		return (NULL);
	ft_memmove(word, start, len);
	word[len] = '\0';
	return (word);
}

static char	*get_next_word(const char **s, char c)
{
	const char	*start;
	char		*word;
	int			in_quotes;
	size_t		len;

	while (**s == c)
		(*s)++;
	start = *s;
	in_quotes = 0;
	len = 0;
	while (**s && (**s != c || in_quotes))
	{
		if (**s == '"')
			in_quotes = !in_quotes;
		(*s)++;
		len++;
	}
	word = word_dup(start, len);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		words;
	size_t		i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = malloc(sizeof(*result) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		result[i] = get_next_word(&s, c);
		if (!result[i])
		{
			while (i > 0)
				free(result[--i]);
			free(result);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
