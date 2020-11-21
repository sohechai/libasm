/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:51:51 by sofiahechai       #+#    #+#             */
/*   Updated: 2020/11/21 16:10:25 by sofiahechai      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
# include <errno.h>
#define BUF 32

int        main()
{
	char dst[10];
	int fd = open("mine.txt", O_WRONLY);
    int fd2 = open("real.txt", O_WRONLY);
	// size_t ret;
	ssize_t out;
	char buf[1000];
    char buf2[2];
    char buf3[10];

	printf("\033[0;33m----------ft_strlen----------\n\033[00m");
	printf("\nmine : [%ld]\n", ft_strlen("test"));
	printf("real : [%ld]\n\n", strlen("test"));
	printf("mine : [%ld]\n", ft_strlen(""));
	printf("real : [%ld]\n\n", strlen(""));
	printf("mine : [%ld]\n", ft_strlen("ceci est un autre test"));
	printf("real : [%ld]\n\n", strlen("ceci est un autre test"));
	printf("mine : [%ld]\n", ft_strlen("123----9546--0-96"));
	printf("real : [%ld]\n\n", strlen("123----9546--0-96"));

	printf("\033[0;33m----------ft_strcpy----------\n\033[00m");
	printf("\nmine : [%s]\n", ft_strcpy(dst, "test"));
	printf("real : [%s]\n\n", strcpy(dst, "test"));
	printf("mine : [%s]\n", ft_strcpy(dst, ""));
	printf("real : [%s]\n\n", strcpy(dst, ""));

	printf("\033[0;33m----------ft_strcmp----------\n\033[00m");
	printf("\nmine : [%d]\n", ft_strcmp("test", "test"));
	printf("real : [%d]\n\n", strcmp("test", "test"));
	printf("mine : [%d]\n", ft_strcmp("test1", "test2"));
	printf("real : [%d]\n\n", strcmp("test1", "test2"));
	printf("mine : [%d]\n", ft_strcmp("test6", "test1"));
	printf("real : [%d]\n\n", strcmp("test6", "test1"));

	printf("\033[0;33m----------ft_write----------\n\033[00m");
	printf("\n");
	out = write(fd2, "Bonjour", 7);
    printf("\nThe real write does : %ld\n", out);
    out = ft_write(fd, "Bonjour", 7);
    printf("\nMy write does : %ld\n", out);
    out = write(1, "", 0);
    printf("\nThe real write does : %ld\n", out);
    out = ft_write(1, "", 0);
    printf("\nMy write does : %ld\n", out);
    out = write(-1, "Bonjour", 7);
    printf("\nThe real write does : %ld\n", out);
    out = ft_write(-1, "Bonjour", 7);
    printf("\nMy write does :%ld\n", out);

    printf("\033[0;33m----------ft_read----------\n\033[00m");
    fd = open("real.txt", O_RDONLY);
    out = read(fd, buf, 8);
    printf("\nThe real read does : %ld --%s--\n", out, buf);
    fd = open("real.txt", O_RDONLY);
    out = ft_read(fd, buf, 8);
    printf("\nMy read does : %ld --%s--\n", out, buf);
    fd = open("real.txt", O_RDONLY);
    out = read(fd, buf2, 8);
    printf("\nThe real read does : %ld --%s--\n", out, buf);
    fd = open("real.txt", O_RDONLY);
    out = ft_read(fd, buf2, 8);
    printf("\nMy read does : %ld --%s--\n", out, buf);
    out = ft_read(-1, buf3, 8);
    printf("\nThe real read does : %ld --%s--\n", out, buf3);
    out = ft_read(-1, buf3, 8);
    printf("\nMy read does : %ld --%s--\n", out, buf3);

	printf("\033[0;33m----------ft_strdup----------\n\033[00m");
	printf("mine : [%s]\n", ft_strdup("test"));
	printf("real : [%s]\n\n", strdup("test"));
	printf("mine : [%s]\n", ft_strdup("Ceci est un test quand meme pas mal plus lonng"));
	printf("real : [%s]\n\n", strdup("Ceci est un test quand meme pas mal plus lonng"));
	printf("mine : [%s]\n", ft_strdup(""));
	printf("real : [%s]\n\n", strdup(""));

	return (0);
}
