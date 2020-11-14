#include <stdio.h>
#include "../libft.h"
#include <stdlib.h>

int		main(void)
{
	t_list	*head;
	t_list	*new;
	t_list	*new1;
	int		len_ll;
	int		nb1 = 5;
	int		nb2 = 100;
	int		nb3 = 777;

	head = ft_lstnew(&nb1);
	new = ft_lstnew(&nb2);
	new1 = ft_lstnew(&nb3);

	printf("Before adding: %d\n", *(int*)head->content);

	ft_lstadd_front(&head, new);
	ft_lstadd_front(&head, new1);
	len_ll = ft_lstsize(head);

	printf("After adding : %d %d %d\n", *(int*)head->content, *(int*)head->next->content, *(int*)head->next->next->content);
	printf("Length of linked list: %d\n", len_ll);

	free(head->next->next);
	free(head->next);
	free(head);

	return (0);
}
