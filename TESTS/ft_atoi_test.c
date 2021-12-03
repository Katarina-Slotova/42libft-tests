#include "ft_tests.h"
#include EVAL_DIR
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	if (ft_atoi(" 	-\n123") != atoi(" 	-\n123"))
		printf("FAIL: Test for space tab - newline 123 << 	-\n123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("+-	\n123") != atoi("+-	\n123"))
		printf("FAIL: Test for +- tab newline 123 <<+-	\n123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("-+ 	\n123") != atoi("-+ 	\n123"))
		printf("FAIL: Test for -+ space tab newline 123 <<-+ 	\n123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
    if (ft_atoi(" 	\n-123") != atoi(" 	\n-123"))
		printf("FAIL: Test for space tab newline - 123 << 	\n-123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi(" 	\n+123") != atoi(" 	\n+123"))
		printf("FAIL: Test for space tab newline + 123 << 	\n+123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi(" 	\n-+123") != atoi(" 	\n-+123"))
		printf("FAIL: Test for space tab newline - + 123 << 	\n-+123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi(" 	\n+-123") != atoi(" 	\n+-123"))
		printf("FAIL: Test for space tab newline + - 123 << 	\n+-123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
    if (ft_atoi("ab 	\n-+123") != atoi("ab 	\n-+123"))
		printf("FAIL: Test for a b space tab newline - + 123 <<ab 	\n-+123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi(" 	\na-123") != atoi(" 	\na-123"))
		printf("FAIL: Test for space tab newline a - 123 << 	\na-123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi(" 	\na123") != atoi(" 	\na123"))
		printf("FAIL: Test for space tab newline a 123 << 	\na123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
    if (ft_atoi(" \r	\n123") != atoi(" \r	\n123"))
		printf("FAIL: Test for space carriagereturn tab newline 123 << \r	\n123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("a123") != atoi("a123"))
		printf("FAIL: Test for a123 <<a123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("12a3") != atoi("12a3"))
		printf("FAIL: Test for 12a3 <<12a3>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("1a23") != atoi("1a23"))
		printf("FAIL: Test for 1a23 <<1a23>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("a123") != atoi("a123"))
		printf("FAIL: Test for a123 <<a123>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("-123a") != atoi("-123a"))
		printf("FAIL: Test for -123a <<-123a>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("12-3a") != atoi("12-3a"))
		printf("FAIL: Test for 12-3a <<12-3a>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("2147483648") != atoi("2147483648"))
		printf("FAIL: Test for 2147483648 <<2147483648>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("-21") != atoi("-21"))
		printf("FAIL: Test for -21 <<-21>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("33") != atoi("33"))
		printf("FAIL: Test for 33 <<33>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("99") != atoi("99"))
		printf("FAIL: Test for 99 <<99>>.");
	else 
		printf("SUCCESS");
	printf("\n");
    if (ft_atoi("1000000") != atoi("1000000"))
		printf("FAIL: Test for 1000000 <<1000000>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("709551615") != atoi("709551615"))
		printf("FAIL: Test for 709551615 <<709551615>>.");
	else 
		printf("SUCCESS");
	printf("\n");
    if (ft_atoi("2147483647") != atoi("2147483647"))
		printf("FAIL: Test for 2147483647 <<2147483647>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("0") != atoi("0"))
		printf("FAIL: Test for 0 <<0>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	if (ft_atoi("000") != atoi("000"))
		printf("FAIL: Test for 000 <<000>>.");
	else 
		printf("SUCCESS");
	printf("\n");
    if (ft_atoi("\0") != atoi("\0"))
		printf("FAIL: Test for \\0: <<\\0:>>.");
	else 
		printf("SUCCESS");
	printf("\n");
	return (0);
}

/* int main(void)
{
    printf("space tab - newline 123: %d \n", ft_atoi(" 	-\n123");
	printf("space tab - newline 123: %d \n", atoi(" 	-\n123");
	printf("\n");
    printf("+- tab newline 123: %d \n", ft_atoi("+-	\n123");
	printf("+- tab newline 123: %d \n", atoi("+-	\n123");
	printf("\n");
	printf("-+ space tab newline 123: %d \n", ft_atoi("-+ 	\n123");
	printf("-+ space tab newline 123: %d \n", atoi("-+ 	\n123");
	printf("\n");
    printf("space tab newline - 123: %d \n", ft_atoi(" 	\n-123");
	printf("space tab newline - 123: %d \n", atoi(" 	\n-123");
	printf("\n");
	printf("space tab newline + 123: %d \n", ft_atoi(" 	\n+123");
	printf("space tab newline + 123: %d \n", atoi(" 	\n+123");
	printf("\n");
	printf("space tab newline - + 123: %d \n", ft_atoi(" 	\n-+123");
	printf("space tab newline - + 123: %d \n", atoi(" 	\n-+123");
	printf("\n");
    printf("space tab newline + - 123: %d \n", ft_atoi(" 	\n+-123");
	printf("space tab newline + - 123: %d \n", atoi(" 	\n+-123");
	printf("\n");
	printf("a b space tab newline - + 123: %d \n", ft_atoi("ab 	\n-+123");
	printf("a b space tab newline - + 123: %d \n", atoi("ab 	\n-+123");
	printf("\n");
    printf("space tab newline a - 123: %d \n", ft_atoi(" 	\na-123");
	printf("space tab newline a - 123: %d \n", atoi(" 	\na-123");
	printf("\n");
	printf("space tab newline a 123: %d \n", ft_atoi(" 	\na123");
	printf("space tab newline a 123: %d \n", atoi(" 	\na123");
	printf("\n");
    printf("space carriagereturn tab newline 123: %d \n", ft_atoi(" \r	\n123");
	printf("space carriagereturn tab newline 123: %d \n", atoi(" \r	\n123");
	printf("\n");
	printf("a123: %d \n", ft_atoi("a123");
	printf("a123: %d \n", atoi("a123");
	printf("\n");
	printf("12a3: %d \n", ft_atoi("12a3");
	printf("12a3: %d \n", atoi("12a3");
	printf("\n");
	printf("1a23: %d \n", ft_atoi("1a23");
	printf("1a23: %d \n", atoi("1a23");
	printf("\n");
	printf("a123: %d \n", ft_atoi("a123");
	printf("a123: %d \n", atoi("a123");
	printf("\n");
	printf("-123a: %d \n", ft_atoi("-123a");
	printf("-123a: %d \n", atoi("-123a");
	printf("\n");
	printf("12-3a: %d \n", ft_atoi("12-3a");
	printf("12-3a: %d \n", atoi("12-3a");
	printf("\n");
	printf("2147483648: %d \n", ft_atoi("2147483648");
	printf("2147483648: %d \n", atoi("2147483648");
	printf("\n");
    printf("-21: %d \n", ft_atoi("-21");
	printf("-21: %d \n", atoi("-21");
	printf("\n");
	printf("33: %d \n", ft_atoi("33");
	printf("33: %d \n", atoi("33");
	printf("\n");
    printf("99: %d \n", ft_atoi("99");
	printf("99: %d \n", atoi("99");
	printf("\n");
	printf("1000000: %d \n", ft_atoi("1000000");
	printf("1000000: %d \n", atoi("1000000");
	printf("\n");
    printf("709551615: %d \n", ft_atoi("709551615");
	printf("709551615: %d \n", atoi("709551615");
	printf("\n");
	printf("2147483647: %d \n", ft_atoi("2147483647");
	printf("2147483647: %d \n", atoi("2147483647");
	printf("\n");
	printf("0: %d \n", ft_atoi("0");
	printf("0: %d \n", atoi("0");
	printf("\n");
	printf("000: %d \n", ft_atoi("000");
	printf("000: %d \n", atoi("000");
	printf("\n");
	printf("\\0: %d \n", ft_atoi("\0");
	printf("\\0: %d \n", atoi("\0");
	printf("\n");
	return (0);
} */
