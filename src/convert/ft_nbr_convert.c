/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_convert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:12:40 by msloot            #+#    #+#             */
/*   Updated: 2023/11/19 19:44:52 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline char	*ft_nbr_convert(char *dst, ssize_t n, size_t n_len)
{
	return (ft_nbr_convert_base(dst, n, n_len, (t_base){"0123456789", 10}));
}
