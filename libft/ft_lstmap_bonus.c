/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:12:46 by ayajirob          #+#    #+#             */
/*   Updated: 2021/11/18 00:03:54 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    int     size_of_lst;
    t_list  *new_lst;
    
    size_of_lst = ft_lstsize(lst);
    new_lst = (t_list *)malloc(sizeof(lst));
    if (new_lst == NULL)
    {
        ft_lstclear(&new_lst, del);
    }
    new_lst = f(lst->content);
    lst = lst->next;
    while (size_of_lst-- > 0)
    {
        new_lst->next = f(lst->content);
        lst = lst->next;
    }
    lst->next = NULL;
    return (new_lst);
}
