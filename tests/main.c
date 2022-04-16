/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <frosa-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:28:17 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/04/16 12:35:05 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>
#include <fcntl.h>

void	test_ft_isalpha()
{
	printf("\nft_isalpha\n");

	printf("Test 1:  ");
	if (ft_isalpha('-') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	if (ft_isalpha('a') != 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");
	if (ft_isalpha('A') != 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  ");
	if (ft_isalpha('$') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");
	if (ft_isalpha(' ') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	if (ft_isalpha('\t') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	if (ft_isalpha('\n') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	if (ft_isalpha(0) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9:  ");
	if (ft_isalpha(-45) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 10: ");
	if (ft_isalpha(127) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 11: ");
	if (ft_isalpha(101) != 0)
		printf("OK\n");
	else
		printf("KO\n");
}

void	test_ft_isdigit()
{
	printf("\nft_isdigit\n");

	printf("Test 1:  ");
	if (ft_isdigit(0) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	if (ft_isdigit(1) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");
	if (ft_isdigit(-1) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  ");
	if (ft_isdigit(21377382) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");
	if (ft_isdigit('0') != 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	if (ft_isdigit('9') != 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	if (ft_isdigit('\t') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	if (ft_isdigit('b') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9:  ");
	if (ft_isdigit('!') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 10: ");
	if (ft_isdigit(':') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 11: ");
	if (ft_isdigit('^') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 12: ");
	if (ft_isdigit('~') == 0)
		printf("OK\n");
	else
		printf("KO\n");
}

void	test_ft_isalnum()
{
	printf("\nft_isalnum\n");

	printf("Test 1:  ");
	if (ft_isalnum('a') != 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	if (ft_isalnum('A') != 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");
	if (ft_isalnum('0') != 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  ");
	if (ft_isalnum('9') != 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");
	if (ft_isalnum(0) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	if (ft_isalnum(0) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	if (ft_isalnum(-1) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	if (ft_isalnum(127) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9:  ");
	if (ft_isalnum(21377382) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 10: ");
	if (ft_isalnum('!') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 11: ");
	if (ft_isalnum(':') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 12: ");
	if (ft_isalnum('^') == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 13: ");
	if (ft_isalnum('~') == 0)
		printf("OK\n");
	else
		printf("KO\n");
}

void	test_ft_isascii()
{
	printf("\nft_isascii\n");

	printf("Test 1: ");
	int fail = 0;
	for (int i=0; i <= 127; ++i)
		if (!ft_isascii(i))
			fail = 1;
	if (fail)
		printf("KO\n");
	else
		printf("OK\n");

	printf("Test 2: ");
	fail = 0;
	for (int i=-255; i < 0; ++i)
		if (ft_isascii(i))
			fail = 1;
	if (fail)
		printf("KO\n");
	else
		printf("OK\n");

	printf("Test 3: ");
	fail = 0;
	for (int i=128; i < 256; ++i)
		if (ft_isascii(i))
			fail = 1;
	if (fail)
		printf("KO\n");
	else
		printf("OK\n");
}

void	test_ft_isprint()
{
	printf("\nft_isprint\n");

	printf("Test 1: ");
	int fail = 0;
	for (int i=0; i >= 32 && i <= 127; ++i)
		if (!ft_isprint(i))
			fail = 1;
	if (fail)
		printf("KO\n");
	else
		printf("OK\n");

	printf("Test 2: ");
	fail = 0;
	for (int i=-255; i < 32; ++i)
		if (ft_isprint(i))
			fail = 1;
	if (fail)
		printf("KO\n");
	else
		printf("OK\n");

	printf("Test 3: ");
	fail = 0;
	for (int i=128; i < 256; ++i)
		if (ft_isprint(i))
			fail = 1;
	if (fail)
		printf("KO\n");
	else
		printf("OK\n");
}

void	test_ft_strlen()
{
	printf("\nft_strlen\n");

	printf("Test 1: ");
	if (ft_strlen("foo") == 3)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: ");
	if (ft_strlen("") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3: ");
	if (ft_strlen(NULL) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4: ");
	if (ft_strlen("x") == 1)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5: ");
	if (ft_strlen("foo b\0ar baz") == 5)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6: ");
	if (ft_strlen("foo\tbar\tbaz") == 11)
		printf("OK\n");
	else
		printf("KO\n");
}

void	test_ft_toupper()
{
	printf("\nft_toupper\n");

	printf("Test 1: ");
	if (ft_toupper(' ') == ' ')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: ");
	if (ft_toupper('\t') == '\t')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3: ");
	if (ft_toupper('0') == '0')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4: ");
	if (ft_toupper('a') == 'A')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5: ");
	if (ft_toupper('F') == 'F')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6: ");
	if (ft_toupper('!') == '!')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7: ");
	if (ft_toupper(':') == ':')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8: ");
	if (ft_toupper('^') == '^')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9: ");
	if (ft_toupper('~') == '~')
		printf("OK\n");
	else
		printf("KO\n");
}

void	test_ft_tolower()
{
	printf("\nft_tolower\n");

	printf("Test 1: ");
	if (ft_tolower(' ') == ' ')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: ");
	if (ft_tolower('\t') == '\t')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3: ");
	if (ft_tolower('0') == '0')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4: ");
	if (ft_tolower('a') == 'a')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5: ");
	if (ft_tolower('F') == 'f')
		printf("OK\n");
	else
		printf("KO\n");
	
	printf("Test 6: ");
	if (ft_tolower('!') == '!')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7: ");
	if (ft_tolower(':') == ':')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8: ");
	if (ft_tolower('^') == '^')
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9: ");
	if (ft_tolower('~') == '~')
		printf("OK\n");
	else
		printf("KO\n");
}

void	test_ft_strchr()
{
	printf("\nft_strchr\n");

	char *s = (char *)calloc(100, sizeof(char));

	printf("Test 1: ");
	strcpy(s, "foo bar baz");
	if (strcmp(ft_strchr(s, 'o'), s+1) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: ");
	memset(s, 0, 100);
	strcpy(s, "foo bar baz");
	if (strcmp(ft_strchr(s, 'z'), s+10) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3: ");
	memset(s, 0, 100);
	strcpy(s, "foo bar baz");
	if (strcmp(ft_strchr(s, '\0'), "") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4: ");
	memset(s, 0, 100);
	strcpy(s, "foo bar baz");
	if (ft_strchr(s, 'Z') == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5: ");
	if (ft_strchr(NULL, 'f') == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	free(s);
}

void	test_ft_strrchr()
{
	printf("\nft_strrchr\n");

	char *s = (char *)calloc(100, sizeof(char));

	printf("Test 1: ");
	strcpy(s, "League of legends");
	if (strcmp(ft_strrchr(s, 'g'), s+12) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: ");
	memset(s, 0, 100);
	strcpy(s, "the quick brown fox jumps over the lazy dog");
	if (strcmp(ft_strrchr(s, 'u'), s+21) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3: ");
	memset(s, 0, 100);
	strcpy(s, "Shall we?");
	if (ft_strrchr(s, 's') == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4: ");
	memset(s, 0, 100);
	strcpy(s, "Another\0clever word");
	if (strcmp(ft_strrchr(s, 'r'), s+6) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5: ");
	if (ft_strrchr(NULL, 'F') == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	free(s);
}

void	test_ft_strncmp()
{
	printf("\nft_strncmp\n");

	printf("Test 1:  ");
	if (ft_strncmp("", "", 10) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	if (ft_strncmp("XYZ", "ABC", 0) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");
	if (ft_strncmp("", "", -10) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  ");
	if (ft_strncmp("foo", "", 10) == 102)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");
	if (ft_strncmp("", "foo", 10) == -102)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	if (ft_strncmp("foo", "foo", 10) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	if (ft_strncmp("foobar", "foo", 10) == 98)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	if (ft_strncmp("foo", "foobar", 10) == -98)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9:  ");
	if (ft_strncmp("foobar", "foo", 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 10: ");
	if (ft_strncmp("foo", "foobar", 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 11: ");
	if (ft_strncmp("foo", NULL, 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 12: ");
	if (ft_strncmp(NULL, "foobar", 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 13: ");
	if (ft_strncmp("f\0Z", "f\0A", 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 14: ");
	if (ft_strncmp("\0", "\0", 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 15: ");
	if (ft_strncmp("", "\0", 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 16: ");
	if (ft_strncmp("\0", "", 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");
}

void	test_ft_memchr()
{
	printf("\nft_memchr\n");

	char *s = (char *)malloc(50 * sizeof(char));

	printf("Test 1:  ");
	strcpy(s, "foo bar baz");
	if ((char *)ft_memchr(s, 'b', strlen(s)) == s+4)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	if (ft_memchr(s, 'b', 3) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");
	if (ft_memchr(NULL, 'b', strlen(s)) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  ");
	if (ft_memchr(s, 'F', strlen(s)) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");
	if (strcmp((char *)ft_memchr(s, 'z', strlen(s)), s+10) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	if (strcmp((char *)ft_memchr(s, 'f', strlen(s)), s) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	memset(s, 0, 50);
	strcpy(s, "Same song and dance");
	if ((char *)ft_memchr(s, '\0', 20) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	memset(s, 0, 50);
	strcpy(s, "mich@student.42sp.org.br");
	if (strcmp((char *)ft_memchr(s, '@', strlen(s)), s+4) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9:  ");
	char s2[] = "";
	if (ft_memchr(s2, 'F', strlen(s)) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	free(s);
	s = NULL;
	
	int tab[] = {10, 20, 30, 40, -42};
	int *q;

	printf("Test 10: ");
	q = ft_memchr(tab, 20, sizeof(tab));
	if (*q == tab[1])
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 11: ");
	q = ft_memchr(tab, 40, sizeof(tab));
	if (*q == tab[3])
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 12: ");
	q = ft_memchr(tab, 90, sizeof(tab));
	if (q == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	// q = ft_memchr(tab, -42, sizeof(tab));
	// 	 munmap_chunk(): invalid pointer
	// 	 [1]	15958 abort. Cant assign -ve value to 'unsigned char' dude x.x
}

void	test_ft_memcmp()
{
	printf("\nft_memcmp\n");

	printf("Test 1:  ");
	if (ft_memcmp(NULL, "foo", 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	if (ft_memcmp("foo", NULL, 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");
	if (ft_memcmp("foo", "foo", 0) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  ");
	if (ft_memcmp("foobar", "foo", 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");
	if (ft_memcmp("foo", "foobar", 3) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	if (ft_memcmp("foobar", "foo", 10) == 98)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	if (ft_memcmp("foo", "foobar", 10) == -98)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	if (ft_memcmp("", "", 10) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9:  ");
	if (ft_memcmp("\0", "\0", 10) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 10: ");
	if (ft_memcmp("foo", "", 10) == 102)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 11: ");
	if (ft_memcmp("", "foo", 10) == -102)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 12: ");
	if (ft_memcmp("XYZ", "ABC", 1) == 23)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 13: ");
	if (ft_memcmp("ABC", "ABZ", 3) == -23)
		printf("OK\n");
	else
		printf("KO\n");
}

void	test_ft_memcpy()
{
	printf("\nft_memcpy\n");

	char *cdest = (char *)calloc(50, sizeof(char));
	char *csrc  = (char *)calloc(50, sizeof(char));

    printf("Test 1:  ");
	strcpy(cdest, "Thats not funny");
	strcpy(csrc, "rly");
    ft_memcpy(cdest+7, csrc, 3);
	if (strcmp(cdest, "That's rly funny"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 2:  ");
	memset(cdest, 0, strlen(cdest));
	memset(csrc, 0, strlen(csrc));
	strcpy(cdest, "Thats not funny");
	strcpy(csrc, "rly");
    ft_memcpy(cdest+9, csrc, 1);
	if (strcmp(cdest, "That's nor funny"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 3:  ");
	memset(cdest, 0, strlen(cdest));
	memset(csrc, 0, strlen(csrc));
	strcpy(cdest, "Thats not funny");
	strcpy(csrc, "rly");
    ft_memcpy(cdest+7, csrc, 4); // Including null-character "rly\0"
	if (strcmp(cdest, "That's rly"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 4:  ");
	memset(cdest, 0, strlen(cdest));
	memset(csrc, 0, strlen(csrc));
	strcpy(cdest, "Thats not funny");
	strcpy(csrc, "rly");
    ft_memcpy(cdest+7, csrc, 0); // Zero bytes
	if (strcmp(cdest, "That's not funny"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 5:  ");
	memset(cdest, 0, strlen(cdest));
	memset(csrc, 0, strlen(csrc));
	strcpy(cdest, "I got everything I wanted 123");
    ft_memcpy(cdest+8, csrc+26, 3); // Working on a single string
	if (strcmp(cdest, "I got ev123thing I wanted 123"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 6:  ");
	memset(cdest, 0, strlen(cdest));
	strcpy(cdest, "A shiny white sphere");
    ft_memcpy(cdest+8, csrc+2, 5); // Single string
	if (strcmp(cdest, "A shiny shiny sphere"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 7:  ");
	memset(cdest, 0, strlen(cdest));
	strcpy(cdest, "Wow! 42 and the caramelo doggy!");
    ft_memcpy(cdest+17, csrc+5, 2); // Single string
	if (strcmp(cdest, "Wow! 42 and the c42amero doggy!"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 8:  ");
	memset(cdest, 0, strlen(cdest));
	strcpy(cdest, "foo bar baz");
    if (ft_memcpy(cdest, NULL, 3) == NULL) // Dealing with NULL entries
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 9:  ");
    if (ft_memcpy(NULL, csrc, 3) == NULL) // NULL entry
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 10: ");
	memset(cdest, 0, strlen(cdest));
	strcpy(csrc, "");
	strcpy(cdest, "Lonely");
    ft_memcpy(cdest+1, csrc, 1); // Copying '\0' into dest
	if (strcmp(cdest, "L") == 0)
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 11: ");
	memset(cdest, 0, strlen(cdest));
	memset(csrc, 0, strlen(csrc));
	strcpy(cdest, "foobar baz123");          // strlen(dest) -> 13
    ft_memcpy(cdest+3, cdest, 6);  // Copying first 6 bytes from 'cdest' and inserting into 'cdest+3', causing an overlap
	if (strcmp(cdest, "foofoofooz123") == 0) // strlen(dest) -> 13  still
		printf("OK\n");
	else
		printf("KO\n");

    // printf("Test 11: ");
	// memset(cdest, 0, strlen(cdest));
	// strcpy(csrc, "If you had a brain it would be dangerous");
    // ft_memcpy(cdest, csrc, -1); // A -ve value would cause segfault.
	// if (strcmp(cdest, csrc))
	// 	printf("OK\n");
	// else
	// 	printf("KO\n");

	free(cdest);
	cdest = NULL;
	free(csrc);
	csrc = NULL;

	int *p = (int *)calloc(5, sizeof(int)); // p = new dest address
	int fail;

    printf("Test 12: ");
	int	tab[10] = {10, 20, 30, 40, 50};
	fail = 0;
	memset(p, 0, 5*sizeof(int));
    ft_memcpy(p, tab+3, 3*sizeof(int));  // Working with integers datatype
	if (p[0] == tab[3] && p[1] == tab[4] && p[2] == tab[5])
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 13: ");
	memset(p, 0, 5*sizeof(int));
    ft_memcpy(p, tab, 5*sizeof(int));
	for (int i=0; i < 5; ++i)
	{
		if (p[i] != tab[i])
		{
			printf("KO\n");
			fail = 1;
			break ;
		}
	}
	if (!fail)
		printf("OK\n");

    printf("Test 14: "); 				  // Overlap case (data lost)
	memset(p, 0, 5*sizeof(int));
    ft_memcpy(tab+2, tab, 3*sizeof(int)); // 10 20 30 40 50 -> 10 20 10 20 10
	if ((tab[0] == 10) && (tab[1] == 20) && (tab[2] == 10) & (tab[3] == 20) && (tab[4] == 10))
		printf("OK\n");
	else
		printf("KO\n");

	free(p);
	p = NULL;
}

void	test_ft_memmove()
{
	printf("\nft_memmove\n");

	char *cdest = (char *)calloc(50, sizeof(char));
	char *csrc  = (char *)calloc(50, sizeof(char));

    printf("Test 1:  ");
	strcpy(cdest, "Thats not funny");
	strcpy(csrc, "rly");
    ft_memmove(cdest+7, csrc, 3);
	if (strcmp(cdest, "That's rly funny"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 2:  ");
	memset(cdest, 0, strlen(cdest));
	memset(csrc, 0, strlen(csrc));
	strcpy(cdest, "Thats not funny");
	strcpy(csrc, "rly");
    ft_memmove(cdest+9, csrc, 1);
	if (strcmp(cdest, "That's nor funny"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 3:  ");
	memset(cdest, 0, strlen(cdest));
	memset(csrc, 0, strlen(csrc));
	strcpy(cdest, "Thats not funny");
	strcpy(csrc, "rly");
    ft_memmove(cdest+7, csrc, 4); // Including null-character "rly\0"
	if (strcmp(cdest, "That's rly"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 4:  ");
	memset(cdest, 0, strlen(cdest));
	memset(csrc, 0, strlen(csrc));
	strcpy(cdest, "Thats not funny");
	strcpy(csrc, "rly");
    ft_memmove(cdest+7, csrc, 0); // Zero bytes
	if (strcmp(cdest, "That's not funny"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 5:  ");
	memset(cdest, 0, strlen(cdest));
	memset(csrc, 0, strlen(csrc));
	strcpy(cdest, "I got everything I wanted 123");
    ft_memmove(cdest+8, csrc+26, 3); // Working on a single string
	if (strcmp(cdest, "I got ev123thing I wanted 123"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 6:  ");
	memset(cdest, 0, strlen(cdest));
	strcpy(cdest, "A shiny white sphere");
    ft_memmove(cdest+8, csrc+2, 5); // Single string
	if (strcmp(cdest, "A shiny shiny sphere"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 7:  ");
	memset(cdest, 0, strlen(cdest));
	strcpy(cdest, "Wow! 42 and the caramelo doggy!");
    ft_memmove(cdest+17, csrc+5, 2); // Single string
	if (strcmp(cdest, "Wow! 42 and the c42amero doggy!"))
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 8:  ");
	memset(cdest, 0, strlen(cdest));
	strcpy(cdest, "foo bar baz");
    if (ft_memmove(cdest, NULL, 3) == NULL) // Dealing with NULL entries
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 9:  ");
    if (ft_memmove(NULL, csrc, 3) == NULL) // NULL entry
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 10: ");
	memset(cdest, 0, strlen(cdest));
	strcpy(csrc, "");
	strcpy(cdest, "Lonely");
    ft_memmove(cdest+1, csrc, 1); // Copying '\0' into dest
	if (strcmp(cdest, "L") == 0)
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 11: ");
	memset(cdest, 0, strlen(cdest));
	memset(csrc, 0, strlen(csrc));
	strcpy(cdest, "foobar baz123");          // strlen(dest) -> 13
    ft_memmove(cdest+3, cdest, 6);  // Copying first 6 bytes from 'cdest' and inserting into 'cdest+3', causing an overlap
	if (strcmp(cdest, "foofoobarz123") == 0) // strlen(dest) -> 13  still
		printf("OK\n");
	else
		printf("KO\n");

	free(cdest);
	cdest = NULL;
	free(csrc);
	csrc = NULL;

	int *p = (int *)calloc(5, sizeof(int)); // p = new dest address
	int fail;

    printf("Test 12: ");
	int	tab[10] = {10, 20, 30, 40, 50};
	fail = 0;
	memset(p, 0, 5*sizeof(int));
    ft_memmove(p, tab+3, 3*sizeof(int));  // Working with integers datatype
	if (p[0] == tab[3] && p[1] == tab[4] && p[2] == tab[5])
		printf("OK\n");
	else
		printf("KO\n");

    printf("Test 13: ");
	memset(p, 0, 5*sizeof(int));
    ft_memmove(p, tab, 5*sizeof(int));
	for (int i=0; i < 5; ++i)
	{
		if (p[i] != tab[i])
		{
			printf("KO\n");
			fail = 1;
			break ;
		}
	}
	if (!fail)
		printf("OK\n");

    printf("Test 14: "); 				   // Overlap case (preserve data)
	memset(p, 0, 5*sizeof(int));
    ft_memmove(tab+2, tab, 3*sizeof(int)); // 10 20 30 40 50 -> 10 20 10 20 30
	if ((tab[0] == 10) && (tab[1] == 20) && (tab[2] == 10) & (tab[3] == 20) && (tab[4] == 30))
		printf("OK\n");
	else
		printf("KO\n");

	free(p);
	p = NULL;
}

void	test_ft_memset()
{
	printf("\nft_memset\n");

	char *s = (char *)calloc(30, sizeof(char));

	printf("Test 1:  ");
	strcpy(s, "mich@student.42sp.org.br");
	ft_memset(s, '*', 4);
	if (strcmp(s, "****@student.42sp.org.br") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	memset(s, 0, strlen(s));
	strcpy(s, "mich@student.42sp.org.br");
	ft_memset(s, 'F', 0); 		// zero case
	if (strcmp(s, s) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");
	memset(s, 0, strlen(s));
	strcpy(s, "Everything is what if");
	ft_memset(s+5, '-', 14);
	if (strcmp(s, "Every--------------if") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  ");
	memset(s, 0, strlen(s));
	strcpy(s, "Lonely");
	ft_memset(s, 'F', 10); // Overwriting 's' size
	if (strcmp(s, "FFFFFFFFFF") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");
	memset(s, 0, strlen(s));
	ft_memset(s, 'z', 3); // writing on a empty char array
	if (strcmp(s, "zzz") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	memset(s, 0, strlen(s));
	strcpy(s, "Lonely");
	ft_memset(s+1, '\0', 1); // inserting null-char at offset s+1
	if (strcmp(s, "L") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	memset(s, 0, strlen(s));
	strcpy(s, "Lonely");
	if (ft_memset(NULL, '\0', 1) == NULL) // Dealing with NULL entry
		printf("OK\n");
	else
		printf("KO\n");

	// memset(s, 0, strlen(s));
	// strcpy(s, "Lonely");
	// ft_memset(s, 'F', -1); // -ve entry would cause segfault

	printf("Test 8:  ");
	memset(s, 0, strlen(s));
	strcpy(s, "foo bar baz");
	ft_memset(s+4, '_', 3);
	if (strcmp(s, "foo ___ baz") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	free(s);
	s = NULL;

	int tab[5] = {10, 20, 30, 40, 50};
	int fail;

	printf("Test 9:  ");
	ft_memset(tab+1, 0, 1*sizeof(int));
	if (tab[1] == 0)
		printf("OK\n");
	else
		printf("KO\n");

	tab[1] = 40;

	printf("Test 10: ");
	ft_memset(tab, 0, 5*sizeof(int));
	fail = 0;
	for (int i=0; i < 5; ++i)
	{
		if (tab[i] != 0)
		{
			printf("KO\n");
			fail = 1;
			break ;
		}
	}
	if (!fail)
		printf("OK\n");
}

void	test_ft_bzero()
{
	printf("\nft_bzero\n");

	char *s = (char *)calloc(20, sizeof(char));

	printf("Test 1: ");
	strcpy(s, "foo bar baz");
	ft_bzero(s, 3); // setting 0's into the first 3 bytes
	if (strcmp(s+3, " bar baz") == 0 && !s[0] && !s[1] && !s[2])
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: ");
	memset(s, 0, strlen(s));
	strcpy(s, "foo bar");
	ft_bzero(s, 0); // testing zero entry
	if (strcmp(s, "foo bar") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3: ");
	memset(s, 0, strlen(s));
	strcpy(s, "foo");
	ft_bzero(s+2, 1); // single set
	if (strcmp(s, "fo") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4: ");
	memset(s, 0, strlen(s));
	strcpy(s, "foo");
	ft_bzero(s, 5); // over setting the 'src' len
	if (!s[0] && !s[1] && !s[2] && !s[3] && !s[4])
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5: ");
	memset(s, 0, strlen(s));
	ft_bzero(NULL, 1); // (null) entry
	printf("OK\n");
	
	free(s);
	s = NULL;

	int tab[3] = {1, 2, 3};
	printf("Test 6: ");
	ft_bzero(tab, 1*sizeof(int)); // set a single integer
	if(!tab[0] && tab[1] == 2 && tab[2] == 3)
		printf("OK\n");
	else
		printf("KO\n");

	tab[0] = 1;
	printf("Test 7: ");
	ft_bzero(tab+1, 2*sizeof(int)); // set multiple integers
	if(tab[0] == 1 && !tab[1] && !tab[2])
		printf("OK\n");
	else
		printf("KO\n");
}

void	test_ft_strlcpy()
{
	printf("\nft_strlcpy\n");

	char *dest = (char *)calloc(30, sizeof(char));
	char *src  = (char *)calloc(30, sizeof(char));

	printf("Test 1:  ");
	strcpy(src, "foo bar"); // copying 4 bytes (copy 3 chars and insert null implicitly)
	if ((ft_strlcpy(dest, src, 4) == strlen(src)) && (strcmp(dest, "foo") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(src, "foo bar baz"); // copying strlen(src) bytes
	if ((ft_strlcpy(dest, src, strlen(src)) == strlen(src)) && (strcmp(dest, "foo bar ba") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(src, "foo bar baz"); // copying strlen(src) + 1 (null) bytes
	if ((ft_strlcpy(dest, src, strlen(src)+1) == strlen(src)) && (strcmp(dest, "foo bar baz") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(src, "foo bar baz"); // Copying 0 bytes should just return strlen(src), and not copy
	if ((ft_strlcpy(dest, src, 0) == strlen(src)) && (strcmp(dest, "") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(src, "I need change"); // Passing -ve value
	if ((ft_strlcpy(dest, src, -1) == strlen(src)) && (strcmp(dest, "I need change") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(src, ""); // src being ""
	if ((ft_strlcpy(dest, src, strlen(src)+1) == strlen(src)) && (strcmp(dest, "") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(src, "End of\0 decade"); // catching a null while copying
	if ((ft_strlcpy(dest, src, strlen(src)+1) == strlen(src)) && (strcmp(dest, "End of") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(src, "NO NAME"); // NULL entry
	if ((ft_strlcpy(NULL, src, strlen(src)+1) == 0) && (strcmp(dest, "") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(src, "Nothing happens"); // NULL entry
	if ((ft_strlcpy(dest, NULL, strlen(src)+1) == 0) && (strcmp(dest, "") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 10: ");
	memset(src, 0, strlen(src));  // no 'dest' buffer anymore
	strcpy(src, "foobar baz123"); // overlaping (we should lose data hereee boyyzzzz)
	if ((ft_strlcpy(src+3, src, 7) == strlen(src)) && (strcmp(src, "foofoofoo") == 0))
		printf("OK\n"); // Also, the return value should be the new 'src' (truncation) strlen(src) = 9
	else
		printf("KO\n"); 

	printf("Test 11: ");
	memset(src, 0, strlen(src));
	strcpy(src, "Appreciate my art");
	strcpy(dest, "What a tree");
	if ((ft_strlcpy(dest+7, src+14, 4) == 3) && (strcmp(dest, "What a art") == 0))
		printf("OK\n"); // copying only 4 bytes from src to dest. strlen(src) is 3
	else
		printf("KO\n"); 
	
	free(dest);
	dest = NULL;
	free(src);
	src = NULL;
}

void	test_ft_strlcat()
{
	printf("\nft_strlcat\n");

	char *dest = (char *)calloc(50, sizeof(char));
	char *src  = (char *)calloc(50, sizeof(char));

	printf("Test 1:  ");
	strcpy(dest, "8");
	strcpy(src, " miles"); // dsize == 0, just return strlen(src) (6)
	if ((ft_strlcat(dest, src, 0) == strlen(src)) && (strcmp(dest, "8") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "8");
	strcpy(src, " miles");
	if ((ft_strlcat(dest, src, 1) == strlen(src)+1) && (strcmp(dest, "8") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "8");
	strcpy(src, " miles"); // Even passing dsize as 2, the return value should always be 2 
	if ((ft_strlcat(dest, src, 2) == strlen(src)+1) && (strcmp(dest, "8") == 0))
		printf("OK\n");    //   (strlen(dest) + '\0') (2)
	else
		printf("KO\n");

	printf("Test 4:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "8");
	strcpy(src, " miles"); // passing dsize (42), 42 > strlen(src) + 1, so we can append *src to *dest.
	if ((ft_strlcat(dest, src, 42) == strlen(src)+1) && (strcmp(dest, "8 miles") == 0))
		printf("OK\n");    // However, the return value still being 2 (strlen(dest) + '\0') = 2
	else
		printf("KO\n");

	printf("Test 5:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "8");
	strcpy(src, " miles");  // Same
	if ((ft_strlcat(dest, src, -42) == strlen(src)+1) && (strcmp(dest, "8 miles") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "foo bar");
	strcpy(src, "baz");
	if ((ft_strlcat(dest, src, 7) == strlen(src)+7) && (strcmp(dest, "foo bar") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "foo bar");
	strcpy(src, "baz");
	if ((ft_strlcat(dest, src, 8) == strlen(src)+7) && (strcmp(dest, "foo bar") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "foo bar");
	strcpy(src, "baz");
	if ((ft_strlcat(dest, src, 9) == strlen(src)+7) && (strcmp(dest, "foo barb") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9:  ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "foo bar");
	strcpy(src, "baz");
	if ((ft_strlcat(dest, src, 11) == strlen(src)+7) && (strcmp(dest, "foo barbaz") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 10: ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "Rap game");
	strcpy(src, "baz"); // NULL entry
	if ((ft_strlcat(NULL, src, 42) == 0) && (strcmp(dest, "Rap game") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 11: ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "Rap game");
	strcpy(src, "baz"); // NULL entry
	if ((ft_strlcat(dest, NULL, 42) == 0) && (strcmp(dest, "Rap game") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 12: ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "foo"); // appending null at dest
	strcpy(src, "");
	if ((ft_strlcat(dest, src, 5) == strlen(src)+3) && (strcmp(dest, "foo") == 0))
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 13: ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "");
	strcpy(src, "fit your shoes");
	if ((ft_strlcat(dest, src, 2) == strlen(src)) && (strcmp(dest, "f") == 0))
		printf("OK\n"); // dsize > strlen(dest) + 1, therefore, we append dsize (dsize - 1) bytes into 'dest'
	else
		printf("KO\n");

	printf("Test 14: ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "");
	strcpy(src, "fit your shoes");
	if ((ft_strlcat(dest, src, 4) == strlen(src)) && (strcmp(dest, "fit") == 0))
		printf("OK\n"); // same
	else
		printf("KO\n");

	printf("Test 15: ");
	memset(src, 0, strlen(src));
	memset(dest, 0, strlen(dest));
	strcpy(dest, "");
	strcpy(src, "fit your shoes");
	if ((ft_strlcat(dest, src, 14) == strlen(src)) && (strcmp(dest, "fit your shoe") == 0))
		printf("OK\n"); // same
	else
		printf("KO\n");

	free(dest);
	dest = NULL;
	free(src);
	src = NULL;
}

void	test_ft_strnstr()
{
	printf("\nft_strnstr\n");

	char *s  = (char *)calloc(50, sizeof(char));

	printf("Test 1:  ");
	strcpy(s, "The quick brown fox jumps over the lazy dog");
	char *p = ft_strnstr(s, "brown", strlen(s));
	if (strcmp(p, s+10) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	memset(s, 0, strlen(s));
	strcpy(s, "The quick brown fox jumps over the lazy dog");
	p = ft_strnstr(s, "the lazy", strlen(s));
	if (strcmp(p, s+31) == 0) // returns a pointer to 'the lazy dog0'
		printf("OK\n");       //                       p
	else
		printf("KO\n");

	printf("Test 3:  ");
	memset(s, 0, strlen(s)); // finding substring at last position
	strcpy(s, "The quick brown fox jumps over the lazy dog");
	p = ft_strnstr(s, "g", strlen(s));
	if (strcmp(p, s+42) == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  ");
	memset(s, 0, strlen(s)); // Trying to find a substring after null
	strcpy(s, "The quick\0 brown fox jumps over the lazy dog");
	p = ft_strnstr(s, "f", strlen(s));
	if (!p)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");
	memset(s, 0, strlen(s)); // substring not found, return (null)
	strcpy(s, "foo bar baz");
	p = ft_strnstr(s, "F", strlen(s));
	if (!p)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	memset(s, 0, strlen(s)); // NULL entry
	strcpy(s, "foo bar baz");
	p = ft_strnstr(NULL, "bar", strlen(s));
	if (!p)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	memset(s, 0, strlen(s)); // NULL entry
	strcpy(s, "foo bar baz");
	p = ft_strnstr(s, NULL, strlen(s));
	if (!p)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	memset(s, 0, strlen(s)); 
	strcpy(s, "foo bar baz");
	p = ft_strnstr(s, "", strlen(s));
	if (strcmp(p, s) == 0)
		printf("OK\n"); // when strlen(little) == 0, we should just return a pointer to 'big'
	else
		printf("KO\n");

	printf("Test 9:  ");
	memset(s, 0, strlen(s)); 
	strcpy(s, "foo bar baz");
	p = ft_strnstr(s, "b", 3);
	if (!p)
		printf("OK\n"); // trying to find the substring "b" in the range of 3 bytes from 'big' address
	else
		printf("KO\n");

	printf("Test 10: ");
	memset(s, 0, strlen(s)); 
	strcpy(s, "foo bar baz");
	p = ft_strnstr(s+5, "b", strlen(s));
	if (strcmp(p, s+8) == 0)
		printf("OK\n"); // starting looking at s+5 offset, for 2nd 'b' of "baz"
	else
		printf("KO\n");

	printf("Test 11: ");
	memset(s, 0, strlen(s)); 
	strcpy(s, "foo bar baz");
	p = ft_strnstr(s, "b", 5);
	if (strcmp(p, s+4) == 0)
		printf("OK\n"); // find substring "b" till 5 bytes long
	else
		printf("KO\n");

	printf("Test 12: ");
	memset(s, 0, strlen(s)); 
	strcpy(s, "foo bar baz");
	p = ft_strnstr(s, "foo", 0);
	if (!p)
		printf("OK\n"); // reading 0 bytes should return (null)
	else
		printf("KO\n");

	printf("Test 13: ");
	memset(s, 0, strlen(s)); 
	strcpy(s, "underground");
	p = ft_strnstr(s, "XyZ", 100);
	if (!p)
		printf("OK\n");
	else
		printf("KO\n");

	free(s);
	s = NULL;
}

void	test_ft_atoi()
{
	printf("\nft_atoi\n");

	printf("Test 1:  ");
	if (ft_atoi("0") == 0) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	if (ft_atoi("-0") == 0) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");
	if (ft_atoi("+0") == 0) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  ");
	if (ft_atoi("") == 0)  
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");
	if (ft_atoi(NULL) == 0) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	if (ft_atoi("123") == 123) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	if (ft_atoi("-123") == -123) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	if (ft_atoi("+123") == 123) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9:  ");
	if (ft_atoi("++123") == 0) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 10: ");
	if (ft_atoi("+-123") == 0) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 11: ");
	if (ft_atoi("-+123") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 12: ");
	if (ft_atoi("--123") == 0) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 13: ");
	if (ft_atoi("42foo1234") == 42) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 14: ");
	if (ft_atoi("123_42") == 123) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 15: ");
	if (ft_atoi("-42,10") == -42)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 16: ");
	if (ft_atoi("F1") == 0) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 17: ");
	if (ft_atoi("\t123") == 123) 
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 18: ");
	if (ft_atoi(" 123") == 123)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 19: ");
	if (ft_atoi(" \t\t  \t123") == 123)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 20: ");
	if (ft_atoi("2147483647") == 2147483647)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 21: ");
	if (ft_atoi("2147483648") == -2147483648)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 22: ");
	if (ft_atoi("-2147483648") == -2147483648)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 22: ");
	if (ft_atoi("-2147483649") == 2147483647)
		printf("OK\n");
	else
		printf("KO\n");
	
}

void	test_ft_calloc()
{
	printf("\nft_calloc\n");

	int		*p_int = NULL;
	int		fail;

	printf("Test 1: ");
	// if 'nmemb' or size is  0, then calloc() returns either NULL, or a unique pointer value that can later be
	// successfully passed to free()
	p_int = (int *)ft_calloc(0, sizeof(int));
	if (!p_int || p_int[0] == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: ");
	p_int = (int *)ft_calloc(5, 0); 
	if (!p_int || p_int[0] == 0)
		printf("OK\n"); // size being 0, returns (null)
	else
		printf("KO\n");
	
	printf("Test 3: "); 
	fail = 0;
	p_int = (int *)ft_calloc(15, sizeof(int));
	for (int i=0; i < 15; ++i)
	{ // cant assign (10 * 4), isnt filling properly the 0's
		if (p_int[i] != 0)
		{
			printf("KO\n");
			fail = 1;
			break ;
		}
	}
	if (!fail)
		printf("OK\n");
	memset(p_int, 0, 10*sizeof(int));
	free(p_int);
	p_int = NULL;

	printf("Test 4: "); 
	fail = 0;
	p_int = (int *)ft_calloc(50, sizeof(int));
	for (int i=0; i < 50; ++i)
	{
		if (p_int[i] != 0)
		{
			printf("KO\n");
			fail = 1;
			break ;
		}
	}
	if (!fail)
		printf("OK\n");
	memset(p_int, 0, 50*sizeof(int));
	free(p_int);
	p_int = NULL;

	// PS: FM says that:
	// "if the multiplication of nmemb and size would result in integer overflow, then calloc() returns an error"
	// 	  ft_calloc(-1, 2) ==>  malloc(992394828217348912 * 2) = 💥💥 random access

	char	*p_char;
	printf("Test 5: "); 
	fail = 0;
	p_char = (char *)ft_calloc(20, sizeof(char));
	for (int i=0; i < 20; ++i)
	{
		if (p_char[i] != 0)	
		{
			printf("KO\n");
			fail = 1;
			break ;
		}
	}
	if (!fail)
		printf("OK\n");
	free(p_char);
	p_char = NULL;

	printf("Test 6: "); 
	fail = 0;
	p_char = (char *)ft_calloc(100, sizeof(char));
	for (int i=0; i < 100; ++i)
	{
		if (p_char[i] != 0)	
		{
			printf("KO\n");
			fail = 1;
			break ;
		}
	}
	if (!fail)
		printf("OK\n");
	free(p_char);
	p_char = NULL;
}

void	test_ft_strdup()
{
	printf("\nft_strdup\n");

    char    *p = NULL;

	printf("Test 1: ");
	p = ft_strdup(NULL);
	if (!p)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: ");
	char str[100] = "Lose yourself";
	p = ft_strdup(str);
	if (strcmp(p, str) == 0 && p != str)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3: ");
	strcpy(str, "Running \tfrom  change");
	p = ft_strdup(str);
	if (strcmp(str, p) == 0 && p != str)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4: ");
	strcpy(str, "");
	p = ft_strdup(str);
	if (strcmp(str, p) == 0 && p != str)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5: ");
	strcpy(str, "Leaving\0 heaven");
	p = ft_strdup(str);
	if (strcmp(str, p) == 0 && p != str)
		printf("OK\n");
	else
		printf("KO\n");

	free(p);
	p = NULL;
}

void	test_ft_substr()
{
	printf("\nft_substr\n");

	char	*orig = (char *)calloc(20, sizeof(char));
	char	*str;

	printf("Test 1: "); // getting first 3 bytes from string (big)
	strcpy(orig, "foobar baz");
	str = ft_substr(orig, 0, 3);
	if (strcmp(str, "foo") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: "); // getting 3 middle bytes from string (big)
	str = ft_substr(orig, 3, 3);
	if (strcmp(str, "bar") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3: "); // getting last 3 bytes from string (big)
	str = ft_substr(orig, 7, 3);
	if (strcmp(str, "baz") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4: "); // NULL entry to string (big)
	if (ft_substr(NULL, 0, 6) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5: "); // getting 6 bytes
	str = ft_substr(orig, 0, 6);
	if (strcmp(str, "foobar") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	
	printf("Test 6: "); // jumps over the null-char to get substr
	char orig2[] = "Say \0goodbye";
	str = ft_substr(orig2, 5, 4);
	if (strcmp(str, "good") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7: "); // getting 1st char only
	memset(orig, 0, strlen(orig));
	strcpy(orig, "Sing for the moment");
	str = ft_substr(orig, 0, 1);
	if (strcmp(str, "S") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8: "); // getting last char only
	str = ft_substr(orig, 18, 1);
	if (strcmp(str, "t") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9: "); // a -ve offset would segfault 
	if (ft_substr(orig, -1, 3) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	// printf("Test 10: ");
	// str = ft_substr(orig, 0, -1); // -ve len is going to segfault as well
	// if (strcmp(str, "Sing for the moment") == 0)
	// 	printf("OK\n");
	// else
	// 	printf("KO\n");

	free(orig);
	orig = NULL;
}

void	test_ft_strjoin()
{
	printf("\nft_strjoin\n");

	char	*s1 = (char *)calloc(20, sizeof(char));
	char	*s2 = (char *)calloc(20, sizeof(char));
	char	*p;

	printf("Test 1: ");
	strcpy(s1, "Mocking");
	strcpy(s2, "Bird");
	p = ft_strjoin(s1, s2);
	if (strcmp(p, "MockingBird") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: ");
	memset(s1, 0, strlen(s1));
	memset(s2, 0, strlen(s2));
	strcpy(s1, "John");
	strcpy(s2, " Doe");
	p = ft_strjoin(s1, s2);
	if (strcmp(p, "John Doe") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3: ");
	memset(s1, 0, strlen(s1));
	memset(s2, 0, strlen(s2));
	strcpy(s1, "foo");
	strcpy(s2, " bar");
	p = ft_strjoin(ft_strjoin(s1, s2), " baz!");
	if (strcmp(p, "foo bar baz!") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4: ");
	memset(s1, 0, strlen(s1));
	memset(s2, 0, strlen(s2));
	strcpy(s1, "Thousand ");
	strcpy(s2, "lies");
	if (ft_strjoin(s1, NULL) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5: ");
	if (ft_strjoin(NULL, s2) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6: ");
	memset(s1, 0, strlen(s1));
	memset(s2, 0, strlen(s2));
	strcpy(s1, "Savior");
	strcpy(s2, "");
	p = ft_strjoin(s1, s2);
	if (strcmp(p, "Savior") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7: ");
	memset(s1, 0, strlen(s1));
	memset(s2, 0, strlen(s2));
	strcpy(s1, "");
	strcpy(s2, "Savior");
	p = ft_strjoin(s1, s2);
	if (strcmp(p, "Savior") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8: ");
	memset(s1, 0, strlen(s1));
	memset(s2, 0, strlen(s2));
	strcpy(s1, "");
	strcpy(s2, "");
	p = ft_strjoin(s1, s2);
	if (strcmp(p, "") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	free(s1);
	s1 = NULL;
	free(s2);
	s2 = NULL;
}

void	test_ft_strtrim()
{
	printf("\nt_strtrim\n");

	char	*str = (char *)calloc(30, sizeof(char));
	char	*p;

	printf("Test 1:  "); // Should remove "fofo" from the beginning and "fo" (end str)
	strcpy(str, "fofosfo");
	p = ft_strtrim(str, "fo");
	if (strcmp(p, "s") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");  // inverting "fo" -> "of"
	p = ft_strtrim(str, "of");
	if (strcmp(p, "s") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");  // another string
	memset(str, 0, strlen(str));
	strcpy(str, "foo bar baz");
	p = ft_strtrim(str, "fz");
	if (strcmp(p, "oo bar ba") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  "); 
	p = ft_strtrim(str, " fzo");
	if (strcmp(p, "bar ba") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");  // unavaiable chars shouldn't trim
	strcpy(str, "foo bar baz");
	p = ft_strtrim(str, "123");
	if (strcmp(p, "foo bar baz") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");  // trimming whitespaces from string
	memset(str, 0, strlen(str));
	strcpy(str, "\t  \t My darling \t\t\n");
	p = ft_strtrim(str, "\n\t ");
	if (strcmp(p, "My darling") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  "); // trimming 1st/last bytes
	memset(str, 0, strlen(str));
	strcpy(str, "foo bar bazf");
	p = ft_strtrim(str, "fz");
	if (strcmp(p, "oo bar ba") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	memset(str, 0, strlen(str));
	strcpy(str, "eminem");
	p = ft_strtrim(str, "e");
	if (strcmp(p, "minem") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9:  "); // NULL entry
	memset(str, 0, strlen(str));
	strcpy(str, "foo bar");
	if (ft_strtrim(NULL, "f") == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 10: "); // same
	if (ft_strtrim(str, NULL) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 11: ");
	memset(str, 0, strlen(str));
	strcpy(str, "zzzzzzzzzzzWzAKEzzzUpzPzzz");
	p = ft_strtrim(str, "zP");
	if (strcmp(p, "WzAKEzzzUp") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 12: ");
	memset(str, 0, strlen(str));
	strcpy(str, "fffffz");
	p = ft_strtrim(str, "f");
	if (strcmp(p, "z") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 13: ");
	memset(str, 0, strlen(str));
	strcpy(str, "zfffff");
	p = ft_strtrim(str, "f");
	if (strcmp(p, "z") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 14: "); // trimming all string
	memset(str, 0, strlen(str));
	strcpy(str, "xxz");
	p = ft_strtrim(str, "xz");
	if (strcmp(p, "") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	free(str);
	str = NULL;
}

void	test_ft_split()
{
	printf("\nft_split\n");

	char	**tab;
	int		fail;

	printf("Test 1:  ");
	char	*A[3] = {"foo", "bar", 0};
	fail = 0;
	tab = ft_split("foo bar", ' ');
	for (int i=0; tab[i]; ++i)
		if (strcmp(tab[i], A[i]) != 0)
			fail = 1;
	if (!fail)
		printf("OK\n");
	else
		printf("KO\n");
	free(tab);
	tab = NULL;

	printf("Test 2:  ");
	char	*B[4] = {"foo", "bar", "baz", 0};
	fail = 0;
	tab = ft_split("foo bar baz", ' ');
	for (int i=0; tab[i]; ++i)
		if (strcmp(tab[i], B[i]) != 0)
			fail = 1;
	if (!fail)
		printf("OK\n");
	else
		printf("KO\n");
	free(tab);
	tab = NULL;

	printf("Test 3:  ");
	char	*C[4] = {"foo", "bar", "baz", 0};
	fail = 0;
	tab = ft_split("foo.bar.baz", '.');
	for (int i=0; tab[i]; ++i)
		if (strcmp(tab[i], C[i]) != 0)
			fail = 1;
	if (!fail)
		printf("OK\n");
	else
		printf("KO\n");
	free(tab);
	tab = NULL;

	printf("Test 4:  ");
	char	*D[3] = {"foo", "barbaz", 0};
	fail = 0;
	tab = ft_split(".......foo.barbaz", '.');
	for (int i=0; tab[i]; ++i)
		if (strcmp(tab[i], D[i]) != 0)
			fail = 1;
	if (!fail)
		printf("OK\n");
	else
		printf("KO\n");
	free(tab);
	tab = NULL;

	printf("Test 5:  ");
	char	*E[3] = {"foobar", "baz", 0};
	fail = 0;
	tab = ft_split("foobar.baz.............", '.');
	for (int i=0; tab[i]; ++i)
		if (strcmp(tab[i], E[i]) != 0)
			fail = 1;
	if (!fail)
		printf("OK\n");
	else
		printf("KO\n");
	free(tab);
	tab = NULL;

	printf("Test 6:  ");
	char	*F[3] = {"foo", "bar", 0};
	fail = 0;
	tab = ft_split("....foo.bar.............", '.');
	for (int i=0; tab[i]; ++i)
		if (strcmp(tab[i], F[i]) != 0)
			fail = 1;
	if (!fail)
		printf("OK\n");
	else
		printf("KO\n");
	free(tab);
	tab = NULL;

	printf("Test 7:  ");
	char	*G[3] = {"foo", "bar", 0};
	fail = 0;
	tab = ft_split("....foo.........bar.......", '.');
	for (int i=0; tab[i]; ++i)
		if (strcmp(tab[i], G[i]) != 0)
			fail = 1;
	if (!fail)
		printf("OK\n");
	else
		printf("KO\n");
	free(tab);
	tab = NULL;

	printf("Test 8:  ");
	char	*H[10] = {"the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog", 0};
	fail = 0;
	tab = ft_split("_the___quick_brown_fox_jumps____over_the___________lazy_dog____________", '_');
	for (int i=0; tab[i]; ++i)
		if (strcmp(tab[i], H[i]) != 0)
			fail = 1;
	if (!fail)
		printf("OK\n");
	else
		printf("KO\n");
	free(tab);
	tab = NULL;

	printf("Test 9:  ");
	fail = 0;
	if (ft_split(NULL, '.') == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 10: ");
	char	*I[6] = {"f", "o", "o ba", "r", " b az", 0};
	fail = 0;
	tab = ft_split("f.o.o ba.r. b az", '.');
	for (int i=0; tab[i]; ++i)
		if (strcmp(tab[i], I[i]) != 0)
			fail = 1;
	if (!fail)
		printf("OK\n");
	else
		printf("KO\n");
	free(tab);
	tab = NULL;
}

void	test_ft_itoa()
{
	printf("\nft_itoa\n");

	char	*p = (char *)calloc(20, sizeof(char));

	printf("Test 1:  ");
	p = ft_itoa(1);
	if (strcmp(p, "1") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2:  ");
	p = ft_itoa(0);
	if (strcmp(p, "0") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3:  ");
	p = ft_itoa(1234);
	if (strcmp(p, "1234") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4:  ");
	p = ft_itoa(37829723);
	if (strcmp(p, "37829723") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5:  ");
	p = ft_itoa(-1);
	if (strcmp(p, "-1") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6:  ");
	p = ft_itoa(-123);
	if (strcmp(p, "-123") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7:  ");
	p = ft_itoa(2147483647);
	if (strcmp(p, "2147483647") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8:  ");
	p = ft_itoa(-2147483648);
	if (strcmp(p, "-2147483648") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9:  ");
	p = ft_itoa(-0);
	if (strcmp(p, "0") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 10: ");
	p = ft_itoa(+1234);
	if (strcmp(p, "1234") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 11: ");
	p = ft_itoa(-85429752);
	if (strcmp(p, "-85429752") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 12: ");
	p = ft_itoa(0xA);
	if (strcmp(p, "10") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 13: ");
	p = ft_itoa(0b00010001);
	if (strcmp(p, "17") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	free(p);
	p = NULL;
}

// Test functions for ft_strmapi
char	caesar_shift1(unsigned int n, char ch)
{
	n = 1;
	return (n + ch);
}
char	caesar_shift2(unsigned int n, char ch)
{
	return (n + ch);
}
void	test_ft_strmapi()
{
	printf("\nft_strmapi\n");

	typedef char (*t_fn)(unsigned int, char);
	t_fn	f1 = caesar_shift1;
	t_fn	f2 = caesar_shift2;

	char	*p = (char *)calloc(20, sizeof(char));

	printf("Test 1: ");
	p = ft_strmapi("abc", f1);
	if (strcmp(p, "bcd") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: ");
	p = ft_strmapi("abc", f2);
	if (strcmp(p, "ace") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3: ");
	p = ft_strmapi("You are way to late", f1);
	if (strcmp(p, "Zpv!bsf!xbz!up!mbuf") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4: ");
	p = ft_strmapi("", f2);
	if (strcmp(p, "") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5: ");
	p = ft_strmapi("", f1);
	if (strcmp(p, "") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6: ");
	if (ft_strmapi(NULL, f1) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 7: ");
	if (ft_strmapi("abc", NULL) == NULL)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 8: ");
	p = ft_strmapi("1234", f2);
	if (strcmp(p, "1357") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 9: ");
	p = ft_strmapi("-1234", f2);
	if (strcmp(p, "-2468") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	free(p);
	p = NULL;
}

// Test functions for ft_striteri
void	inc(unsigned int i, char *s) { *s += i; }
void	dec(unsigned int i, char *s) { *s -= i; }
void	test_ft_striteri()
{
	printf("\nft_striteri\n");

	typedef void	(*t_fn)(unsigned int, char *);
	t_fn	f1 = inc;
	t_fn	f2 = dec;

	char	*str = (char *)calloc(30, sizeof(char));

	printf("Test 1: ");
	strcpy(str, "0000000000");
	ft_striteri(str, f1);
	if(strcmp(str, "0123456789") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 2: ");
	memset(str, 0, strlen(str));
	strcpy(str, "0123456789");
	ft_striteri(str, f2);
	if(strcmp(str, "0000000000") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 3: ");
	memset(str, 0, strlen(str));
	strcpy(str, "0");
	ft_striteri(str, f1);
	if(strcmp(str, "0") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 4: ");
	memset(str, 0, strlen(str));
	strcpy(str, "0");
	ft_striteri(str, f2);
	if(strcmp(str, "0") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 5: ");
	memset(str, 0, strlen(str));
	strcpy(str, "outcast");
	ft_striteri(str, f1);
	if(strcmp(str, "ovvfexz") == 0)
		printf("OK\n");
	else
		printf("KO\n");

	printf("Test 6: ");
	memset(str, 0, strlen(str));
	strcpy(str, "outcast");
	ft_striteri(str, f2);
	if(strcmp(str, "otr`]nn") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	free(str);
	str = NULL;

	printf("Test 7: ");
	ft_striteri(NULL, f2);
	printf("OK\n"); // or segfault

	printf("Test 8: ");
	ft_striteri("Fly away with me", NULL);
	printf("OK\n"); // or segfault
}

void	test_ft_putchar_fd()
{
	printf("\nft_putchar_fd\n");

	int		fd;
	char	*buff = (char *)calloc(11, sizeof(char));
	char	*str = (char *)calloc(11, sizeof(char));

	printf("Test 1: ");
	fd = open("test_putchar", O_RDWR | O_CREAT);
	strcpy(str, "4");
	ft_putchar_fd('4', fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 2);
	if(strcmp(buff, "4") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putchar");
	memset(buff, 0, strlen(buff));
	memset(str, 0, strlen(str));

	printf("Test 2: ");
	fd = open("test_putchar", O_RDWR | O_CREAT);
	strcpy(str, "F");
	ft_putchar_fd('F', fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 2);
	if(strcmp(buff, "F") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putchar");
	memset(buff, 0, strlen(buff));
	memset(str, 0, strlen(str));

	printf("Test 3: ");
	fd = open("test_putchar", O_RDWR | O_CREAT);
	strcpy(str, "\t");
	ft_putchar_fd('\t', fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 2);
	if(strcmp(buff, "\t") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putchar");
	memset(buff, 0, strlen(buff));
	memset(str, 0, strlen(str));

	printf("Test 4: ");
	ft_putchar_fd('F', -1);
	printf("OK\n");

	printf("Test 5: ");
	ft_putchar_fd(0, fd);
	printf("OK\n");

	free(buff);
	buff = NULL;
	free(str);
	str = NULL;
}

void	test_ft_putstr_fd()
{
	printf("\nft_putstr_fd\n");

	int		fd;
	char	*buff = (char *)calloc(11, sizeof(char));
	char	*str = (char *)calloc(11, sizeof(char));

	printf("Test 1: ");
	fd = open("test_putstr", O_RDWR | O_CREAT);
	strcpy(str, "Light");
	ft_putstr_fd(str, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 6);
	if(strcmp(buff, "Light") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putstr");
	memset(buff, 0, strlen(buff));
	memset(str, 0, strlen(str));

	printf("Test 2: ");
	fd = open("test_putstr", O_RDWR | O_CREAT);
	strcpy(str, "Lonely");
	ft_putstr_fd(str, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 7);
	if(strcmp(buff, "Lonely") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putstr");
	memset(buff, 0, strlen(buff));
	memset(str, 0, strlen(str));

	printf("Test 3: ");
	fd = open("test_putstr", O_RDWR | O_CREAT);
	strcpy(str, "intro_III");
	ft_putstr_fd(str, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 10);
	if(strcmp(buff, "intro_III") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putstr");
	memset(buff, 0, strlen(buff));
	memset(str, 0, strlen(str));

	printf("Test 4: ");
	ft_putstr_fd(NULL, fd);
	printf("OK\n");

	printf("Test 5: ");
	ft_putstr_fd(str, -1);
	printf("OK\n");

	free(buff);
	buff = NULL;
	free(str);
	str = NULL;
}

void	test_ft_putendl_fd()
{
	printf("\nft_putendl_fd\n");

	int		fd;
	char	*buff = (char *)calloc(30, sizeof(char));
	char	*str = (char *)calloc(30, sizeof(char));

	printf("Test 1: ");
	fd = open("test_putendl", O_RDWR | O_CREAT);
	strcpy(str, "Light");
	ft_putendl_fd(str, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 8);
	if(strcmp(buff, "Light\n") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putendl");
	memset(buff, 0, strlen(buff));
	memset(str, 0, strlen(str));

	printf("Test 2: ");
	fd = open("test_putendl", O_RDWR | O_CREAT);
	strcpy(str, "42");
	ft_putendl_fd(str, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 4);
	if(strcmp(buff, "42\n") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putendl");
	memset(buff, 0, strlen(buff));
	memset(str, 0, strlen(str));

	printf("Test 3: ");
	fd = open("test_putendl", O_RDWR | O_CREAT);
	strcpy(str, "Leave_me_alone");
	ft_putendl_fd(str, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, strlen(str)+2);
	if(strcmp(buff, "Leave_me_alone\n") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putendl");
	memset(buff, 0, strlen(buff));
	memset(str, 0, strlen(str));

	printf("Test 4: "); // NULL entry
	ft_putendl_fd(NULL, fd);
	printf("OK\n");
	memset(buff, 0, strlen(buff));
	memset(str, 0, strlen(str));

	printf("Test 5: "); // -ve fd
	ft_putendl_fd(str, -1);
	printf("OK\n");
	memset(buff, 0, strlen(buff));
	memset(str, 0, strlen(str));

	free(buff);
	buff = NULL;
	free(str);
	str = NULL;
}

void	test_ft_putnbr_fd()
{
	printf("\nft_putnbr_fd\n");

	int		fd;
	char	*buff = (char *)calloc(11, sizeof(char));

	fd = open("test_putnbr", O_RDWR | O_CREAT);

	printf("Test 1: ");
	ft_putnbr_fd(4, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 2);
	if(strcmp(buff, "4") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putnbr");
	memset(buff, 0, strlen(buff));

	printf("Test 2: ");
	fd = open("test_putnbr", O_RDWR | O_CREAT);
	ft_putnbr_fd(1337, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 5);
	if(strcmp(buff, "1337") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putnbr");
	memset(buff, 0, strlen(buff));

	printf("Test 3: ");
	fd = open("test_putnbr", O_RDWR | O_CREAT);
	ft_putnbr_fd(0, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 2);
	if(strcmp(buff, "0") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putnbr");
	memset(buff, 0, strlen(buff));

	printf("Test 4: ");
	fd = open("test_putnbr", O_RDWR | O_CREAT);
	ft_putnbr_fd(-123, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 5);
	if(strcmp(buff, "-123") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putnbr");
	memset(buff, 0, strlen(buff));

	printf("Test 5: ");
	fd = open("test_putnbr", O_RDWR | O_CREAT);
	ft_putnbr_fd(2147483647, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 11);
	if(strcmp(buff, "2147483647") == 0)
		printf("OK\n");
	else
		printf("KO\n");
	unlink("./test_putnbr");
	memset(buff, 0, strlen(buff));

	printf("Test 6: ");
	fd = open("test_putnbr", O_RDWR | O_CREAT);
	ft_putnbr_fd(-2147483648, fd);
	lseek(fd, SEEK_SET, 0);
	read(fd, buff, 12);
	if(strcmp(buff, "-2147483648") == 0)
		printf("\x1b[38:5:10mOK\x1b[0m\n");
	else
		printf("KO\n");
	unlink("./test_putnbr");
	memset(buff, 0, strlen(buff));

	printf("Test 7: "); // -ve fd
	ft_putnbr_fd(42, -1);
	printf("OK\n");

	free(buff);
	buff = NULL;
}

int		main()
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memset();
	test_ft_bzero();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_strnstr();
	test_ft_atoi();
	test_ft_calloc();
	test_ft_strdup();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();




	return (0);
}
