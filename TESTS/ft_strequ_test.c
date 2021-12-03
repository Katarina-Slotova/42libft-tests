#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int main(void)
{

	char str1[] = "";
	char str2[] = "";
	char str3[] = "Hello";
	char str4[] = "Hello";
	char str5[6] = "Hel";
	char str6[6] = "Hello";
	char str7[] = "hello";
	char str8[] = "bye";
	char str9[] = "how are you";
	char str10[] = "I am good";
	char str11[] = "well, well, well...";
	char str12[] = "well, well, well...";
	
	if (ft_strequ(str1, str2) == 1)
		printf("SUCCESS: Tested strings are: <<%s>> and <<%s>> and they are equal. Expected return value is 1, actual output is %d.\n", str1, str2, ft_strequ(str1, str2));
	else
		printf("FAIL: Tested strings are: <<%s>> and <<%s>> and they are equal. Expected return value is 1, actual output is %d.\n", str1, str2, ft_strequ(str1, str2));
	
	if (ft_strequ(str3, str4) == 1)
		printf("SUCCESS: Tested strings are: <<%s>> and <<%s>> and they are equal. Expected return value is 1, actual output is %d.\n", str3, str4, ft_strequ(str3, str4));
	else
		printf("FAIL: Tested strings are: <<%s>> and <<%s>> and they are equal. Expected return value is 1, actual output is %d.\n", str3, str4, ft_strequ(str3, str4));

	if (ft_strequ(str5, str6) == 0)
		printf("SUCCESS: Tested strings are: <<%s>> and <<%s>> and they are not equal. Expected return value is 0, actual output is %d.\n", str5, str6, ft_strequ(str5, str6));
	else
		printf("FAIL: Tested strings are: <<%s>> and <<%s>> and they are not equal. Expected return value is 0, actual output is %d.\n", str5, str6, ft_strequ(str5, str6));
	
	if (ft_strequ(str7, str8) == 0)
		printf("SUCCESS: Tested strings are: <<%s>> and <<%s>> and they are not equal. Expected return value is 0, actual output is %d.\n", str7, str8, ft_strequ(str7, str8));
	else
		printf("FAIL: Tested strings are: <<%s>> and <<%s>> and they are not equal. Expected return value is 0, actual output is %d.\n", str7, str8, ft_strequ(str7, str8));
	
	if (ft_strequ(str9, str10) == 0)
		printf("SUCCESS: Tested strings are: <<%s>> and <<%s>> and they are not equal. Expected return value is 0, actual output is %d.\n", str9, str10, ft_strequ(str9, str10));
	else
		printf("FAIL: Tested strings are: <<%s>> and <<%s>> and they are not equal. Expected return value is 0, actual output is %d.\n", str9, str10, ft_strequ(str9, str10));
	
	if (ft_strequ(str11, str12) == 1)
		printf("SUCCESS: Tested strings are: <<%s>> and <<%s>> and they are equal. Expected return value is 1, actual output is %d.\n", str11, str12, ft_strequ(str11, str12));
	else
		printf("FAIL: Tested strings are: <<%s>> and <<%s>> and they are equal. Expected return value is 1, actual output is %d.\n", str11, str12, ft_strequ(str11, str12));

	return (0);
}

/* int main(void)
{
	char str1[] = "";
	char str2[] = "";
	printf("Tested strings are: ,<<%s>> and <<%s>>.\n", str1, str2);
	printf("Exepected return value is 0.\nReturn value is %d", ft_strequ(str1, str2));
	printf("\n");

	char str3[] = "Hello";
	char str4[] = "Hello";
	printf("Tested strings are: <<%s>> and <<%s>>.\n", str3, str4);
	printf("Exepected return value is 1.\nReturn value is %d", ft_strequ(str3, str4));
	printf("\n");
	

	char str5[] = "Hel";
	char str6[] = "Hello";
	printf("Tested strings are: <<%s>> and <<%s>>.\n", str5, str6);
	printf("Exepected return value is 0.\nReturn value is %d", ft_strequ(str5, str6));
	printf("\n");

	char str7[] = "hello";
	char str8[] = "bye";
	printf("Tested strings are: <<%s>> and <<%s>>.\n", str7, str8);
	printf("Exepected return value is 0.\nReturn value is %d", ft_strequ(str7, str8));
	printf("\n");

	char str9[] = "how are you";
	char str10[] = "I am good";
	printf("Tested strings are: <<%s>> and <<%s>>\n.", str9, str10);
	printf("Exepected return value is 0.\nReturn value is %d", ft_strequ(str9, str10));
	printf("\n");

	char str11[] = "well, well, well...";
	char str12[] = "well, well, well...";
	printf("Tested strings are: <<%s>> and <<%s>>.\n", str11, str12);;
	printf("Exepected return value is 1.\nReturn value is %d", ft_strequ(str11, str12));
	printf("\n");

	return (0);
} */
