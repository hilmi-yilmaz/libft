#include <stdio.h>
#include "../libft.h"
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
	t_list	*last;

	int nb = 0;
	int nb1 = 1;
	int nb2 = 2;
	int nb3 = 3;

	head = ft_lstnew(&nb);
	new = ft_lstnew(&nb1);
	new1 = ft_lstnew(&nb2);
	new2 = ft_lstnew(&nb3);

	ft_lstadd_front(&head, new);
	ft_lstadd_front(&head, new1);
	ft_lstadd_front(&head, new2);

	print_list(head);
	
	last = ft_lstlast(head);
	printf("last element: %d\n", *(int*)last->content);

	//Free the allocated memory
	while (head != NULL)
	{
		t_list *temp = head;
		head = head->next;
		free(temp);
	}
	
	//We do not free 'last' because that is a pointer to the last element of the linked list
	return (0);
}
