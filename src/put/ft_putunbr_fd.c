/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:19:22 by msloot            #+#    #+#             */
/*   Updated: 2023/11/18 19:03:47 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putunbr_fd(size_t n, int fd)
{
	char	str[12];

	ft_uintcpy(str, n);
	return (ft_putstr_fd(str, fd));
}
