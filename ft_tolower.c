/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:11:41 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/02 07:39:39 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (c | 32);
	return c;
}
