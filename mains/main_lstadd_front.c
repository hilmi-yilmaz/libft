/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_lstnew.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 20:54:17 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/13 14:26:38 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);

int		main(void)
{
	t_list	*head;
	t_list	*new;
	int		nb = 5;
	int		nb1 = 100;

	//Create the head of our linked list and 
	//the element "new" which will be added in front of our list
	head = ft_lstnew(&nb);
	new = ft_lstnew(&nb1);

	printf("Before adding: %d ", *(int*)head->content);
	printf("%d\n", *(int*)new->content);

	//Add new at the beginning of the linked list
	ft_lstadd_front(&head, new);

	//Print the results after
	printf("After adding : %d ", *(int*)head->content);
	printf("%d\n", *(int*)head->next->content);

	//Free the allocated elements
	/*while (head != NULL)
	{
		t_list	*temp = head;
		head = head->next;
		free(temp);
	}*/
	free(head->next);
	free(head);
	
	return (0);
}
