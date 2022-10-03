/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/09/21 22:19:11 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	while (*lst)
	{
		ft_lstdelone(*lst, del);
		*lst = (*lst)-> next;
	}
	lst = NULL;
}

// static void	del(void *del_content)
// {

// 	del_content = NULL;
// }

// int main (void)
// {
// 	char 	*content_node = "abcd";
// 	char 	*content_new_node_1 = "efgh";
// 	char 	*content_new_node_2 = "ijklm";
// 	t_list	*list_node;
// 	t_list	*list_new_node1;
// 	t_list	*list_new_node2;
// 	t_list	**list;

// 	list = &list_node;
// 	list_node = ft_lstnew(content_node);
// 	list_new_node1 = ft_lstnew(content_new_node_1);
// 	list_new_node2 = ft_lstnew(content_new_node_2);
// 	ft_lstadd_back(list, list_new_node1);
// 	ft_lstadd_back(list, list_new_node2);
// 	printf("content of lst before_del is %s \n", (char *)(*list) -> content);
// 	ft_lstclear(list, del);
// 	printf("content of lst after_del is %s \n", (char *)(*list) -> content);
// 	return (0);
// }
