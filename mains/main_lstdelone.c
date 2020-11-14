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

void	del(void *content)
{
	free(content);
}

int		main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;

	int		*ptr1;
	int		*ptr2;
	int		*ptr3;

	ptr1 = (int*)malloc(1 * sizeof(int));
	ptr2 = (int*)malloc(1 * sizeof(int));
	ptr3 = (int*)malloc(1 * sizeof(int));

	*ptr1 = 1;
	*ptr2 = 2;
	*ptr3 = 3;

	head = ft_lstnew(ptr1); //The argument to lstnew is the content 
	second = ft_lstnew(ptr2);
	third = ft_lstnew(ptr3);

	ft_lstadd_back(&head, second);
	ft_lstadd_back(&head, third);
	
	print_list(head);

	ft_lstdelone(third, del);

	print_list(head);

	//Free the allocated elements
	free(ptr1);
	free(ptr2);
	//free(ptr3);

	free(head->next);
	free(head);
	/*
	while (head != NULL)
	{
		t_list	*temp = head;
		head = head->next;
		free(temp);
	}*/
//gcc -Wall -Wextra -Werror -fsanitize=address -g mains/main_lstdelone.c ft_lstadd_back.c ft_lstadd_front.c ft_lstsize.c ft_lstnew.c ft_lstlast.c
}
