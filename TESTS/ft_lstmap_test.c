#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

t_list	*ft_res(t_list *lst)
{
	char	*str;
	int		i;

	str = (char *)lst->content;
	i = 0;
	while (str[i])
	{
		str[i] = *str + 1;
		i++;
	}
	return (lst);
}

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;

	lst1 = NULL;
	ft_lstadd(&lst1, ft_lstnew("test3", 5));
	ft_lstadd(&lst1, ft_lstnew("test2", 5));
	ft_lstadd(&lst1, ft_lstnew("test1", 5));
	lst2 = ft_lstmap(lst1, &ft_res);
	if (ft_strcmp((char *)lst2->content, "uftu2")
		&& ft_strcmp((char *)lst2->next->content, "uftu3")
		&& ft_strcmp((char *)lst2->next->next->content, "uftu4"))
		printf("SUCCESS");
	else
		printf("FAIL: Lstmap did not apply the function to elements correctly.");
}