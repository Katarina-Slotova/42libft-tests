#include "ft_tests.h"
#include EVAL_DIR
#include <stdlib.h>
#include <stdio.h>

char	ft_res(char c)
{
	return (c - 32);
}

int main(void)
{
	char str[10] = "hello";
	char str1[10] = "WXYZ";
	char str2[10] = "";
	char *result = ft_strmap(str, ft_res);
	char *result1 = ft_strmap(str1, ft_res);
	char *result2 = ft_strmap(str2, ft_res);
/* 	printf("%s\n", result);
	printf("%s\n", result1);
	printf("%s\n", result2); */

	if (ft_strcmp(result, "HELLO") == 0)
		printf("SUCCESS: Strmap gave expected output <<%s>>. Applied function moved all ascii chars in string by -32. Original str: <<hello>>.\n", result);
	else
		printf("FAIL: Strmap did not give expected output <<%s>>. Applied function moved all ascii chars in string by -32. Original str: <<hello>>, expected output: <<HELLO>>.\n", result);

	if (ft_strcmp(result1, "789:") == 0)
		printf("SUCCESS: Strmap gave expected output <<%s>>. Applied function moved all ascii chars in string by -32. Original str: <<WXYZ>>.\n", result1);
	else
		printf("FAIL: Strmap did not give expected output <<%s>>. Applied function moved all ascii chars in string by -32. Original str: <<WXYZ>>, expected output: <<789:>>.\n", result1);
	
	if (ft_strcmp(result2, "") == 0)
		printf("SUCCESS: Strmap gave expected output <<%s>>. Applied function moved all ascii chars in string by -32. Original str: <<>>.\n", result2);
	else
		printf("FAIL: Strmap did not give expected output <<%s>>. Applied function moved all ascii chars in string by -32. Original str: <<>>, expected output: <<>>.\n", result2);
	
	return (0);
}
/* 

int main(void)
{
	char str[10] = "hello";
	printf("The original string is: %s\n", str);
	char *result = ft_strmap(str, ft_res);
	printf("The result is: %s\n", result);

	char str1[10] = "HELLO";
	printf("The original string is: %s\n", str1);
	char *result1 = ft_strmap(str1, ft_res);
	printf("The result is: %s\n", result1);

	char str2[10] = "";
	printf("The original string is: %s\n", str2);
	char *result2 = ft_strmap(str2, ft_res);
	printf("The result is: %s\n", result2);
	return (0);
} */