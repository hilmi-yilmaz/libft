/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_lstnew.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 20:54:17 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/13 13:28:45 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content);

int		main(void)
{
	
	t_list	*head;
	t_list	*head1;
	int		nb = 5;
	char	*str = "hilmi";

	head = ft_lstnew(&nb);
	head1 = ft_lstnew(str);

	printf("%d\n", *(int*)head->content);
	printf("%s\n", (char*)head1->content);

	free(head);
	free(head1);

	return (0);
}
