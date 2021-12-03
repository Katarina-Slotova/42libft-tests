#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "This is a string with a . in it.";
	char str1[] = "This is a string with no dot in it, but I look for it anyway";
	char c = '.';
	char *ptr;
	char *ret;
	char *ptr1;
	char *ret1;

	ptr = ft_strchr(str, c);
	ret = strchr(str, c);
	if (ptr == ret)
		printf("SUCCESS: My function and original function give the same output <<%s>>. Tested string: <<This is a string with a . in it.>> Character looked for: <<.>>\n", ptr);
	else
		printf("FAIL: My function and original function do not give the same expected output: <<. in it.>>. Actual output: <<%s>>. Tested string: <<This is a string with a . in it.>> Character looked for: <<.>>\n", ptr);

	ptr1 = ft_strchr(str1, c);
	ret1 = strchr(str1, c);
	if (ptr1 == ret1)
		printf("SUCCESS: My function and original function give the same output <<%s>>. Tested string: <<This is a string with no dot in it, but I look for it anyway>> Character looked for: <<.>>\n", ptr1);
	else
		printf("FAIL: My function and original function give the same output <<(null)>>. Actual output: <<%s>>. Tested string: <<This is a string with no dot in it, but I look for it anyway>> Character looked for: <<.>>\n", ptr1);

	return (0);
}

/* int main(void)
{
	char str[] = "This is a string with a . in it.";
	char str1[] = "This is a string with no dot in it";
	char c = '.';
	char *ptr;
	char *ret;
	char *ptr1;
	char *ret1;

	ptr = ft_strchr(str, c);
	printf("The string after the character %c is | '%s' |.", c, ptr);
	printf("\n");
	ret = strchr(str, c);
	printf("The string after the character %c is | '%s' |.", c, ret);
	printf("\n");

	ptr1 = ft_strchr(str1, c);
	printf("The string after the character %c is | '%s' |.", c, ptr1);
	printf("\n");
	ret1 = strchr(str1, c);
	printf("The string after the character %c is | '%s' |.", c, ret1);

	return (0);
} */