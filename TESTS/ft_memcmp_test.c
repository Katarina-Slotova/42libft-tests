#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100] = "hello";
	char str2[100] = "HHEELLOO";
	char str3[100] = "";
	char str4[100] = "";
	char ptr;
	char ret;
	char ptr1;
	char ret1;

	ptr = ft_memcmp(str1, str2, 10);
	ret = memcmp(str1, str2, 10);
	ptr1 = ft_memcmp(str3, str4, 10);
	ret1 = memcmp(str3, str4, 10);

	if (ptr == ret)
		printf("SUCCESS: My function and origial function give the same output, i.e. string <<%s>> is greater than <<%s>>.\n", str1, str2);
	else
		printf("FAIL: My function and origial function do not give the same output. String <<%s>> should be greater than <<%s>>.\n", str1, str2);

	if (ptr1 == ret1)
		printf("SUCCESS: My function and origial function give the same output --- I compared two empty strings and they are identical.\n");
	else
		printf("FAIL: My function and origial function do not give the same output. I compared two empty strings and they should be identical.\n");
	

/* 	printf("Str1: hello, str2: HHEELLOO.\n");
	if (ptr > 0)
		printf("The str1 is greater than str2.\n");
	else if (ptr < 0)
		printf("The str2 is greater than str1.\n");
	else
		printf("The strings are identical.\n");

	if (ret > 0)
		printf("The str1 is greater than str2.\n");
	else if (ret < 0)
		printf("The str2 is greater than str1.\n");
	else
		printf("The strings are identical.\n");

	printf("Two empty strings.\n");
	if (ptr1 > 0)
		printf("The str3 is greater than str4.\n");
	else if (ptr1 < 0)
		printf("The str3 is greater than str4.\n");
	else
		printf("The strings are identical.\n");

		if (ret1 > 0)
		printf("The str3 is greater than str4.\n");
	else if (ret1 < 0)
		printf("The str3 is greater than str4.\n");
	else
		printf("The strings are identical.\n"); */

	return (0);
}