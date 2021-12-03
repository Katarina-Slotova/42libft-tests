#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;

	a = 'a';
	b = 'B';
	c = '1';
	d = '\t';
	e = ' ';
	f = '$';
	
	if (ft_isascii(a))
		printf("SUCCESS: %c is ASCII character.\n", a);
	else
		printf("FAIL: %c is ASCII character.\n", a);

	if (ft_isascii(b))
		printf("SUCCESS:%c is ASCII character.\n", b);
	else
		printf("FAIL: %c is ASCII character.\n", b);

	if (ft_isascii(c))
		printf("SUCCESS: %c is ASCII character.\n", c);
	else
		printf("FAIL: %c is ASCII character.\n", c);

	if (ft_isascii(d))
		printf("SUCCESS: %c is ASCII character.\n", d);
	else
		printf("FAIL: %c is ASCII character.\n", d);

	if (ft_isascii(e))
		printf("SUCCESS: %c is ASCII character.\n", e);
	else
		printf("FAIL: %c is ASCII character.\n", e);

	if (ft_isascii(f))
		printf("SUCCESS: %c is ASCII character.\n", f);
	else
		printf("FAIL: %c is ASCII character.\n", f);
	
	return (0);
}