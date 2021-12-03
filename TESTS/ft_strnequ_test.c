#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int main(void)
{
	char str1[] = "";
	char str2[] = "";
	char str3[] = "Hello";
	char str4[] = "Hello";
	char str5[] = "Hel";
	char str6[] = "Hello";
	char str7[] = "hello";
	char str8[] = "bye";
	char str9[] = "how are you";
	char str10[] = "I am good";
	char str11[] = "well, well, well...";
	char str12[] = "well, well, well...";

	if (ft_strnequ(str1, str2, 5) == 1)
		printf("SUCCESS: Strnequ gives the expected output: <<%d>>. Tested strings are <<%s>> and <<%s>>.\n", ft_strnequ(str1, str2, 5), str1, str2);
	else
		printf("FAIL: Strnequ does not give the expected output. Tested strings are <<%s>> and <<%s>>. Expected output is 1. My output: <<%d>>.\n", str1, str2, ft_strnequ(str1, str2, 5));

	if (ft_strnequ(str3, str4, 5) == 1)
		printf("SUCCESS: Strnequ gives the expected output: <<%d>>. Tested strings are <<%s>> and <<%s>>.\n", ft_strnequ(str3, str4, 5), str3, str4);
	else
		printf("FAIL: Strnequ does not give the expected output. Tested strings are <<%s>> and <<%s>>. Expected output is 1. My output: <<%d>>.\n", str3, str4, ft_strnequ(str3, str4, 5));

	if (ft_strnequ(str5, str6, 5) == 0)
		printf("SUCCESS: Strnequ gives the expected output: <<%d>>. Tested strings are <<%s>> and <<%s>>.\n", ft_strnequ(str5, str6, 5), str5, str6);
	else
		printf("FAIL: Strnequ does not give the expected output. Tested strings are <<%s>> and <<%s>>. Expected output is 0. My output: <<%d>>.\n", str5, str6, ft_strnequ(str5, str6, 5));

	if (ft_strnequ(str7, str8, 5) == 0)
		printf("SUCCESS: Strnequ gives the expected output: <<%d>>. Tested strings are <<%s>> and <<%s>>.\n", ft_strnequ(str7, str8, 5), str7, str8);
	else
		printf("FAIL: Strnequ does not give the expected output. Tested strings are <<%s>> and <<%s>>. Expected output is 0. My output: <<%d>>.\n", str7, str8, ft_strnequ(str7, str8, 5));
	
	if (ft_strnequ(str9, str10, 5) == 0)
		printf("SUCCESS: Strnequ gives the expected output: <<%d>>. Tested strings are <<%s>> and <<%s>>.\n", ft_strnequ(str9, str10, 5), str9, str10);
	else
		printf("FAIL: Strnequ does not give the expected output. Tested strings are <<%s>> and <<%s>>. Expected output is 0. My output: <<%d>>.\n", str9, str10, ft_strnequ(str9, str10, 5));

	if (ft_strnequ(str11, str12, 5) == 1)
		printf("SUCCESS: Strnequ gives the expected output: <<%d>>. Tested strings are <<%s>> and <<%s>>.\n", ft_strnequ(str11, str12, 5), str11, str12);
	else
		printf("FAIL: Strnequ does not give the expected output. Tested strings are <<%s>> and <<%s>>. Expected output is 1. My output: <<%d>>.\n", str11, str12, ft_strnequ(str11, str12, 5));


	/* printf("Tested strings are: ,<<%s>> and <<%s>>.\n", str1, str2);
	printf("Exepected return value is 1.\nReturn value is %d", ft_strnequ(str1, str2, 5));
	printf("\n");

	
	printf("Tested strings are: <<%s>> and <<%s>>.\n", str3, str4);
	printf("Exepected return value is 1.\nReturn value is %d", ft_strnequ(str3, str4, 5));
	printf("\n");
	

	
	printf("Tested strings are: <<%s>> and <<%s>>.\n", str5, str6);
	printf("Exepected return value is 0.\nReturn value is %d", ft_strnequ(str5, str6, 5));
	printf("\n");

	
	printf("Tested strings are: <<%s>> and <<%s>>.\n", str7, str8);
	printf("Exepected return value is 0.\nReturn value is %d", ft_strnequ(str7, str8, 5));
	printf("\n");

	
	printf("Tested strings are: <<%s>> and <<%s>>\n.", str9, str10);
	printf("Exepected return value is 0.\nReturn value is %d", ft_strnequ(str9, str10, 5));
	printf("\n");

	
	printf("Tested strings are: <<%s>> and <<%s>>.\n", str11, str12);
	printf("Exepected return value is 1.\nReturn value is %d", ft_strnequ(str11, str12, 5));
	printf("\n"); */

	return (0);
}