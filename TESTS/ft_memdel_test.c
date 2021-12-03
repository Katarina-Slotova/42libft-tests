#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int	main(void)
{
	int		test[1];
	int		ctrl[1];
	void	*ptr;

	ctrl[0] = 0;
	test[0] = 1;
	ft_memdel(&ptr);
	if (!ptr)
	{
		test[0] = 0;
		printf("SUCCESS: Digits tested with are 0 and 1, expected returns are 0 and 0 & pointer shold be null. My returns and pointer: %d and %d, pointer: %s\n", *ctrl, *test, ptr);
	}
	else
		printf("FAIL: Digits tested with are 0 and 1, expected returns are 0 and 0 & pointer shold be null. My returns and pointer: %d and %d, pointer: %s\n", *ctrl, *test, ptr);
	return (0);
}