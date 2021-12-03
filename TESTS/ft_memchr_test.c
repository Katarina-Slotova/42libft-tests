#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "We have some kind of a . string . in here...";
	char str2[] = "There is no dot in here, but I look for it anyway";
	char c = '.';
	
	if (ft_memchr(str1, c, 44) == memchr(str1, c, 44))
		printf("SUCCESS: My function and original function give the same output. String: <<We have some kind of a . string . in here...>>, character looked for: <<.>>\n");
	else 
		printf("FAIL: My function and original function do not give the same output. String: <<We have some kind of a . string . in here...>>, character looked for: <<.>>\n");
	if (ft_memchr(str2, c, 50) == memchr(str2, c, 50))
		printf("SUCCESS: My function and original function give the same output. String: <<There is no dot in here, but I look for it anyway>>, character looked for: <<.>>\n");
	else 
		printf("FAIL: My function and original function do not give the same output. String: <<There is no dot in here, but I look for it anyway>>, character looked for: <<.>>\n");
	return (0);
}

/* int main(void)
{
	const char str[] = "We have some knd of a . string . in here...";
	const char str2[] = "We have some knd of a . string . in here...";
	const char str3[] = "";
	const char str4[] = "";
	const char c = '.';
	char *ptr;
	char *ptr2;
	char *ptr3;
	char *ptr4;

	ptr = ft_memchr(str, c, 50);
	printf("MY FUNCT: The string followig the %c character is: | %s |\n", c, ptr);
	ptr2 = memchr(str2, c, strlen(str2));
	printf("ORIGINAL: The string followig the %c character is: | %s |\n", c, ptr2);
	ptr3 = ft_memchr(str3, c, 50);
	printf("MY FUNCT: The string followig the %c character is: | %s |\n", c, ptr3);
	ptr4 = ft_memchr(str4, c, 50);
	printf("MY FUNCT: The string followig the %c character is: | %s |\n", c, ptr4);
	return (0);
} */