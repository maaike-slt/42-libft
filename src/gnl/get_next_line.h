/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:56:09 by msloot            #+#    #+#             */
/*   Updated: 2024/03/05 16:51:25 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	4096
# endif

# ifndef FD_SIZE
#  define FD_SIZE	1024
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

char	*get_next_line(int fd);

size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strjoin_free(char *s1, char *s2, bool free_s1, bool free_s2);

#endif
