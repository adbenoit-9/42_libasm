/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 14:14:31 by user42            #+#    #+#             */
/*   Updated: 2020/08/31 14:11:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

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

void	print_write(void)
{
	int ret0;
	int ret1;
	int fd;
	char *str0 = "Sample text";

	fd = 1;
	ret0 = write(fd, str0, ft_strlen(str0));
	ret1 = ft_write(fd, str0, ft_strlen(str0));
	printf("%s%d	%s%s\n", "\033[0;1;33m", ret0, strerror(errno), "\033[0m");
	printf("%s%d	%s%s\n\n", "\033[1;32m", ret1, strerror(errno), "\033[0m");
	fd = open("./test_wr", O_WRONLY);
	ret0 = write(fd, str0, ft_strlen(str0));
	ret1 = ft_write(fd, str0, ft_strlen(str0));
	printf("%s%d	%s%s\n", "\033[1;33m", ret0, strerror(errno), "\033[0m");
	printf("%s%d	%s%s\n\n", "\033[1;32m", ret1, strerror(errno), "\033[0m");
	fd = -1;
	ret0 = write(fd, str0, ft_strlen(str0));
	ret1 = ft_write(fd, str0, ft_strlen(str0));
	printf("%s%d	%s%s\n", "\033[1;33m", ret0, strerror(errno), "\033[0m");
	printf("%s%d	%s%s\n\n", "\033[1;32m", ret1, strerror(errno), "\033[0m");

	ret0 = ft_write(1, str0, 2);
	ret1 = write(1, str0, 2);
	printf("%s%d	%s%s\n", "\033[1;33m", ret0, strerror(errno), "\033[0m");
	printf("%s%d	%s%s\n\n", "\033[1;32m", ret1, strerror(errno), "\033[0m");
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

	printf("\n\033[1;4;34m******** write ********\033[0m\n\n");
	print_write();
	return (0);
}