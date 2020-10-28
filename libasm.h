/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiahechaichi <sofiahechaichi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:01:16 by sofiahechai       #+#    #+#             */
/*   Updated: 2020/10/28 19:26:53 by sofiahechai      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define STRLEN(x) printf("str=%s MINE: %d REAL: %d", x, (int)ft_strlen(x), (int)strlen(x));

size_t	ft_strlen(const char *s);

#endif