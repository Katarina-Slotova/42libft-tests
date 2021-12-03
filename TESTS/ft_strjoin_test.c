#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello, ";
	char str2[] = "how are you?";
	char str3[] = "";
	char str4[] = "";
	char str5[] = "    ";
	char str6[] = "how are youuuu?";

	if (ft_strcmp(ft_strjoin(str1, str2), "Hello, how are you?") == 0)
		printf("SUCCESS: Strings <<%s>> and <<%s>> were joined as expected: <<%s>>\n", str1, str2, ft_strjoin(str1, str2));
	else
		printf("FAIL: Strings <<%s>> and <<%s>> were not joined correctly. Expected output: <<Hello, how are you?>>. Actual output: <<%s>>\n", str1, str2, ft_strjoin(str1, str2));
	
	if (ft_strcmp(ft_strjoin(str3, str4), "") == 0)
		printf("SUCCESS: Strings <<%s>> and <<%s>> were joined as expected: <<%s>>\n", str3, str4, ft_strjoin(str3, str4));
	else
		printf("FAIL: Strings <<%s>> and <<%s>> were not joined correctly. Expected output: <<>>. Actual output: <<%s>>\n", str3, str4, ft_strjoin(str3, str4));

	if (ft_strcmp(ft_strjoin(str5, str6), "    how are youuuu?") == 0)
		printf("SUCCESS: Strings <<%s>> and <<%s>> were joined as expected: <<%s>>\n", str5, str6, ft_strjoin(str5, str6));
	else
		printf("FAIL: Strings <<%s>> and <<%s>> were not joined correctly. Expected output: <<    how are youuuu?>>. Actual output: <<%s>>\n", str5, str6, ft_strjoin(str5, str6));

	return (0);
}
/* 
int	main(void)
{
	char str1[] = "Hello, ";
	char str2[] = "how are you?";
	char str3[] = "";
	char str4[] = "";
	char str5[] = "    ";
	char str6[] = "how are youuuu?";

	printf("Strings being joined: <<%s>> and <<%s>>.\n", str1, str2);
	printf("Result: <<%s>>\n", ft_strjoin(str1, str2));
	printf("Strings being joined: <<%s>> and <<%s>>.\n", str3, str4);
	printf("Result: <<%s>>\n", ft_strjoin(str3, str4));
	printf("Strings being joined: <<%s>> and <<%s>>.\n", str5, str6);
	printf("Result: <<%s>>\n", ft_strjoin(str5, str6));
	return (0);
} */