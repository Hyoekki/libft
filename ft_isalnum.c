/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:57:12 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/06 09:43:03 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Call isalpha and isdigit functions to check wether integer c is alphabet or
digit and return 1 (TRUE) or 0 (FALSE)
 */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
