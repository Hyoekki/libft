/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:18:02 by jhyokki           #+#    #+#             */
/*   Updated: 2025/02/28 11:26:12 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "../include/libft.h"

/* Find handler function from t_specifier_map */
static int	find_handler(char s, va_list *args)
{
	static t_specifier_map	specifiers[] = {
	{'c', handle_c},
	{'s', handle_s},
	{'p', handle_p},
	{'d', handle_d},
	{'i', handle_d},
	{'u', handle_u},
	{'x', handle_x},
	{'X', handle_capital_x},
	{'%', handle_percent},
	{0, NULL}
	};
	t_specifier_map			*current;

	current = specifiers;
	while (current -> specifier)
	{
		if (s == current -> specifier)
			return (current -> handler(args));
		current++;
	}
	ft_putchar_fd('%', 1);
	ft_putchar_fd(s, 1);
	return (2);
}

/* Iterate over the string (format) and 
Format the string by calling find_handler*/
static int	process_format(const char *format, va_list *args)
{
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			count += find_handler(*format, args);
			format++;
		}
		else if (*format == '%' && *(format + 1) == '\0')
		{
			ft_putchar_fd('%', 1);
			count++;
			break ;
		}
		else
		{
			ft_putchar_fd(*format++, 1);
			count++;
		}
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	count = process_format(format, &args);
	va_end(args);
	return (count);
}
