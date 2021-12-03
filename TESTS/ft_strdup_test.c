#include "ft_tests.h"
#include EVAL_DIR
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char	*ptr1;
	char	*ret1;
	char	*ptr2;
	char	*ret2;
	char	*ptr3;
	char	*ret3;

	ptr1 = "Hello world!";
	ret1 = "Hello world!";
	ptr2 = "";
	ret2 = "";
	ptr3 = "    \t";
	ret3 = "    \t";

	if (ft_strcmp(ft_strdup(ptr1), strdup(ret1)) == 0)
		printf("SUCCESS: My function and the original function give the same output: <<%s>>. Tested string: <<%s>>\n",ret1, ret1);
	else
		printf("FAIL: My function and the original function do not give the same exected output: <<Hello world!>>. Actual output: <<%s>>. Tested string: <<%s>>\n",ret1, ret1);

	if (ft_strcmp(ft_strdup(ptr2), strdup(ret2)) == 0)
		printf("SUCCESS: My function and the original function give the same output: <<%s>>. Tested string: <<%s>>\n", ret2, ret2);
	else
		printf("FAIL: My function and the original function do not give the same exected output: <<>>. Actual output: <<%s>>. Tested string: <<%s>>\n", ret2, ret2);

	if (ft_strcmp(ft_strdup(ptr3), strdup(ret3)) == 0)
		printf("SUCCESS: My function and the original function give the same output: <<%s>>. Tested string: <<%s>>\n", ret3, ret3);
	else
		printf("FAIL: My function and the original function do not give the same exected output: <<            -- i.e. tab>>. Actual output: <<%s>>. Tested string: <<%s>>\n",ret3, ret3);

    return (0);
}
/* 
int main(void)
{
	printf("Printing first own function, then the original. Tested strings: Hello world & empty string.\n");
	printf("%s\n", ft_strdup("Hello world!"));
    printf("%s\n", strdup("Hello world!"));
    printf("%s\n", ft_strdup(""));
    printf("%s\n", strdup(""));
    return (0);
} */