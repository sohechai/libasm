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

int		main(void)
{
	// int		i;
	// long	r;
	// char	buffer[100];
	// char	*tmp;
	// char	*tmp2;

	// r = 0;
	// i = 0;
	// while (i < 100)
	// 	buffer[i++] = 0;

	char dest[100];

	printf("_________ft_strlen________\n\n");
	STRLEN("");
	STRLEN("i");
	STRLEN("salut");
	STRLEN("salutsalut");
	printf("\n##########################\n\n");

	printf("_________ft_strcpy________\n\n");
	printf("MINE = [%s] REAL = [%s]\n", ft_strcpy(dest, "salut"), strcpy(dest, "salut"));
	printf("MINE = [%s] REAL = [%s]\n", ft_strcpy(dest, "Ceci est un test"), strcpy(dest, "Ceci est un test"));
	printf("MINE = [%s] REAL = [%s]\n", ft_strcpy(dest, ""), strcpy(dest,""));
	printf("\n##########################\n\n");

	printf("_________ft_strcmp________\n\n");
	printf("test : 'salut' -> MINE = [%d] REAL = [%d]\n", ft_strcmp("salut", "salut"), strcmp("salut", "salut"));
	printf("test : '' -> MINE = [%d] REAL = [%d]\n", ft_strcmp("sofia", "zidane"), strcmp("sofia","zidane"));
	printf("test : '' -> MINE = [%d] REAL = [%d]\n", ft_strcmp("z", "a"), strcmp("z","a"));
	printf("\n##########################\n\n");

    return (0);
}
