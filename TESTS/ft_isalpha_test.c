#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <ctype.h>

int main (void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	a = 'a';
	b = 'B';
	c = '1';
	d = '\t';
	e = ' ';

	if (isalpha(a))
		printf("SUCCESS");
	else
		printf("FAIL: %c is alphabetic character.\n", a);
	
	if (isalpha(b))
		printf("SUCCESS");
	else
		printf("FAIL: %c is alphabetic character.\n", b);
	
	if (isalpha(c))
		printf("FAIL: %c is not alphabetic character.\n", c);
	else
		printf("SUCCESS");
	
	if (isalpha(d))
		printf("FAIL: %c is alphabetic character.\n", d);
	else
		printf("SUCCESS");

	if (ft_isalpha(e))
		printf("FAIL: %c is alphabetic character.\n", e);
	else 
		printf("SUCCESS");
	return (0);
}

/* int main (void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	a = 'a';
	b = 'B';
	c = '1';
	d = '\t';
	e = ' ';

	if (isalpha(a))
		printf("%c is alphabetic character.\n", a);
	else
		printf("%c is not alphabetic character.\n", a);
	
	if (isalpha(b))
		printf("%c is alphabetic character.\n", b);
	else
		printf("%c is not alphabetic character.\n", b);
	
	if (isalpha(c))
		printf("%c is alphabetic character.\n", c);
	else
		printf("%c is not alphabetic character.\n", c);
	
	if (isalpha(d))
		printf("%c is alphabetic character.\n", d);
	else
		printf("%c is not alphabetic character.\n", d);

	if (ft_isalpha(e))
		printf("%c is alphabetic character.\n", e);
	else 
		printf("%c is not alphabetic character.\n", e);
	return (0);
} */