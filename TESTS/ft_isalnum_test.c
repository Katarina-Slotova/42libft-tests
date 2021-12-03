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

	a = 'a';
	b = 'B';
	c = '1';
	d = '\t';
	e = ' ';

	if (ft_isalnum(a))
		printf("SUCCESS");
	else 
		printf("FAIL: %c is alphanumeric character.\n", a);

	if (ft_isalnum(b))
		printf("SUCCESS");
	else 
		printf("FAIL: %c is alphanumeric character.\n", b);

	if (ft_isalnum(c))
		printf("SUCCESS");
	else 
		printf("FAIL: %c is alphanumeric character.\n", c);

	if (ft_isalnum(d))
		printf("FAIL: %c is not alphanumeric character.\n", d);
	else 
		printf("SUCCESS");

	if (ft_isalnum(e))
		printf("FAIL: %c is not alphanumeric character.\n", e);
	else 
		printf("SUCCESS");
	
	return(0);
}
/* 
int main(void)
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

	if (ft_isalnum(a))
		printf("%c is alhanumeric character.\n", a);
	else 
		printf("%c is not alphanumeric character.\n", a);

	if (ft_isalnum(b))
		printf("%c is alhanumeric character.\n", b);
	else 
		printf("%c is not alphanumeric character.\n", b);

	if (ft_isalnum(c))
		printf("%c is alhanumeric character.\n", c);
	else 
		printf("%c is not alphanumeric character.\n", c);

	if (ft_isalnum(d))
		printf("%c is alhanumeric character.\n", d);
	else 
		printf("%c is not alphanumeric character.\n", d);

	if (ft_isalnum(e))
		printf("%c is alhanumeric character.\n", e);
	else 
		printf("%c is not alphanumeric character.\n", e);
	
	return(0);
} */