/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_lstnew.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 20:54:17 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/13 17:53:21 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%d ", *(int*)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

int		main(void)
{
	t_list	*head;
	t_list	*new;
	t_list	*new1;
	t_list	*new2;
	t_list	*new3;
	int		nb = 5;
	int		nb1 = 100;
	int		nb2 = 200;
	int		nb3 = 77;
	int		nb4 = 999;

	//Create the head of our linked list and 
	//the element "new" which will be added in front of our list
	head = ft_lstnew(&nb);
	new = ft_lstnew(&nb1);
	new1 = ft_lstnew(&nb2);
	new2 = ft_lstnew(&nb3);
	new3 = ft_lstnew(&nb4);

	//Add new at the end of the linked list
	ft_lstadd_back(&head, new);
	ft_lstadd_back(&head, new1);
	ft_lstadd_back(&head, new2);
	ft_lstadd_front(&head, new3);

	//Print the results after
	print_list(head);

	//Free the allocated elements
	while (head != NULL)
	{
		t_list	*temp = head;
		head = head->next;
		free(temp);
	}
	return (0);
}
