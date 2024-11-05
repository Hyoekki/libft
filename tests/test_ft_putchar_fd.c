/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:14:31 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/05 09:14:51 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_putchar_fd(char c, int fd) {
	printf("ft_putchar_fd('%c', %d) == ", c, fd);
	ft_putchar_fd(c, fd);
	printf("\n");
}
