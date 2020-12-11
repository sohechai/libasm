/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:51:51 by sofiahechai       #+#    #+#             */
/*   Updated: 2020/11/23 01:43:04 by sofiahechai      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
# include <errno.h>
#define BUF 32

int		main(void)
{
	char dst[6];
	char buf[6];
	int	 fd;

	printf("\033[0;33m----------ft_strlen----------\n\033[00m");
	printf("\nmine : %ld\n", ft_strlen("test"));
	printf("real : %ld\n\n", strlen("test"));
	printf("mine : %ld\n", ft_strlen(""));
	printf("real : %ld\n\n", strlen(""));
	printf("mine : %ld\n", ft_strlen("ceci est un autre test"));
	printf("real : %ld\n\n", strlen("ceci est un autre test"));
	printf("mine : %ld\n", ft_strlen("123----9546--0-96"));
	printf("real : %ld\n\n", strlen("123----9546--0-96"));

	printf("mine : %ld\n", ft_strlen("ceci est un autre testhihihihihhihihiihihihihihihihihihihihiihihihihihihihihhiihihihihihihihi"));
	printf("real : %ld\n\n", strlen("ceci est un autre testhihihihihhihihiihihihihihihihihihihihiihihihihihihihihhiihihihihihihihi"));

	printf("\033[0;33m----------ft_strcpy----------\n\033[00m");
	printf("\nmine : %s\n", ft_strcpy(dst, "test"));
	printf("real : %s\n\n", strcpy(dst, "test"));
	printf("mine : %s\n", ft_strcpy(dst, ""));
	printf("real : %s\n\n", strcpy(dst, ""));

	//printf("mine : %s\n", ft_strcpy(dst, "012345679azertyuiopqsdfghjklmwxcvbn"));
	//printf("real : %s\n\n", strcpy(dst, "012345679azertyuiopqsdfghjklmwxcvbn"));

	printf("\033[0;33m----------ft_strcmp----------\n\033[00m");
	printf("\nmine : %d\n", ft_strcmp("test", "test"));
	printf("real : %d\n\n", strcmp("test", "test"));
	printf("mine : %d\n", ft_strcmp("test1", "test2"));
	printf("real : %d\n\n", strcmp("test1", "test2"));
	printf("mine : %d\n", ft_strcmp("test6", "test1"));
	printf("real : %d\n\n", strcmp("test6", "test1"));

	printf("mine : [%d]\n", ft_strcmp("", ""));
	printf("real : [%d]\n\n", strcmp("", ""));

	printf("mine : [%d]\n", ft_strcmp("", "test1"));
	printf("real : [%d]\n\n", strcmp("", "test1"));

	printf("mine : [%d]\n", ft_strcmp("test6", ""));
	printf("real : [%d]\n\n", strcmp("test6", ""));

	printf("\033[0;33m----------ft_write----------\n\033[00m");
	printf("\n");
	dprintf(1, "  mine : %ld  ||  ", ft_write(1, "test", 5));
	dprintf(1, "errno = %d\n", errno);
	errno = 0;
	dprintf(1, "  real : %ld  ||  ", write(1, "test", 5));
	dprintf(1, "errno = %d\n\n", errno);
	errno = 0;
	dprintf(1, "  mine : %ld  ||  ", ft_write(-15, "TES", 4));
	dprintf(1, "errno = %d\n", errno);
	errno = 0;
	dprintf(1, "  real : %ld  ||  ", write(-15, "TES", 4));
	dprintf(1, "errno = %d\n\n", errno);
	errno = 0;
	dprintf(1, "  mine : %ld  ||  ", ft_write(10, "ceci est un test", 4));
	dprintf(1, "errno = %d\n", errno);
	errno = 0;
	dprintf(1, "  real : %ld  ||  ", write(10, "ceci est un test", 4));
	dprintf(1, "errno = %d\n\n", errno);
	errno = 0;

	printf("\033[0;33m----------ft_read----------\n\033[00m");
	printf("\n");
	fd = open("txt/file.txt", O_RDONLY);
	dprintf(1, "  mine : %ld  ||  ", ft_read(fd, buf, 10));
	dprintf(1, "errno = %d\n", errno);
	errno = 0;
	fd = open("txt/file.txt", O_RDONLY);
	dprintf(1, "  real : %ld  ||  ", read(fd, buf, 10));
	dprintf(1, "errno = %d\n\n", errno);
	errno = 0;
	fd = open("txt/file.t", O_RDONLY);
	dprintf(1, "  mine : %ld  ||  ", ft_read(fd, buf, 0));
	dprintf(1, "errno = %d\n", errno);
	errno = 0;
	fd = open("txt/file.t", O_RDONLY);
	dprintf(1, "  real : %ld  ||  ", read(fd, buf, 0));
	dprintf(1, "errno = %d\n\n", errno);
	errno = 0;
	fd = open("txt/file.txt", O_RDONLY);
	dprintf(1, "  mine : %ld  ||  ", ft_read(fd, buf, -1));
	dprintf(1, "errno = %d\n", errno);
	errno = 0;
	fd = open("txt/file.txt", O_RDONLY);
	dprintf(1, "  real : %ld  ||  ", read(fd, buf, -1));
	dprintf(1, "errno = %d\n\n", errno);
	errno = 0;

	printf("\033[0;33m----------ft_strdup----------\n\033[00m");
	printf("mine : %s\n", ft_strdup("test"));
	printf("real : %s\n\n", strdup("test"));
	printf("mine : %s\n", ft_strdup("t"));
	printf("real : %s\n\n", strdup("t"));
	printf("mine : %s\n", ft_strdup(""));
	printf("real : %s\n\n", strdup(""));

	printf("mine : %s\n", ft_strdup("testazertyuioazertyuioazertyuioazertyuioazertyuioazertyuioazertyuiozertyuioazertyuiazertyuiazertyuizertyuio"));
	printf("real : %s\n\n", strdup("testazertyuioazertyuioazertyuioazertyuioazertyuioazertyuioazertyuiozertyuioazertyuiazertyuiazertyuizertyuio"));

	return (0);
}
