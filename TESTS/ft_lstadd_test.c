#include "ft_tests.h"
#include EVAL_DIR
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *node3;
	
	node1 = (t_list*)malloc(sizeof(t_list));
	node2 = (t_list*)malloc(sizeof(t_list));
	node3 = (t_list*)malloc(sizeof(t_list));
	
	node1->content = "node1 content";
	node1->next = node2;

	node2->content = "node2 content";
	node2->next = node3;
	
	node3->content = "node3 content";
	node3->next = NULL;

	ft_lstadd(&node1, node2);
	if (ft_strncmp(node1->content, "node2 content", 20) == 0)
		printf("SUCCESS: Node with data containing <<%s>> was added to the beginning of the list.\n", node1->content);
	else
		printf("FAIL: Node was not added to the beginning of the list.");
}