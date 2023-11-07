/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:54:46 by msloot            #+#    #+#             */
/*   Updated: 2023/11/07 16:00:21 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*arr_lst;

	arr_lst = (char *)malloc(sizeof(t_list) + 1);
	if (!arr_lst)
		return (NULL);
	arr_lst->content = content;
	arr_lst->next = NULL;
	return (arr_lst);
}
