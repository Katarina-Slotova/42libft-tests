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

	ptr = ft_strnstr(haystack, needle, 31);
	ptr1 = strnstr(haystack1, needle1, 31);
	ptr2 = ft_strnstr(haystack2, needle2, 31);
	ptr3 = strnstr(haystack3, needle3, 31);

	if (ptr == ptr1)
		printf("SUCCESS: My function and original function give the same output, the found substring is: <<%s>>. I was supposed to find <<%s>> in <<%s>>.\n", ptr, needle, haystack);
	else
		printf("FAIL: My function and original function do not give the same output, the found substring is: <<%s>>. I was supposed to find <<%s>> in <<%s>>.\n", ptr, needle, haystack);
	
	if (ptr2 == ptr3)
		printf("SUCCESS: My function and original function give the same output, the found substring is: <<%s>>. I was supposed to find <<%s>> in <<%s>>.\n", ptr2, needle2, haystack2);
	else
		printf("FAIL: My function and original function do not give the same output, the found substring is: <<%s>>. I was supposed to find <<%s>> in <<%s>>.\n", ptr2, needle2, haystack2);

	/* printf("Find <<%s>> in <<%s>>.\n", needle, haystack);
	ptr = ft_strnstr(haystack, needle, 31);
	printf("<<MY F>>This is the substring: %s\n", ptr);
	ptr1 = strnstr(haystack1, needle1, 31);
	printf("<<OG F>>This is the substring: %s\n", ptr1);
	printf("\n");
	printf("Find <<%s>> in <<%s>>.\n", needle2, haystack2);
	ptr2 = ft_strnstr(haystack2, needle2, 31);
	printf("<<MY F>>This is the substring: %s\n", ptr2);
	ptr3 = strnstr(haystack3, needle3, 31);
	printf("<<OG F>>This is the substring: %s\n", ptr3); */

	return (0);
}