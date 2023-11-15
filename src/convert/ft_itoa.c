/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:31:06 by msloot            #+#    #+#             */
/*   Updated: 2023/11/15 18:19:24 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ret;
	size_t	len;

	len = ft_intlen(n);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	return (ft_intcpy(ret, n));
}

/*
#include <stdio.h>
#include <limits.h>

static void	test(int n)
{
	printf("%d:\t'%s'\n", n, ft_itoa(n));
}

int	main(void)
{
	test(0);
	test(1);
	test(-1);
	test(42);
	test(-42);
	test(4242);
	test(-4242);
	test(INT_MAX);
	test(INT_MIN);
}
*/
