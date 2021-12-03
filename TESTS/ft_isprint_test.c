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

	if (ft_isprint(a))
		printf("SUCCESS: %c can be printed.\n", a);
	else 
		printf("FAIL: %c cant be printed.\n", a);

	if (ft_isprint(b))
		printf("SUCCESS: %c can be printed.\n", b);
	else 
		printf("FAIL: %c cant be printed.\n", b);

	if (ft_isprint(c))
		printf("SUCESS: %c can be printed.\n", c);
	else 
		printf("FAIL: %c cant be printed.\n", c);

	if (ft_isprint(d))
		printf("FAIL: %c is not printabe.\n", d);
	else 
		printf("SUCCESS: %c cant be printed.\n", d);
	
	if (ft_isprint(e))
		printf("SUCCESS: %c can be printed.\n", e);
	else 
		printf("FAIL: %c cant be printed.\n", e);
	
	if (ft_isprint(f))
		printf("SUCCESS: %c can be printed.\n", f);
	else 
		printf("FAIL:%c cant be printed.\n", f);

	return (0);	
}
