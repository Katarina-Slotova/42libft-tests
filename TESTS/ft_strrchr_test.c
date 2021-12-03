#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int main(void)
{
	char c = '.';
	const char str[] = "This is a string . with three . in it, but I am looking only for the last . in it";
	char *ptr;
	char *ret;
	const char str1[] = "This is a string with no dot in it, but I am looking for a dot anyway";
	char *ptr1;
	char *ret1;

	ptr = ft_strrchr(str, c);
	ret = strrchr(str, c);
	ptr1 = ft_strrchr(str1, c);
	ret1 = strrchr(str1, c);

	if (ptr == ret)
		printf("SUCCESS: My function and the original function give the same output: <<%s>>. The searched string is <<%s>> and the character looked for is <<%c>>.\n", ptr, str, c);
	else
		printf("FAIL: My function and the original function do not give the same output. The searched string is <<%s>> and the character looked for is <<%c>>.The expected output is <<. in it>>, actual output is: <<%s>> \n", str, c, ptr);
	
	if (ptr1 == ret1)
		printf("SUCCESS: My function and the original function give the same output: <<%s>>. The searched string is <<%s>> and the character looked for is <<%c>>.\n", ptr1, str1, c);
	else
		printf("FAIL: My function and the original function do not give the same output. The searched string is <<%s>> and the character looked for is <<%c>>.The expected output is <<. in it>>, actual output is: <<%s>> \n", str1, c, ptr1);

	return (0);
}

/* int main(void)
{
	char c = '.';
	const char str[] = "This is a string . with three . in it, but I am looking only for the last . in it\n";
	char *ptr;
	char *ret;

	const char str1[] = "This is a string with no dot in it, but I am looking for a dot anyway\n";
	char *ptr1;
	char *ret1;

	printf("%s", str);
	ptr = ft_strrchr(str, c);
	printf("<<MY F>>The string after the character %c is: %s", c, ptr);
	ret = strrchr(str, c);
	printf("<<OG F>>The string after the character %c is: %s", c, ret);
	printf("\n");

	printf("%s", str1);
	ptr1 = ft_strrchr(str1, c);
	printf("<<MY F>>The string after the character %c is: %s", c, ptr1);
	ret1 = strrchr(str1, c);
	printf("<<OG F>>The string after the character %c is: %s", c, ret1);
	return (0);
} */
