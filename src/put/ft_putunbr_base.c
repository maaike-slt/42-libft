/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:55:10 by msloot            #+#    #+#             */
/*   Updated: 2023/11/19 19:18:29 by adelille         ###   ########.fr       */
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
	ft_unbrcpy_base(str, n, base, base_len);
	return (ft_putstr(str));
}
