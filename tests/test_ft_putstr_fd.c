/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:15:03 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/05 09:15:19 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../libft.h"

void test_ft_putstr_fd(const char *s, int fd) {
	printf("ft_putstr_fd(\"%s\", %d) == ", s, fd);
	ft_putstr_fd(s, fd);
	printf("\n");
}
