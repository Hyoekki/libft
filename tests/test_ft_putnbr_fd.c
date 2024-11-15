/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:16:31 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/14 19:45:41 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "../libft.h"

void test_ft_putnbr_fd(int n) {
    int pipefd[2];
    if (pipe(pipefd) == -1) {
        perror("pipe");
        return;
    }

    // Redirect stdout to the write end of the pipe
    int saved_stdout = dup(STDOUT_FILENO);
    dup2(pipefd[1], STDOUT_FILENO);
    close(pipefd[1]);

    // Call the function
    ft_putnbr_fd(n, STDOUT_FILENO);

    // Restore original stdout
    dup2(saved_stdout, STDOUT_FILENO);
    close(saved_stdout);

    // Read the output from the read end of the pipe
    char buffer[1024] = {0};
    read(pipefd[0], buffer, sizeof(buffer) - 1);
    close(pipefd[0]);

    // Compare the result
    char expected[12];
    snprintf(expected, sizeof(expected), "%d", n);
    if (strcmp(buffer, expected) == 0)
        printf("PASS: ft_putnbr_fd(%d)\n", n);
    else
        printf("FAIL: ft_putnbr_fd(%d) == \"%s\", expected \"%s\"\n", n, buffer, expected);
}
