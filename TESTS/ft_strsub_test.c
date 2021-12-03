#include "ft_tests.h"
#include EVAL_DIR
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *str1 = "This is an excited string.";
	char *str2 = "";
	char *str3 = "   */-+\t";
	unsigned int index1 = 11;
	unsigned int index2 = 0;
	unsigned int index3 = 4;
	size_t length1 = 15;
	size_t length2 = 1;
	size_t length3 = 10;
	char *substr1;
	char *substr2;
	char *substr3;
	
	substr1 = ft_strsub(str1, index1, length1);
	substr2 = ft_strsub(str2, index2, length2);
	substr3 = ft_strsub(str3, index3, length3);
	if (ft_strcmp(substr1, "excited string.") == 0)
		printf("SUCCESS: Original string: <<%s>>. Index: 11, length: 15, substring: <<%s>>\n", str1, substr1);
	else
		printf("FAIL: Original string: <<%s>>. Index: 11, length: 15, expected substring: <<excited string.>>, but instead it is <<%s>>\n", str1, substr1);

	if (ft_strcmp(substr2, "") == 0)
		printf("SUCCESS: Original string: <<%s>>. Index: 0, length: 1, substring: <<%s>>\n", str2, substr2);
	else
		printf("FAIL: Original string: <<%s>>. Index: 0, length: 1, expected substring: <<>>, but instead it is <<%s>>\n", str2, substr2);

	if (ft_strcmp(substr3, "/-+\t") == 0)
		printf("SUCCESS: Original string: <<%s>>. Index: 4, length: 10, substring: <<%s>>\n", str3, substr3);
	else
		printf("FAIL: Original string: <<%s>>. Index: 4, length: 10, expected substring: <</-+      >>, but instead it is <<%s>>\n", str3, substr3);
		
	return (0);
}
/* 
int main(void)
{
	char *str;
	char *substr;
	unsigned int index;
	size_t length;

	str = "This is an excited string.";
	index = 11;
	length = 15;
	printf("Full original string: %s\n", str);
	substr = ft_strsub(str, index, length);
	printf("The substring: %s\n", substr);
	return (0);
} */