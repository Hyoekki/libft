/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:02:13 by jhyokki           #+#    #+#             */
/*   Updated: 2025/02/28 11:28:58 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "../include/libft.h"

int	handle_c(va_list *args)
{
	char	c;

	c = (char)va_arg(*args, int);
	write(1, &c, 1);
	return (1);
}
