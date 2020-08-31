/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 11:01:23 by mabriand          #+#    #+#             */
/*   Updated: 2020/08/29 18:43:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm_header/libasm.h"

/*
** ft_strlen
*/

void	ft_check_strlen(void)
{
	printf("\n\n%s*********************** FT_STRLEN ***********************\n\n%s", UBLUE, NC);
	char *str0 = "";
	printf("%s\"%s\"\n\n%s", BWHITE, str0, NC);

	printf("the strlen: ");
	printf("%s%ld\n%s", BGREEN, strlen(str0), NC);
	printf("my ft_strlen: ");
	printf("%s%ld\n\n%s", BGREEN, ft_strlen(str0), NC);

	char *str1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	printf("%s\"%s\"\n\n%s", BWHITE, str1, NC);

	printf("the strlen: ");
	printf("%s%ld\n%s", BGREEN, strlen(str1), NC);
	printf("my ft_strlen: ");
	printf("%s%ld\n\n%s", BGREEN, ft_strlen(str1), NC);
	return ;
}

/*
** ft_strcpy
*/

void	ft_check_strcpy(void)
{
	printf("%s*********************** FT_STRCPY ***********************\n\n%s", UBLUE, NC);
	char str0[500] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	char *str1 = "Hello World!";
	printf("dest: ");
	printf("%s\"%s\"\n%s", BWHITE, str0, NC);
	printf("source: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str1, NC);

	printf("the strcpy: ");
	printf("%s%s\n%s", BGREEN, strcpy(str0, str1), NC);
	printf("my ft_strcpy: ");
	printf("%s%s\n\n%s", BGREEN, ft_strcpy(str0, str1), NC);

	char str2[500] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	char *str3 = "";
	printf("dest: ");
	printf("%s\"%s\"\n%s", BWHITE, str2, NC);
	printf("source: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str3, NC);

	printf("the strcpy: ");
	printf("%s%s\n%s", BGREEN, strcpy(str2, str3), NC);
	printf("my ft_strcpy: ");
	printf("%s%s\n\n%s", BGREEN, ft_strcpy(str2, str3), NC);

	char str4[500] = "Hello World!";
	char *str5 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	printf("dest: ");
	printf("%s\"%s\"\n%s", BWHITE, str4, NC);
	printf("source: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str5, NC);

	printf("the strcpy: ");
	printf("%s%s\n%s", BGREEN, strcpy(str4, str5), NC);
	printf("my ft_strcpy: ");
	printf("%s%s\n\n%s", BGREEN, ft_strcpy(str4, str5), NC);

	char str6[500] = "";
	char *str7 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	printf("dest: ");
	printf("%s\"%s\"\n%s", BWHITE, str6, NC);
	printf("source: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str7, NC);

	printf("the strcpy: ");
	printf("%s%s\n%s", BGREEN, strcpy(str6, str7), NC);
	printf("my ft_strcpy: ");
	printf("%s%s\n\n%s", BGREEN, ft_strcpy(str6, str7), NC);
	return ;
}

/*
** ft_strcmp
*/

void	ft_check_strcmp(void)
{
	printf("%s*********************** FT_STRCMP ***********************\n\n%s", UBLUE, NC);
	char str0[100] = "";
	char str1[100] = "";
	printf("s1: ");
	printf("%s\" %s \"\n%s", BWHITE, str0, NC);
	printf("s2: ");
	printf("%s\" %s \"\n\n%s", BWHITE, str1, NC);

	printf("the strcmp: ");
	printf("%s%d\n%s", BGREEN, strcmp(str0, str1), NC);
	printf("my ft_strcmp: ");
	printf("%s%d\n\n%s", BGREEN, ft_strcmp(str0, str1), NC);

	char str2[100] = "";
	char str3[100] = "Hello World!";
	printf("s1: ");
	printf("%s\"%s\"\n%s", BWHITE, str2, NC);
	printf("s2: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str3, NC);

	printf("the strcmp: ");
	printf("%s%d\n%s", BGREEN, strcmp(str2, str3), NC);
	printf("my ft_strcmp: ");
	printf("%s%d\n\n%s", BGREEN, ft_strcmp(str2, str3), NC);

	char str4[100] = "Hello World!";
	char str5[100] = "";
	printf("s1: ");
	printf("%s\"%s\"\n%s", BWHITE, str4, NC);
	printf("s2: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str5, NC);

	printf("the strcmp: ");
	printf("%s%d\n%s", BGREEN, strcmp(str4, str5), NC);
	printf("my ft_strcmp: ");
	printf("%s%d\n\n%s", BGREEN, ft_strcmp(str4, str5), NC);

	char str6[100] = "Hello World!";
	char str7[100] = "Hello World!";
	printf("s1: ");
	printf("%s\"%s\"\n%s", BWHITE, str6, NC);
	printf("s2: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str7, NC);

	printf("the strcmp: ");
	printf("%s%d\n%s", BGREEN, strcmp(str6, str7), NC);
	printf("my ft_strcmp: ");
	printf("%s%d\n\n%s", BGREEN, ft_strcmp(str6, str7), NC);

	char str8[100] = "Hey";
	char str9[100] = "Hello World!";
	printf("s1: ");
	printf("%s\"%s\"\n%s", BWHITE, str8, NC);
	printf("s2: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str9, NC);

	printf("the strcmp: ");
	printf("%s%d\n%s", BGREEN, strcmp(str8, str9), NC);
	printf("my ft_strcmp: ");
	printf("%s%d\n\n%s", BGREEN, ft_strcmp(str8, str9), NC);
	return ;
}

/*
** ft_strdup
*/

void	ft_check_strdup(void)
{
	printf("%s*********************** FT_STRDUP ***********************\n\n%s", UBLUE, NC);
	char str0[500] = "";
	printf("s: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str0, NC);

	printf("the strdup: ");
	printf("%s%s\n%s", BGREEN, strdup(str0), NC);
	printf("my ft_strdup: ");
	printf("%s%s\n\n%s", BGREEN, ft_strdup(str0), NC);

	char str1[500] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	printf("s: ");
	printf("%s\"%s\"\n\n%s", BWHITE, str1, NC);

	printf("the strdup: ");
	printf("%s%s\n%s", BGREEN, strdup(str1), NC);
	printf("my ft_strdup: ");
	printf("%s%s\n\n%s", BGREEN, ft_strdup(str1), NC);
	return ;
}

/*
** ft_write
*/

void	ft_check_write(void)
{
	printf("%s*********************** FT_WRITE ************************\n\n%s", UBLUE, NC);
	int ret0;
	int ret1;
	char *str0 = "Sample text";
	printf("buf: ");
	printf("%s\" %s \"\n\n%s", BWHITE, str0, NC);

	int fd = 1;
	printf("the write:\n");
	ret0 = write(fd, str0, ft_strlen(str0));
	printf("%s\n%d - %s\n\n%s", BGREEN, ret0, strerror(errno), NC);
	printf("my ft_write:\n");
	ret1 = ft_write(fd, str0, ft_strlen(str0));
	printf("%s\n%d - %s\n\n%s", BGREEN, ret1, strerror(errno), NC);

	fd = open("./test_wr", O_WRONLY); 
	printf("the write:\n");
	ret0 = write(fd, str0, ft_strlen(str0));
	printf("%s%d - %s\n\n%s", BGREEN, ret0, strerror(errno), NC);
	printf("my ft_write:\n");
	ret1 = ft_write(fd, str0, ft_strlen(str0));
	printf("%s%d - %s\n\n%s", BGREEN, ret1, strerror(errno), NC);
	close(fd);

	fd = -1;
	printf("the write:\n");
	ret0 = write(fd, str0, ft_strlen(str0));
	printf("%s%d - %s\n\n%s", BGREEN, ret0, strerror(errno), NC);
	printf("my ft_write:\n");
	ret1 = ft_write(fd, str0, ft_strlen(str0));
	printf("%s%d - %s\n\n%s", BGREEN, ret1, strerror(errno), NC);
	return ;
}

/*
** ft_read
*/

void	ft_check_read(void)
{
	printf("%s*********************** FT_READ *************************\n\n%s", UBLUE, NC);
	int ret0;
	int ret1;
	int ret2;
	int count = 500;
	char *str0 = malloc(sizeof(char) * 500);
	char *str1 = malloc(sizeof(char) * 500);
	char *str2 = malloc(sizeof(char) * 500);

	int fd = open("./test_rd", O_RDONLY);
	ret0 = read(fd, str0, count);
	printf("the read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret0, strerror(errno), NC);
	printf("buf:\n%s\n\n", str0);
	close(fd);
	fd = open("./test_rd", O_RDONLY);
	ret1 = read(fd, str0, count);
	printf("my ft_read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret1, strerror(errno), NC);
	printf("buf:\n%s\n\n", str0);
	close(fd);

	free(str0);

	fd = 0;
	ret2 = read(fd, str1, count);
	printf("the read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret2, strerror(errno), NC);
	printf("buf:\n%s\n\n", str1);
	printf("my ft_read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret2, strerror(errno), NC);
	printf("buf:\n%s\n\n", str1);

	free(str1);

	fd = -1;
	ret2 = read(fd, str2, count);
	printf("the read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret2, strerror(errno), NC);
	printf("buf:\n%s\n\n", str2);
	printf("my ft_read: ");
	printf("%s\n%d - %s\n%s", BGREEN, ret2, strerror(errno), NC);
	printf("buf:\n%s\n\n", str2);

	free(str2);
	
	return ;
}

int main(void)
{
	ft_check_strlen();
	ft_check_strcpy();
	ft_check_strcmp();
	ft_check_strdup();
	ft_check_write();
	ft_check_read();
	return (0);
}
