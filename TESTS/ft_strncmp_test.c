#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>

int        main(void)
{
    char str[100] = "\200";
    char str2[100] = "\0";
	char str3[100] = "\200";
    char str4[100] = "\0";
	char str5[100] = "hello";
    char str6[100] = "hello";
	char str7[100] = "hello";
    char str8[100] = "hello";
	char str9[100] = "bye";
    char str10[100] = "hello";
	char str11[100] = "bye";
    char str12[100] = "hello";

	if (ft_strncmp(str, str2, 6) == strncmp(str3, str4, 6))
		printf("SUCCESS: My function and original function give the same result: <<%d>>. Strings tested: <<\\200>> & <<\\0>>.\n", ft_strncmp(str, str2, 6));
	else
		printf("FAIL: My function and original function do not give the same result. Strings tested: <<\\200>> & <<\\0>>. Expected result: <<128>>, actual result: <<%d>>.\n", ft_strncmp(str, str2, 6));

	if (ft_strncmp(str5, str6, 6) == strncmp(str7, str8, 6))
		printf("SUCCESS: My function and original function give the same result: <<%d>>. Strings tested: <<hello>> & <<hello>>.\n", ft_strncmp(str5, str6, 6));
	else
		printf("FAIL: My function and original function do not give the same result. Strings tested: <<hello>> & <<hello>>. Expected result: <<0>>, actual result: <<%d>>.\n", ft_strncmp(str5, str6, 6));

	if (ft_strncmp(str9, str10, 6) == strncmp(str11, str12, 6))
		printf("SUCCESS: My function and original function give the same result: <<%d>>. Strings tested: <<bye>> & <<hello>>.\n", ft_strncmp(str9, str10, 6));
	else
		printf("FAIL: My function and original function do not give the same result. Strings tested: <<bye>> & <<hello>>. Expected result: <<-6>>, actual result: <<%d>>.\n", ft_strncmp(str9, str10, 6));

    return (0);
}

/* int        main(void)
{
    char str[100] = "\200";
    char str2[100] = "\0";
	char str3[100] = "\200";
    char str4[100] = "\0";
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
    printf("%d", ft_strncmp(str, str2, 6));
    printf("\n");
    printf("%d", strncmp(str3, str4, 6));
    printf("\n");

	printf("Strings tested: hello & hello. First result is my function, second one is the original.");
	printf("\n");
    printf("%d", ft_strncmp(str5, str6, 6));
    printf("\n");
    printf("%d", strncmp(str7, str8, 6));
    printf("\n");

	printf("Strings tested: bye & hello. First result is my function, second one is the original.");
	printf("\n");
    printf("%d", ft_strncmp(str9, str10, 6));
    printf("\n");
    printf("%d", strncmp(str11, str12, 6));
    printf("\n");
    return (0);
} */

/* int        main(void)
{
    char str[100] = "\200";
    char str2[100] = "\0";
	char str3[100] = "\200";
    char str4[100] = "\0";
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
    printf("%d", ft_strncmp(str, str2, 4));
    printf("\n");
    printf("%d", strncmp(str3, str4, 4));
    printf("\n");

	printf("Strings tested: hello & hello. First result is my function, second one is the original.");
	printf("\n");
    printf("%d", ft_strncmp(str5, str6, 6));
    printf("\n");
    printf("%d", strncmp(str7, str8, 6));
    printf("\n");

	printf("Strings tested: bye & hello. First result is my function, second one is the original.");
	printf("\n");
    printf("%d", ft_strncmp(str9, str10, 6));
    printf("\n");
    printf("%d", strncmp(str11, str12, 6));
    printf("\n");
    return (0);
} */