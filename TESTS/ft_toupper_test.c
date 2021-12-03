#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <ctype.h>

int main(void) {
	char a = '\t';
	char b =  'A';
    char c = 'a';
	char d = '5';

	if (ft_toupper(a) == toupper('\t'))
		printf("SUCCESS: My function and original function give the same output. Tested char: <<%c>>, after touppft_toupper: <<%c>>.\n", a, ft_toupper(a));
	else	
		printf("FAIL: My function and original function do not give the same output. Expected output: <<\t>>. Tested char: <<%c>>, after touppft_toupper: <<%c>>.\n", a, ft_toupper(a));

	if (ft_toupper(b) == toupper('A'))
		printf("SUCCESS: My function and original function give the same output. Tested char: <<%c>>, after touppft_toupper: <<%c>>.\n", b, ft_toupper(b));
	else	
		printf("FAIL: My function and original function do not give the same output. Expected output: <<A>>. Tested char: <<%c>>, after touppft_toupper: <<%c>>.\n", b, ft_toupper(b));

	if (ft_toupper(c) == toupper('a'))
		printf("SUCCESS: My function and original function give the same output. Tested char: <<%c>>, after touppft_toupper: <<%c>>.\n", c, ft_toupper(c));
	else	
		printf("FAIL: My function and original function do not give the same output. Expected output: <<A>>. Tested char: <<%c>>, after touppft_toupper: <<%c>>.\n", c, ft_toupper(c));

	if (ft_toupper(d) == toupper('5'))
		printf("SUCCESS: My function and original function give the same output. Tested char: <<%c>>, after touppft_toupper: <<%c>>.\n", d, ft_toupper(d));
	else	
		printf("FAIL: My function and original function do not give the same output. Expected output: <<5>>. Tested char: <<%c>>, after touppft_toupper: <<%c>>.\n", d, ft_toupper(d));
	
    return (0);
}
/* 
int main(void) {
    char c;

    c = '5';
    printf("%c", ft_toupper(c));
	printf("\n");
	printf("%c", toupper(c));
    return (0);
} */