#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int main(void)
{
	t_list	*new_str;
	t_list	*other_str;
	t_list	*more_str;
	t_list	*last_str;

	new_str = ft_lstnew("42abc", 20);
	other_str = ft_lstnew("42\t", 20);
	more_str = ft_lstnew("****", 20);
	last_str = ft_lstnew("\t42", 20);
	
	if (ft_strcmp(new_str->content, "42abc") == 0)
		printf("SUCCESS: New node with data containing <<%s>> was created.\n", new_str->content);
	else
		printf("FAIL: Node was not created.");
	if (ft_strcmp(other_str->content, "42\t") == 0)
		printf("SUCCESS: New node with data containing <<%s>> was created.\n", other_str->content);
	else
		printf("FAIL: Node was not created.");
	if (ft_strcmp(more_str->content, "****") == 0)
		printf("SUCCESS: New node with data containing <<%s>> was created.\n", more_str->content);
	else
		printf("FAIL: Node was not created.");
	if (ft_strcmp(last_str->content, "\t42") == 0)
		printf("SUCCESS: New node with data containing <<%s>> was created.\n", last_str->content);
	else
		printf("FAIL: Node was not created.");

	return (0);
}

/* int    main() 
{     
	printf("\nBONUS LISTS !\n");     
	int        tab[20];     
	t_list    *begin;     
	t_list    *begin2;  

	*tab = 12;     
	begin = ft_lstnew(tab, 20);     
	printf("Test de ft_lstnew :\n");     
	if (begin && !begin->next && begin->content && *((int*)begin->content) == 12)         
		printf("OK\n");     
	else
		printf("Failed.\n");    
	begin = ft_lstnew ("let's", 6);     
	begin2 = ft_lstnew("go", 3);     
	begin->next = begin2;     
	while (begin)     
	{         
		printf ("%s\n", begin->content);         
		printf ("%s\n", begin2->content);         
		begin = begin->next;     
	} 
} */

/* int    main() 
{     
	printf("\nBONUS LISTS !\n");     
	int        tab[20];     
	t_list    *begin;     
	t_list    *begin2;  

	*tab = 12;     
	begin = ft_lstnew(tab, 20);     
	printf("Test de ft_lstnew :\n");     
	if (begin && !begin->next && begin->content && *((int*)begin->content) == 12)         
		printf("OK\n");     
	else
		printf("Failed.\n");    
	begin = ft_lstnew ("let's", 6);     
	begin2 = ft_lstnew("go", 3);     
	begin->next = begin2;     
	while (begin)     
	{         
		printf ("%s\n", begin->content);         
		printf ("%s\n", begin2->content);         
		begin = begin->next;     
	} 
} */