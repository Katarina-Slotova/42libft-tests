#include <stdio.h>
#include "ft_tests.h"
#include EVAL_DIR

int main(void)
{
	char *haystack = "Hello how are you how about you";
	char *needle = "how ";
	char *ptr;
	char *haystack1 = "Hello how are you how about you";
	char *needle1 = "how ";
	char *ptr1;
	char *haystack2 = "Hello how are you how about you";
	char *needle2 = "now ";
	char *ptr2;
	char *haystack3 = "Hello how are you how about you";
	char *needle3 = "now ";
	char *ptr3;

	ptr = ft_strstr(haystack, needle);
	ptr1 = strstr(haystack1, needle1);
	ptr2 = ft_strstr(haystack2, needle2);
	ptr3 = strstr(haystack3, needle3);

	if (ptr == ptr1)
		printf("SUCCESS: My function and original function give the same output, the found substring is: <<%s>>. I was supposed to find <<%s>> in <<%s>>.\n", ptr, needle, haystack);
	else
		printf("FAIL: My function and original function do not give the same output, the found substring is: <<%s>>. I was supposed to find <<%s>> in <<%s>>.\n", ptr, needle, haystack);
	
	if (ptr2 == ptr3)
		printf("SUCCESS: My function and original function give the same output, the found substring is: <<%s>>. I was supposed to find <<%s>> in <<%s>>.\n", ptr2, needle2, haystack2);
	else
		printf("FAIL: My function and original function do not give the same output, the found substring is: <<%s>>. I was supposed to find <<%s>> in <<%s>>.\n", ptr2, needle2, haystack2);

	return (0);
}

/* int main(void)
{
	char *haystack = "hello how are yu how about you";
	char *needle = "how";
	char *ptr;

	ptr = strstr(haystack, needle);

	printf("The substring is: %s\n", ptr);

	return (0);
} */
