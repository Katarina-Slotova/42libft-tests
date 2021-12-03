#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int main(void)
{
	int array[4] = {1, 2, 3, 4};
	int *array2;
	int i;
	size_t n;

	n = 16;
	i = 0;
	array2 = ft_memalloc(n);
	while(i != 4)
	{
		array2[i] = array[i];
		if (array[i] == array2[i])
			printf("SUCCESS: Memory for new 4-digit array allocated and number <<%d>> added to the array.\n", array2[i]);
		else
			printf("FAIL: Memory for new 4-digit array allocated and number <<%d>> added to the array.\n", array2[i]);
		i++;
	}
}
