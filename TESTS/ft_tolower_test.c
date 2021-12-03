#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <ctype.h>

int main(void) {
	char a = '\t';
	char b =  'A';
    char c = 'a';
	char d = '5';

	if (ft_tolower(a) == tolower('\t'))
		printf("SUCCESS: My function and original function give the same output. Tested char: <<%c>>, after tolower: <<%c>>.\n", a, ft_tolower(a));
	else	
		printf("FAIL: My function and original function do not give the same output. Expected output: <<\t>>. Tested char: <<%c>>, after tolower: <<%c>>.\n", a, ft_tolower(a));

	if (ft_tolower(b) == tolower('A'))
		printf("SUCCESS: My function and original function give the same output. Tested char: <<%c>>, after tolower: <<%c>>.\n", b, ft_tolower(b));
	else	
		printf("FAIL: My function and original function do not give the same output. Expected output: <<a>>. Tested char: <<%c>>, after tolower: <<%c>>.\n", b, ft_tolower(b));

	if (ft_tolower(c) == tolower('a'))
		printf("SUCCESS: My function and original function give the same output. Tested char: <<%c>>, after tolower: <<%c>>.\n", c, ft_tolower(c));
	else	
		printf("FAIL: My function and original function do not give the same output. Expected output: <<a>>. Tested char: <<%c>>, after tolower: <<%c>>.\n", c, ft_tolower(c));

	if (ft_tolower(d) == tolower('5'))
		printf("SUCCESS: My function and original function give the same output. Tested char: <<%c>>, after tolower: <<%c>>.\n", d, ft_tolower(d));
	else	
		printf("FAIL: My function and original function do not give the same output. Expected output: <<5>>. Tested char: <<%c>>, after tolower: <<%c>>.\n", d, ft_tolower(d));
	
    return (0);
}