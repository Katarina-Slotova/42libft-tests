#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

void	ft_del(void *ptr, size_t size)
{
	memset(ptr, 'a', size - 1);
}

int	main(void)
{
	char	str[]="test string", *ptr1, *ptr2, *ptr3;
	size_t	n;
	t_list	*lst1, *lst2, *lst3;

	n = sizeof(*str) * (strlen(str) + 1);
	lst1 = ft_lstnew(str, n);
	lst2 = ft_lstnew(str, n);
	lst3 = ft_lstnew(str, n);
	lst1->next = lst2;
	lst2->next = lst3;
	ptr1 = lst1->content;
	ptr2 = lst2->content;
	ptr3 = lst3->content;
	ft_lstdel(&lst1, &ft_del);
/* 	if ((ft_strcmp("aaaaaaaaaaa", ptr1) == 0) && (ft_strcmp("aaaaaaaaaaa", ptr2) == 0) && (ft_strcmp("aaaaaaaaaaa", ptr2) == 0))
		printf("here2"); */
	if (!lst1)
		printf("SUCCESS");
	else
		printf("FAIL");
	free(ptr1);
	free(ptr2);
	free(ptr3);
}