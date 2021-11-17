/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:32:22 by ayajirob          #+#    #+#             */
/*   Updated: 2021/11/17 18:19:45 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int list_length;

    if (lst == NULL)
        return (0);
    
    list_length = 1;
    while (lst->next != NULL)
    {
        lst = lst->next;
        list_length++;
    }
    return (list_length);
}