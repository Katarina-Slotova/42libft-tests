#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <string.h>

int        main(void)
{
    char str1[100] = "hello";
    char str2[100] = "bye";
	char str3[100] = "hello";
    char str4[100] = "bye";
	char str5[100] = "hello";
    char str6[100] = "hello";
	char str7[100] = "hello";
    char str8[100] = "hello";
	char str9[100] = "bye";
    char str10[100] = "hello";
	char str11[100] = "bye";
    char str12[100] = "hello";

	if (ft_strcmp(str1, str2) == strcmp(str3, str4))
		printf("SUCCESS: My fucntion and original function give the same output: 6. Compared strings: <<%s>> and <<%s>>.\n", str1, str2);
	else
		printf("FAIL: My fucntion and original function do not give the same expected output: 6. Compared strings: <<%s>> and <<%s>>.\n", str1, str2);

	if (ft_strcmp(str5, str6) == strcmp(str7, str8))
		printf("SUCCESS: My fucntion and original function give the same output: 0. Compared strings: <<%s>> and <<%s>>.\n", str5, str6);
	else
		printf("FAIL: My fucntion and original function do not give the same output: 0. Compared strings: <<%s>> and <<%s>>.\n", str5, str6);

	if (ft_strcmp(str9, str10) == strcmp(str11, str12))
		printf("SUCCESS: My fucntion and original function give the same output: -6. Compared strings: <<%s>> and <<%s>>.\n", str9, str10);
	else
		printf("FAIL: My fucntion and original function do not give the same output: -6. Compared strings: <<%s>> and <<%s>>.\n", str9, str10);

    return (0);
}

/* int        main(void)
{
    char str[100] = "hello";
    char str2[100] = "bye";
	char str3[100] = "hello";
    char str4[100] = "bye";
	char str5[100] = "hello";
    char str6[100] = "hello";
	char str7[100] = "hello";
    char str8[100] = "hello";
	char str9[100] = "bye";
    char str10[100] = "hello";
	char str11[100] = "bye";
    char str12[100] = "hello";

	printf("Strings tested: hello & bye. First result is my function, second one is the original.");
	printf("\n");
    printf("%d", ft_strcmp(str, str2));
    printf("\n");
    printf("%d", strcmp(str3, str4));
    printf("\n");

	printf("Strings tested: hello & hello. First result is my function, second one is the original.");
	printf("\n");
    printf("%d", ft_strcmp(str5, str6));
    printf("\n");
    printf("%d", strcmp(str7, str8));
    printf("\n");

	printf("Strings tested: bye & hello. First result is my function, second one is the original.");
	printf("\n");
    printf("%d", ft_strcmp(str9, str10));
    printf("\n");
    printf("%d", strcmp(str11, str12));
    printf("\n");
    return (0);
} */

/* #include <stdio.h>

int        main(void)
{
    char str[100] = "hello";
    char str2[100] = "bye";
	char str3[100] = "hello";
    char str4[100] = "bye";
	char str5[100] = "hello";
    char str6[100] = "hello";
	char str7[100] = "hello";
    char str8[100] = "hello";
	char str9[100] = "bye";
    char str10[100] = "hello";
	char str11[100] = "bye";
    char str12[100] = "hello";

	printf("Strings tested: hello & bye. First result is my function, second one is the original.");
	printf("\n");
    printf("%d", ft_strcmp(str, str2));
    printf("\n");
    printf("%d", strcmp(str3, str4));
    printf("\n");

	printf("Strings tested: hello & hello. First result is my function, second one is the original.");
	printf("\n");
    printf("%d", ft_strcmp(str5, str6));
    printf("\n");
    printf("%d", strcmp(str7, str8));
    printf("\n");

	printf("Strings tested: bye & hello. First result is my function, second one is the original.");
	printf("\n");
    printf("%d", ft_strcmp(str9, str10));
    printf("\n");
    printf("%d", strcmp(str11, str12));
    printf("\n");
    return (0);
} */