#include "includes/libasm_bonus.h"

# define ATOI_BASE(s, b, ans)	i = ft_atoi_base(s, b); printf("******************************\n\"%s\"[%s]: \033[33m\n%d \033[0m| \033[32m%s\033[0m\n", s, b, i, ans);

void	print_atoi_base(void)
{
	int	i = 0;
	ATOI_BASE("42", "0123456789", "42")
	ATOI_BASE("0", "0123456789", "0")
	ATOI_BASE("1", "0123456789", "1")
	ATOI_BASE("1215415478", "0123456789", "1215415478")
	ATOI_BASE("-0", "0123456789", "0")
	ATOI_BASE("-1", "0123456789", "-1")
	ATOI_BASE("-42", "0123456789", "-42")
	ATOI_BASE("--42", "0123456789", "")
	ATOI_BASE("-+-42", "0123456789", "42")
	ATOI_BASE("-+-+-+42", "0123456789", "-42")
	ATOI_BASE("-+-+-+-42", "0123456789", "42")
	ATOI_BASE("-1215415478", "0123456789", "-1215415478")
	ATOI_BASE("2147483647", "0123456789", "2147483647")
	ATOI_BASE("2147483648", "0123456789", "2147483648")
	ATOI_BASE("-2147483648", "0123456789", "-2147483648")
	ATOI_BASE("-2147483649", "0123456789", "-2147483649")
	ATOI_BASE("2a", "0123456789abcdef", "42")
	ATOI_BASE("ff", "0123456789abcdef", "255")
	ATOI_BASE("poney", "poney", "0")
	ATOI_BASE("dommage", "invalid", "0")
	ATOI_BASE("dommage", "aussi invalide", "0")
	ATOI_BASE("dommage", "+toujours", "0")
	ATOI_BASE("dommage", "-stop", "0")
	ATOI_BASE("dommage", "  \t\nca suffit", "0")
	ATOI_BASE("    +42", "0123456789", "42")
	ATOI_BASE("    -42", "0123456789", "-42")
	ATOI_BASE("    42", "0123456789", "42")
	ATOI_BASE("  \t\n\r\v\f  42", "0123456789", "42")
	ATOI_BASE("  \t\n\r\v\f  -42", "0123456789", "-42")
	ATOI_BASE("42FINIS !", "0123456789", "42")
	ATOI_BASE("-42FINIS !", "0123456789", "-42")
	ATOI_BASE("C'est dommage42", "0123456789", "0")
}

int	main()
{
	printf("\033[1;33mMine\n\033[1;32mComputer's\n");
	printf("\n\033[1;4;34m******** atoi_base ********\033[0m\n\n");
	print_atoi_base();
	// printf("\n\033[1;4;34m******** strcpy ********\n\n");
	// print_strcpy();
	// printf("\n\033[1;4;34m******** strcmp ********\n\n");
	// print_strcmp();
	// printf("\n\033[1;4;34m******** write ********\033[0m\n\n");
	// print_write();
	// printf("\n\033[1;4;34m******** read ********\033[0m\n\n");
	// print_read();
	// printf("\n\033[1;4;34m******** strdup ********\033[0m\n\n");
	// print_strdup();
	return (0);
}