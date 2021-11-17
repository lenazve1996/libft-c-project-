/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:30:08 by ayajirob          #+#    #+#             */
/*   Updated: 2021/11/17 19:44:19 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    *lst = new;
    new->next = *lst;
    if (*lst == NULL)
        *lst = new;
        new->next = NULL;

    // if (*lst == NULL)
    // {
    //     *lst = new;
    //     new->next = NULL;
    // }
    // else
    // {
    //     *lst = new;
    //     new->next = *lst;
    // }
}