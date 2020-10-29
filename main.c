/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:51:51 by sofiahechai       #+#    #+#             */
/*   Updated: 2020/10/29 18:44:59 by sofiahechai      ###   ########lyon.fr   */
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

	char dest[7];

	printf("_________ft_strlen________\n\n");
	STRLEN("");
	STRLEN("i");
	STRLEN("salut");
	STRLEN("salutsalut");
	printf("\n##########################\n\n");

	printf("_________ft_strcpy________\n\n");
	printf("test : 'salut' -> MINE = [%s] REAL = [%s]\n", ft_strcpy(dest, "salut"), strcpy(dest, "salut"));
	printf("test : '' -> MINE = [%s] REAL = [%s]\n", ft_strcpy(dest, ""), strcpy(dest,""));
	printf("\n##########################\n\n");

    return (0);
}
