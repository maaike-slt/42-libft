/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intcpy_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:10:20 by msloot            #+#    #+#             */
/*   Updated: 2023/11/18 18:45:49 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// no check over base matching base_len for optimization reasons
// the base_len is not needed if we calculate it inside the function using -
// ft_intlen_base, but all len calculation should be optimized
char	*ft_intcpy_base(char *dst, ssize_t n, const char *base, size_t base_len)
{
	size_t	len;

	if (n == 0)
	{
		dst[0] = base[0];
		dst[1] = '\0';
		return (dst);
	}
	len = ft_intlen_base(n, base_len);
	dst[len] = '\0';
	len--;
	if (n < 0)
	{
		n = -n;
		dst[0] = '-';
	}
	while (n != 0)
	{
		dst[len] = base[n % base_len];
		n /= base_len;
		len--;
	}
	return (dst);
}
