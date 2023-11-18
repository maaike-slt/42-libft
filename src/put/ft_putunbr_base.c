/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:55:10 by msloot            #+#    #+#             */
/*   Updated: 2023/11/18 19:06:12 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putunbr_base(size_t n, const char *base)
{
	char	str[12];	// TODO: malloc
	size_t	base_len;

	base_len = ft_check_base(base);
	if (base_len == 0)
		return (-16);
	ft_uintcpy_base(str, n, base, base_len);
	return (ft_putstr(str));
}
