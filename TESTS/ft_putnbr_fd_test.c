#include "ft_tests.h"
#include EVAL_DIR

int main (void)
{
	ft_putnbr_fd(456, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-456, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483647, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
