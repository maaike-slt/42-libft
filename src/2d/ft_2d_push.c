/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:22:03 by msloot            #+#    #+#             */
/*   Updated: 2024/12/10 18:03:58 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_2d_push(void ***ptr, void *val)
{
	size_t	size;
	void	**new;

	size = ft_2d_size((const void **)*ptr);
	new = (void **)malloc(sizeof(void *) * (size + 2));
	if (!new)
		return (NULL);
	ft_memcpy(new, *ptr, size);
	new[size] = val;
	new[size + 1] = NULL;
	free(*ptr);
	*ptr = new;
	return (new);
}
