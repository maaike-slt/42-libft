/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_convert_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:10:20 by msloot            #+#    #+#             */
/*   Updated: 2023/11/20 21:22:09 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// n_len is the calculated len of n in base b
// it should be calculated thanks to ft_nbrlen_base
char	*ft_nbr_convert_base(
	char *dst,
	ssize_t n,
	size_t n_len,
	const t_base *b
)
{
	size_t	un;

	if (n == 0)
	{
		dst[0] = b->base[0];
		dst[1] = '\0';
		return (dst);
	}
	dst[n_len] = '\0';
	n_len--;
	if (n < 0)
	{
		un = -n;
		dst[0] = '-';
	}
	else
		un = n;
	while (un != 0)
	{
		dst[n_len] = b->base[un % b->len];
		un /= b->len;
		n_len--;
	}
	return (dst);
}
