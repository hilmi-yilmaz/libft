#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s ", (char*)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

void	map(void *content)
{
	*(char*)content = 'A';
}


int		main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;

	char	*ptr1 = strdup("hilmi");
	char	*ptr2 = strdup("yilmaz");
	char	*ptr3 = strdup("codam");

	head = ft_lstnew(ptr1);
	second = ft_lstnew(ptr2);
	third = ft_lstnew(ptr3);

	ft_lstadd_back(&head, second);
	ft_lstadd_back(&head, third);

	print_list(head);

	ft_lstiter(head, map);

	print_list(head);

	//Free the linked list
	t_list	*temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
