/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:51:51 by sofiahechai       #+#    #+#             */
/*   Updated: 2020/10/29 20:28:53 by sofiahechai      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int        main()
{
    char dst[10];

    //int mine;
    //int real;

    //mine = 0;
    //real = 0; // faire la comparaison sur chaque test
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
    printf("mine : [%ld]\n", ft_write(1, "test", 5));
    printf("real : [%ld]\n\n", write(1, "test", 5));
    printf("mine : [%ld]\n", ft_write(1,"tes", 4));
    printf("real : [%ld]\n\n", write(1, "tes", 4));
    printf("mine : [%ld]\n", ft_write(-1,"ceci est un test", 4));
    printf("real : [%ld]\n\n", write(-1, "ceci est un test", 4));
    printf("\033[0;33m----------ft_strdup----------\n\033[00m");
    printf("mine : [%s]\n", ft_strdup("test"));
    printf("real : [%s]\n\n", strdup("test"));
	printf("mine : [%s]\n", ft_strdup("Ceci est un test quand meme pas mal plus lonng"));
    printf("real : [%s]\n\n", strdup("Ceci est un test quand meme pas mal plus lonng"));
	printf("mine : [%s]\n", ft_strdup(""));
    printf("real : [%s]\n\n", strdup(""));
    return (0);
}
