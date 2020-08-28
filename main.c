#include <stdio.h>
#include <string.h>

size_t	ft_strlen(char *str);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);

void	print_strlen(void)
{
	char str0[500] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	char *str1 = "Hello World!";
	char str2[500] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	char *str3 = "";

	printf("%s%ld%s\n", "\033[0;1;33m", ft_strlen(str0), "\033[0m");
	printf("%s%ld%s\n\n", "\033[1;32m", strlen(str0), "\033[0m");
	printf("%s%ld%s\n", "\033[1;33m", ft_strlen(str1), "\033[0m");
	printf("%s%ld%s\n\n", "\033[1;32m", strlen(str1), "\033[0m");
	printf("%s%ld%s\n", "\033[1;33m", ft_strlen(str2), "\033[0m");
	printf("%s%ld%s\n\n", "\033[1;32m", strlen(str2), "\033[0m");
	printf("%s%ld%s\n", "\033[1;33m", ft_strlen(str3), "\033[0m");
	printf("%s%ld%s\n\n", "\033[1;32m", strlen(str3), "\033[0m");
}
void	print_strcpy(void)
{
	char str0[500] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	char *str1 = "Hello World!";
	char str2[500] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	char *str3 = "";
	char str4[500] = "Hello World!";
	char *str5 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	char str6[500] = "";
	char *str7 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";

	
	printf("%s%s%s|\n", "\033[0;1;33m", ft_strcpy(str0, str1), "\033[0m");
	printf("%s%s%s|\n\n", "\033[1;32m", strcpy(str0, str1), "\033[0m");
	printf("%s%s%s|\n", "\033[1;33m", ft_strcpy(str2, str3), "\033[0m");
	printf("%s%s%s|\n\n", "\033[1;32m", strcpy(str2, str3), "\033[0m");
	printf("%s%s%s|\n", "\033[1;33m", ft_strcpy(str4, str5), "\033[0m");
	printf("%s%s%s|\n\n", "\033[1;32m", strcpy(str4, str5), "\033[0m");
	printf("%s%s%s|\n", "\033[1;33m", ft_strcpy(str6, str7), "\033[0m");
	printf("%s%s%s|\n\n", "\033[1;32m", strcpy(str6, str7), "\033[0m");
}

void	print_strcmp(void)
{
	char str0[100] = "";
	char str1[100] = "";
	char str2[100] = "";
	char str3[100] = "Hello World!";
	char str4[100] = "Hello World!";
	char str5[100] = "";
	char str6[100] = "Hello World!";
	char str7[100] = "Hello World!";
	char str8[100] = "Hey";
	char str9[100] = "Hello World!";
	
	printf("%s%d%s\n", "\033[0;1;33m", ft_strcmp(str0, str1), "\033[0m");
	printf("%s%d%s\n\n", "\033[1;32m", strcmp(str0, str1), "\033[0m");
	printf("%s%d%s\n", "\033[1;33m", ft_strcmp(str2, str3), "\033[0m");
	printf("%s%d%s\n\n", "\033[1;32m", strcmp(str2, str3), "\033[0m");
	printf("%s%d%s\n", "\033[1;33m", ft_strcmp(str4, str5), "\033[0m");
	printf("%s%d%s\n\n", "\033[1;32m", strcmp(str4, str5), "\033[0m");
	printf("%s%d%s\n", "\033[1;33m", ft_strcmp(str6, str7), "\033[0m");
	printf("%s%d%s\n\n", "\033[1;32m", strcmp(str6, str7), "\033[0m");
	printf("%s%d%s\n", "\033[1;33m", ft_strcmp(str8, str9), "\033[0m");
	printf("%s%d%s\n\n", "\033[1;32m", strcmp(str8, str9), "\033[0m");
}

int	main()
{
	printf("\033[1;33mMine \033[1;32mComputer's\n");

	printf("\n\033[1;4;34m******** strlen ********\n\n");
	print_strlen();


	printf("\n\033[1;4;34m******** strcpy ********\n\n");
	print_strcpy();

	printf("\n\033[1;4;34m******** strcmp ********\n\n");
	print_strcmp();

	return (0);
}