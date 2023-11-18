/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:19:22 by msloot            #+#    #+#             */
/*   Updated: 2023/11/18 19:06:57 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putnbr_fd(ssize_t n, int fd)
{
// TODO: create ft_putnbr_base_fd and use it instead
	char	str[12];

	ft_intcpy(str, n);
	return (ft_putstr_fd(str, fd));
}
