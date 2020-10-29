/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:01:16 by sofiahechai       #+#    #+#             */
/*   Updated: 2020/10/29 16:15:45 by sofiahechai      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBASM_H
# define _LIBASM_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define STRLEN(x) printf("str=[%s] MINE: %d | REAL: %d\n", x, (int)ft_strlen(x), (int)strlen(x));

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);

#endif