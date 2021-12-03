#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "This is a string that has first seven characters replaced.";
	char str1[] = "    ";
	
	if (ft_memset(str, '*', 7) == memset(str, '*', 7))
		printf("SUCCESS: My function and original function give the same output: <<%s>>. Tested string: <<This is a string that has first seven characters replaced.>> Value to be written in the string: *.\n", str);
	else
		printf("FAIL: My function and original function do not give the same output. Tested string: <<This is a string that has first seven characters replaced.>>. \
		Value to be written in the string: *. Expected output: <<******* a string that has first seven characters replaced.>>. My output: <<%s>>\n", str);
	
	if (ft_memset(str1, '*', 2) == memset(str1, '*', 2))
		printf("SUCCESS: My function and original function give the same output: <<%s>>. Tested string: <<    >> Value to be written in the first two bytes of the string: *.\n", str1);
	else
		printf("FAIL: My function and original function do not give the same output. Tested string: <<    >>. \
		Value to be written in the string: *. Expected output: <<**  >>. My output: <<%s>>\n", str1);

	return (0);
}

/* int main(void)
{
	char str[] = "This is a string that has first seven characters replaced.";
	char str1[] = "This is a string that has first seven characters replaced.";
	char str2[] = "    ";
	char str3[] = "    ";

	printf("First goes the result of my own function, second one is the original one.\n");
	printf("%s\n", ft_memset(str, '*', 7));
	printf("%s\n", memset(str1, '*', 7));
	printf("\n");
	printf("%s\n", ft_memset(str2, '*', 2));
	printf("%s\n", memset(str3, '*', 2));
	return (0);
} */