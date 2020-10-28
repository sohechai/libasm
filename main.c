/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:51:51 by sofiahechai       #+#    #+#             */
/*   Updated: 2020/10/28 19:51:20 by sofiahechai      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

size_t	ft_strlen(const char *s);

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
	char *str;

	str = "salut";

	printf("_________FT STRLEN _________\n");
	printf("`%s` = mine = [%zu] real = [%d]\n", str, ft_strlen(str), (int)strlen(str));
	printf("###########################\n");

    return (0);
}
