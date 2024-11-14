/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:16:25 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/05 09:16:48 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_putnbr_fd(int n, int fd) {
	printf("ft_putnbr_fd(%d, %d) == ", n, fd);
	ft_putnbr_fd(n, fd);
	printf("\n");
}
