#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <stdlib.h>

static void	ft_list_iter(t_list *lst)
{
	char	*str;

	str = (char *)lst->content;
	while (*str)
		++(*str++);
}

int main(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd(&lst, ft_lstnew("test3", 5));
	ft_lstadd(&lst, ft_lstnew("test2", 5));
	ft_lstadd(&lst, ft_lstnew("test1", 5));
	ft_lstiter(lst, &ft_list_iter);
	ft_lstiter(lst, &ft_list_iter);
	if (!ft_strcmp((char *)lst->content, "vguv3")
		&& !ft_strcmp((char *)lst->next->content, "vguv4")
		&& !ft_strcmp((char *)lst->next->next->content, "vguv5"))
		printf("SUCCESS: iteration through list was successful.");
	else 
	printf("FAIL: iteration through the list and application of function was not successful.");
}