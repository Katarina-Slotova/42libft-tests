#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int main(void)
{
	char str1[] = "hello";
	char str2[] = "";
	char str3[] = "    ";
	ft_strclr(str1);
	ft_strclr(str2);
	ft_strclr(str3);
	if (str1[0] == '\0')
		printf("SUCCESS: Tested string <<hello>> was cleared.\n");
	else
		printf("FAIL: Tested string <<hello>> was not cleared.\n");

	if (str2[0] == '\0')
		printf("SUCCESS: Tested empted string was cleared.\n");
	else
		printf("FAIL: Tested empty string was not cleared.\n");

	if (str3[0] == '\0')
		printf("SUCCESS: Tested string <<    >> was cleared.\n");
	else
		printf("FAIL: Tested string <<    >> was not cleared.\n");

	return (0);
}

/* int main(void)
{
	char str[] = "hello";
	ft_strclr(str);
	return (0);
} */
