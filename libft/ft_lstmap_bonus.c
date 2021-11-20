/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:12:46 by ayajirob          #+#    #+#             */
/*   Updated: 2021/11/20 20:57:15 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

// void *lstmap_f(void *content)
// {
//     (void)content;
//     return ("OK !");
// }

// void 		ft_lstdelone(t_list *lst, void (*del)(void*))
// {
//     del(lst->content);
//     free (lst);
//     lst = NULL;
// }

// void ft_lstclear(t_list **lst, void (*del)(void*))
// {
//     t_list  *tmp;

//     while(*lst != NULL)
//     {
//         tmp = *lst;
//         *lst = tmp->next;
//        ft_lstdelone(tmp, del); 
//        lst = NULL;
//     }
// }

// t_list *ft_lstnew(void *content)
// {
// 	t_list	*new_element = (t_list *)malloc(sizeof(t_list));
// 	if(!new_element)
// 		return (NULL);
// 	new_element->content = content;
// 	new_element->next = NULL;
// 	return (new_element);
// }

// int ft_lstsize(t_list *lst)
// {
//     int list_length;

//     if (lst == NULL)
//         return (0);
    
//     list_length = 1;
//     while (lst->next != NULL)
//     {
//         lst = lst->next;
//         list_length++;
//     }
//     return (list_length);
// }

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_lst;
    t_list  *start;
    char    *new_content;

    new_lst = ft_lstnew(f(lst->content));
    if (new_lst == NULL)
        return (NULL);
    start = new_lst;
    lst = lst->next;
    while (lst)
    {
        new_content = f(lst->content);
        new_lst->next = ft_lstnew(new_content);
        if (new_lst->next == NULL)
        {
            ft_lstclear(&start, del);
            return (NULL);
        }
        lst = lst->next;
        new_lst = new_lst->next;
    }
    new_lst->next = NULL;
    return (start);
}

// int main()
// {

//     t_list *l = ft_lstnew(strdup(" 1 2 3 "));
//     t_list *ret;

//     l->next = ft_lstnew(strdup("ss"));
//     l->next->next = ft_lstnew(strdup("-_-"));
//     printf("%s\n", l->content);
//     printf("%s\n", l->next->content);
//     printf("%s\n", l->next->next->content);
//     printf("%s\n", l->next->next->next);
//     ret = ft_lstmap(l, lstmap_f, NULL);
//     if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
//     {
//         printf("%s\n", "TEST_SUCCESS");
//         return(0);
//     }
//         else
//     {
//         printf("%s\n", "TEST_FAILED");
//         return(0);
//     }
// }