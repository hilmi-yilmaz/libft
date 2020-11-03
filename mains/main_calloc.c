#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t ccount, size_t size);

int		main(void)
{
	size_t	i;
	size_t	count;
	i = 0;
	count = 1;

	/* USING C FUNCTION CALLOC WITH CHAR*/
	printf("C FUNCTION CALLOC WITH CHAR\n");
	char *ptr;
	ptr = (char*)calloc(count, sizeof(char));
	if (ptr == NULL)
		exit(0);
	while (i < count)
	{
		printf("%d\n", *(ptr + i));
		i++;
	}
	free(ptr);
		
	/* USING OWN FUNCTION CALLOC WITH CHAR*/
	printf("OWN FUNCTION CALLOC WITH CHAR\n");
	i = 0;
	char *own_ptr;
	own_ptr = (char*)ft_calloc(count, sizeof(char));
	if (own_ptr == NULL)
		exit(0);
	while (i < count)
	{
		printf("%d\n", *(own_ptr + i));
		i++;
	}
	free(own_ptr);
	
	/* USING C FUNCTION CALLOC WITH INT*/
	printf("C FUNCTION CALLOC WITH INT\n");
	i = 0;
	int *int_ptr;
	int_ptr = (int*)calloc(count, sizeof(int));
	if (int_ptr == NULL)
		exit(0);
	while (i < count * sizeof(int))
	{
		printf("%d\n", *((unsigned char*)int_ptr + i));
		i++;
	}
	free(int_ptr);
		
	/* USING OWN FUNCTION CALLOC WITH INT*/
	printf("OWN FUNCTION CALLOC WITH INT\n");
	i = 0;
	int *int_own_ptr;
	int_own_ptr = (int*)ft_calloc(count, sizeof(int));
	if (int_own_ptr == NULL)
		exit(0);
	while (i < count * sizeof(int))
	{
		printf("%d\n", *((unsigned char*)int_own_ptr + i));
		i++;
	}
	free(int_own_ptr);


	return (0);
}
