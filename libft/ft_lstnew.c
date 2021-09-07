#include "libft_bonus.h"

t_list *ft_lstnew(void *content)
{
	t_list	*new_element = (t_list*)malloc(sizeof(t_list*);
	if(!new_element)
		return (NULL);
	t_list->content = content;
	t_list->next = NULL;
	return (new_element);
}
