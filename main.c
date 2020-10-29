/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 14:14:31 by user42            #+#    #+#             */
/*   Updated: 2020/10/29 15:39:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libasm.h"

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
	int ret;
	int fd;
	char *str = "Sample text";

	fd = 1;
	errno = 0;
	ret = ft_write(fd, str, ft_strlen(str));
	printf("|	%serrno = %d, ret = %d	%s%s\n", "\033[0;1;33m", errno, ret, strerror(errno), "\033[0m");
	errno = 0;
	ret = write(fd, str, ft_strlen(str));
	printf("|	%serrno = %d, ret = %d	%s%s\n\n", "\033[1;32m", errno, ret, strerror(errno), "\033[0m");

	fd = open("./test_wr", O_WRONLY);
	errno = 0;
	ret = ft_write(fd, str, ft_strlen(str));
	printf("|		%serrno = %d, ret = %d	%s%s\n", "\033[1;33m", errno, ret, strerror(errno), "\033[0m");
	errno = 0;
	ret = write(fd, str, ft_strlen(str));
	printf("|		%serrno = %d, ret = %d	%s%s\n\n", "\033[1;32m", errno, ret, strerror(errno), "\033[0m");

	fd = -1;
	errno = 0;
	ret = ft_write(fd, str, ft_strlen(str));
	printf("|		%serrno = %d, ret = %d	%s%s\n", "\033[1;33m", errno, ret, strerror(errno), "\033[0m");
	errno = 0;
	ret = write(fd, str, ft_strlen(str));
	printf("|		%serrno = %d, ret = %d	%s%s\n\n", "\033[1;32m", errno, ret, strerror(errno), "\033[0m");

	errno = 0;
	ret = ft_write(1, str, 2);
	printf("|		%serrno = %d, ret = %d	%s%s\n", "\033[1;33m", errno, ret, strerror(errno), "\033[0m");
	errno = 0;
	ret = write(1, str, 2);
	printf("|		%serrno = %d, ret = %d	%s%s\n\n", "\033[1;32m", errno, ret, strerror(errno), "\033[0m");
}

void	print_read(void)
{
	int ret;
	int fd;
	char str[4098];

	fd = 0;
	errno = 0;
	write(1, "Please enter the input: ", 24);
	ret = ft_read(fd, str, 4098);
	printf("%serrno = %d, ret = %d	%s%s\n", "\033[0;1;33m", errno, ret, strerror(errno), "\033[0m");
	errno = 0;
	write(1, "Please enter the same input: ", 29);
	ret = read(fd, str, 4098);
	printf("%serrno = %d, ret = %d	%s%s\n\n", "\033[1;32m", errno, ret, strerror(errno), "\033[0m");

	fd = open("./test_rd", O_RDONLY);
	errno = 0;
	ret = ft_read(fd, str, 4098);
	printf("%serrno = %d, ret = %d	%s%s\n", "\033[1;33m", errno, ret, strerror(errno), "\033[0m");
	close(fd);
	fd = open("./test_rd", O_RDONLY);
	errno = 0;
	ret = read(fd, str, 4098);
	printf("%serrno = %d, ret = %d	%s%s\n\n", "\033[1;32m", errno, ret, strerror(errno), "\033[0m");
	close(fd);

	errno = 0;
	fd = open("./test_rd", O_RDONLY);
	ret = ft_read(fd, str, 4);
	printf("%serrno = %d, ret = %d	%s%s\n", "\033[1;33m", errno, ret, strerror(errno), "\033[0m");
	close(fd);
	fd = open("./test_rd", O_RDONLY);
	errno = 0;
	ret = read(fd, str, 4);
	printf("%serrno = %d, ret = %d	%s%s\n\n", "\033[1;32m", errno, ret, strerror(errno), "\033[0m");
	close(fd);

	fd = -1;
	errno = 0;
	ret = ft_read(fd, str, 4098);
	printf("%serrno = %d, ret = %d	%s%s\n", "\033[1;33m", errno, ret, strerror(errno), "\033[0m");
	errno = 0;
	ret = read(fd, str, 4098);
	printf("%serrno = %d, ret = %d	%s%s\n\n", "\033[1;32m", errno, ret, strerror(errno), "\033[0m");
}

void	print_strdup(void)
{
	char str0[500] = "";
	char str1[500] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";

	printf("%s%s|%s\n", "\033[0;1;33m", ft_strdup(str0), "\033[0m");
	printf("%s%s|%s\n\n", "\033[1;32m", strdup(str0), "\033[0m");
	printf("%s%s|%s\n", "\033[1;33m", ft_strdup(str1), "\033[0m");
	printf("%s%s|%s\n\n", "\033[1;32m", strdup(str1), "\033[0m");
	printf("%s%s|%s\n", "\033[1;33m", ft_strdup("\0"), "\033[0m");
	printf("%s%s|%s\n\n", "\033[1;32m", strdup("\0"), "\033[0m");
	printf("%s%s|%s\n", "\033[1;33m", ft_strdup("test"), "\033[0m");
	printf("%s%s|%s\n\n", "\033[1;32m", strdup("test"), "\033[0m");
}

int	main()
{
	printf("\033[1;33mMine\n\033[1;32mComputer's\n");
	printf("\n\033[1;4;34m******** strlen ********\n\n");
	print_strlen();
	printf("\n\033[1;4;34m******** strcpy ********\n\n");
	print_strcpy();
	printf("\n\033[1;4;34m******** strcmp ********\n\n");
	print_strcmp();
	printf("\n\033[1;4;34m******** write ********\033[0m\n\n");
	print_write();
	printf("\n\033[1;4;34m******** read ********\033[0m\n\n");
	print_read();
	printf("\n\033[1;4;34m******** strdup ********\033[0m\n\n");
	print_strdup();
	return (0);
}