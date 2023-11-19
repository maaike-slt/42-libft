/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbr_convert_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:10:20 by msloot            #+#    #+#             */
/*   Updated: 2023/11/19 19:47:44 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// no check over base matching base_len for optimization reasons
// the base_len is not needed if we calculate it inside the function using -
// ft_nbrlen_base, but all len calculation should be optimized
char	*ft_unbrcpy_base(char *dst, size_t n, const char *base, size_t base_len)
{
	size_t	len;

	if (n == 0)
	{
		dst[0] = base[0];
		dst[1] = '\0';
		return (dst);
	}
	len = ft_unbrlen_base(n, base_len);
	dst[len] = '\0';
	len--;
	while (n != 0)
	{
		dst[len] = base[n % base_len];
		n /= base_len;
		len--;
	}
	return (dst);
}

// n_len is the calculated len of n in base b
// it should be calculated thanks to ft_nbrlen_base
char	*ft_unbr_convert_base(
	char *dst,
	size_t n,
	size_t n_len,
	const t_base *b
)
{
	if (n == 0)
	{
		dst[0] = b->base[0];
		dst[1] = '\0';
		return (dst);
	}
	dst[n_len] = '\0';
	n_len--;
	while (n != 0)
	{
		dst[n_len] = b->base[n % b->len];
		n /= b->len;
		n_len--;
	}
	return (dst);
}
