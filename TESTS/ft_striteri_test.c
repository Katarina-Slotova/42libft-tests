#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

/* void ft_res(unsigned int i, char *c)
{
	ft_putnbr(i);
	printf("%s\n", c);
}

int main(void)
{
	char str[] = "Hello!";
	char str1[] = "    ";
	ft_striteri(str, ft_res);
	ft_striteri(str1, ft_res);
	return (0);
} */

void ft_capitalize(char *a)
{
	if (*a >= 'a' && *a <= 'z')
		*a = *a - 32;
}

int main()
{
	char test[] = "Hello World.";
  
	ft_striter(test, &ft_capitalize);
	if (ft_strcmp(&test[0], "HELLO WORLD.") == 0)
		printf("SUCCESS: Original string <<Hello World.>> capitalized like this: %s", &test[0]);
	else 
		printf("FAIL: Original string <<Hello World.>> was not capitalized as expected. The actual output: %s", &test[0]);
	return 0;
}