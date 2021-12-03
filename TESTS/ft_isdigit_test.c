#include "ft_tests.h"
#include EVAL_DIR
#include <ctype.h>
#include <stdio.h>

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

	if (ft_isdigit(a))
		printf("FAIL: %c is not a digit.\n", a);
	else
		printf("SUCCESS");

	if (ft_isdigit(b))
		printf("FAIL: %c is not a digit.\n", b);
	else
		printf("SUCCESS");

	if (ft_isdigit(c))
		printf("SUCCESS");
	else
		printf("FAIL: %c is a digit.\n", c);

	if (ft_isdigit(d))
		printf("FAIL: %c is not a digit.\n", d);
	else
		printf("SUCCESS");
	
	if (ft_isdigit(e))
		printf("FAIL: %c is not a digit.\n", e);
	else
		printf("SUCCESS");
	
	if (ft_isdigit(f))
		printf("FAIL: %c is not a digit.\n", f);
	else
		printf("SUCCESS");

	return (0);
}

/* int main(void)
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

	if (ft_isdigit(a))
		printf("%c is a digit.\n", a);
	else
		printf("%c is not a digit.\n", a);

	if (ft_isdigit(b))
		printf("%c is a digit.\n", b);
	else
		printf("%c is not a digit.\n", b);

	if (ft_isdigit(c))
		printf("%c is a digit.\n", c);
	else
		printf("%c is not a digit.\n", c);

	if (ft_isdigit(d))
		printf("%c is a digit.\n", d);
	else
		printf("%c is not a digit.\n", d);
	
	if (ft_isdigit(e))
		printf("%c is a digit.\n", e);
	else
		printf("%c is not a digit.\n", e);
	
	if (ft_isdigit(f))
		printf("%c is a digit.\n", f);
	else
		printf("%c is not a digit.\n", f);

	return (0);
} */