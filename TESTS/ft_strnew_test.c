#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = ft_strnew(5);
	str2 = ft_strnew(1);
	str3 = ft_strnew(5);
	str4 = ft_strnew(30);

	str1 = "1234";
	str2 = "";
	str3 = "   *-+\t";
	str4 = "super fresh string right here";

	if (ft_strcmp(str1, "1234") == 0)
		printf("SUCCESS: Memory allocated correctly and fresh string was returned. Expected return: <<1234>>, actual return: <<%s>>.\n", str1);
	else
		printf("FAIL: Memory not allocated correctly and fresh string was not returned. Expected return: <<1234>>, actual return: <<%s>>.\n", str1);
	
	if (ft_strcmp(str2, "") == 0)
		printf("SUCCESS: Memory allocated correctly and fresh string was returned. Expected return: <<>>, actual return: <<%s>>.\n", str2);
	else
		printf("FAIL: Memory not allocated correctly and fresh string was not returned. Expected return: <<>>, actual return: <<%s>>.\n", str2);

	if (ft_strcmp(str3, "   *-+\t") == 0)
		printf("SUCCESS: Memory allocated correctly and fresh string was returned. Expected return: <<   *-+\t>>, actual return: <<%s>>.\n", str3);
	else
		printf("FAIL: Memory not allocated correctly and fresh string was not returned. Expected return: <<   *-+\t>>, actual return: <<%s>>.\n", str3);

	if (ft_strcmp(str4, "super fresh string right here") == 0)
		printf("SUCCESS: Memory allocated correctly and fresh string was returned. Expected return: <<super fresh string right here>>, actual return: <<%s>>.\n", str4);
	else
		printf("FAIL: Memory not allocated correctly and fresh string was not returned. Expected return: <<super fresh string right here>>, actual return: <<%s>>.\n", str4);
	
	return (0);
}

/* int main(void)
{
	char *str;

	str = ft_strnew(5);
	str = "1234";
	printf("%s", str);
} */
