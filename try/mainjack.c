#include <ft_printf.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <limits.h>


int		main(int ac, char **av)
{


	ft_printf("%ls %S %S %S\n", L"åß", L"asd", L"asd", L"asd");
	ft_printf("%ld %ld %lld %hu %hhd\n", (INT_MAX + 1L), INT64_MAX + 1, INT64_MAX, UINT16_MAX + 1);
	ft_printf("%hhhhllllllllllllllz");
	ft_printf("%00000000.0% %.o\n", 0);
	ft_printf("%00000000.0%\n", -21321);
	ft_printf("%00000000.0%\n", 222);
	ft_printf("%00000000.0%\n", 555);
	ft_printf("%00000000.0%\n", 3333);
	ft_printf("%00000000.0%\n", 564641);
	ft_printf("%00000000.0%\n", 564321);
	ft_printf("%00000000.0%\n", 21);
	ft_printf("{red}blablabla{eoc}\n");

	return (0);
}
