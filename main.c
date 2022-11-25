/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:59:30 by msariasl          #+#    #+#             */
/*   Updated: 2022/11/25 22:34:13 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

int test_atoi(int *s) // ATOI
{
    int i = 0;
    char *c[] = {"test1", "0", "-0", "123+123", "-123123", "23400.1", "\01213", "1test", "21474483649", "-21474483649"};

    if (ft_atoi(c[0]) == 0)
        i++;
    if (ft_atoi(c[1]) == 0)
        i++;
    if (ft_atoi(c[2]) == 0)
        i++;
    if (ft_atoi(c[3]) == 123)
        i++;
    if (ft_atoi(c[4]) == -123123) // 5
        i++;

    if (ft_atoi(c[5]) == 23400)
        i++;
    if (ft_atoi(c[6]) == 13)
        i++;
    if (ft_atoi(c[7]) == 1)
        i++;
    if (ft_atoi(c[8]) == -1)
        i++;
    if (ft_atoi(c[9]) == 0) // 10
        i++;

    if (i == 10)
        (*s)++;
    return i;
}

int test_itoa(int *s) // ITOA
{
    int i = 0;

    if (strcmp(ft_itoa(12), "12") == 0)
        i++;
    if (strcmp(ft_itoa(-12), "-12") == 0)
        i++;
    if (strcmp(ft_itoa(1), "1") == 0)
        i++;
    if (strcmp(ft_itoa(0), "0") == 0)
        i++;
    if (strcmp(ft_itoa(-0), "0") == 0) // 5
        i++;
    if (strcmp(ft_itoa(-1), "-1") == 0)
        i++;
    if (strcmp(ft_itoa(-234234), "-234234") == 0)
        i++;
    if (strcmp(ft_itoa(999999999), "999999999") == 0)
        i++;
    if (strcmp(ft_itoa(-99999999), "-99999999") == 0) // 9
        i++;

    if (i == 9)
        (*s)++;
    return i;
}

int test_isdigit(int *s) // ISDIGIT
{
    int i = 0;

    if (ft_isdigit(0) == 0)
        i++;
    if (ft_isdigit(0) == 0)
        i++;
    if (ft_isdigit(-0) == 0)
        i++;
    if (ft_isdigit(1) == 0)
        i++;
    if (ft_isdigit(-1) == 0)
        i++;
    if (ft_isdigit(0772) == 0)
        i++;
    if (ft_isdigit('\0') == 0)
        i++;
    if (ft_isdigit('\t') == 0)
        i++;
    if (ft_isdigit(999999999) == 0)
        i++;
    if (ft_isdigit(-999999999) == 0)
        i++;
    if (ft_isdigit('0') == 0)
        i++;

    if (i == 10)
        (*s)++;
    return i;
}

int test_isalpha(int *s) // ISALPHA
{
    int i = 0;

    if (ft_isalpha('A') != 0)
        i++;
    if (ft_isalpha('a') != 0)
        i++;
    if (ft_isalpha('Z') != 0)
        i++;
    if (ft_isalpha('z') != 0)
        i++;
    if (ft_isalpha('1') == 0)
        i++;
    if (ft_isalpha('0') == 0)
        i++;
    if (ft_isalpha('\n') == 0)
        i++;
    if (ft_isalpha('\t') == 0)
        i++;

    if (i == 8)
        (*s)++;
    return i;
}

int test_isalnum(int *s) // ISALNUM
{
    int i = 0;

    if (ft_isalnum('a') != 0)
        i++;
    if (ft_isalnum('A') != 0)
        i++;
    if (ft_isalnum('z') != 0)
        i++;
    if (ft_isalnum('Z') != 0)
        i++;
    if (ft_isalnum('0') != 0)
        i++;
    if (ft_isalnum('9') != 0)
        i++;
    if (ft_isalnum(0) == 0)
        i++;
    if (ft_isalnum(543) == 0)
        i++;
    if (ft_isalnum('\n') == 0)
        i++;
    if (ft_isalnum('\t') == 0)
        i++;

    if (i == 10)
        (*s)++;
    return i;
}

int test_isascii(int *s) // ISASCII
{
    int i = 0;

    if (ft_isascii(0) == 1)
        i++;
    if (ft_isascii(0177) == 1)
        i++;
    if (ft_isascii(56) == 1)
        i++;
    if (ft_isascii(128) == 1)
        i++;
    if (ft_isascii(546) == 0)
        i++;
    if (ft_isascii('1') == 1)
        i++;
    if (ft_isascii('9') == 1)
        i++;
    if (ft_isascii('a') == 1)
        i++;
    if (ft_isascii('A') == 1)
        i++;
    if (ft_isascii('-') == 1)
        i++;
    if (ft_isascii('/') == 1)
        i++;
    if (ft_isascii(-1) == 0)
        i++;

    if (i == 11)
        (*s)++;
    return i;
}

int test_isprint(int *s) // ISASCII
{
    int i = 0;

    if (ft_isprint(040) != 0)
        i++;
    if (ft_isprint(075) != 0)
        i++;
    if (ft_isprint(176) == 0)
        i++;
    if (ft_isprint(0176) != 0)
        i++;
    if (ft_isprint(177) == 0)
        i++;
    if (ft_isprint(-1) == 0)
        i++;
    if (ft_isprint(0) == 0)
        i++;
    if (ft_isprint(1) == 0)
        i++;
    if (ft_isprint(54) != 0)
        i++;

    if (i == 9)
        (*s)++;
    return i;
}

int test_strlen(int *s) // STRLEN
{
    int i = 0;

    if (ft_strlen("asadsadas") == 9)
        i++;
    if (ft_strlen("ZZZZZZ") == 6)
        i++;
    if (ft_strlen("Aaaaa AAAAAAA aaaa") == 18)
        i++;
    if (ft_strlen("aaaa\0aaaaa") == 4)
        i++;
    if (ft_strlen("\0 \n") == 0)
        i++;
    if (ft_strlen("") == 0)
        i++;
    if (ft_strlen("  ") == 2)
        i++;

    if (i == 7)
        (*s)++;
    return i;
}

int test_memset(int *s) // MEMSET
{
    int i = 0;

    char str1[] = "aaaa";
    if (strcmp(ft_memset(str1, 'X', 2), "XXaa") == 0)
        i++;

    char str2[] = " ";
    if (strcmp(ft_memset(str2, 'X', 2), memset(str2, 'X', 2)) == 0)
        i++;

    char str3[] = " ";
    if (strcmp(ft_memset(str3, 0, 2), memset(str3, 0, 2)) == 0)
        i++;

    char str4[] = "\t\t\t\t \t \t \t\n \n\n\n\n\0\1\2";
    if (strcmp(ft_memset(str4, 0176, 20), memset(str4, 0176, 20)) == 0)
        i++;

    char str5[] = "";
    if (strcmp(ft_memset(str5, 0176, 0), "") == 0)
        i++;

    if (i == 5)
        (*s)++;
    return i;
}

int test_bzero(int *s) // BZERO
{
    int i = 0;

    char str1[] = "";
    ft_bzero(str1, 4);
    if (strcmp(str1, "") == 0)
        i++;

    char str2[] = " aaa \0 0";
    ft_bzero(str2, 0);
    if (strcmp(str2, " aaa \0 0") == 0)
        i++;

    char str3[] = "\0\0\0\0 XxX";
    ft_bzero(str3, 2);
    if (strcmp(str3, "") == 0)
        i++;

    if (i == 3)
        (*s)++;
    return i;
}

int test_memcpy(int *s) // MEMCPY
{
    int i = 0;

    char des1[] = "    ";
    char src1[] = "aaaa";
    if (strcmp(ft_memcpy(des1, src1, 2), "aa  ") == 0)
        i++;

    char des2[] = " ";
    char src2[] = "\0\0\0";
    if (strcmp(ft_memcpy(des2, src2, 10), "") == 0)
        i++;

    char des3[] = "       a";
    char src3[] = " ";
    if (strcmp(ft_memcpy(des3, src3, 2), " ") == 0)
        i++;

    char des4[] = "       a";
    char src4[] = " ";
    if (strcmp(ft_memcpy(des4, src4, 1), "       a") == 0)
        i++;

    if (i == 3)
        (*s)++;
    return i;
}

int test_memmove(int *s) // MEMMOVE (SAME AS MEMCPY)
{
    int i = 0;
  
   char des1[] = "    ";
    char src1[] = "aaaa";
    if (strcmp(ft_memmove(des1, src1, 2), "aa  ") == 0)
        i++;

    char des2[] = " ";
    char src2[] = "\0\0\0";
    if (strcmp(ft_memmove(des2, src2, 10), "") == 0)
        i++;

    char des3[] = "       a";
    char src3[] = " ";
    if (strcmp(ft_memmove(des3, src3, 2), " ") == 0)
        i++;

    char des4[] = "       a";
    char src4[] = " ";
    if (strcmp(ft_memmove(des4, src4, 1), "       a") == 0)
        i++;

    if (i == 3)
        (*s)++;
    return i;
}

int test_strcpy(int *s) // STRLCPY
{
    int i = 0;
  
   

    if (i == 3)
        (*s)++;
    return i;
}



void TESTAREA() // CASUAL AREA
{
    char des1[] = "a";
    char src1[] = "bb";

    printf("sonuc:%s",ft_memmove(des1, src1, 2));
}

void HR()
{
    printf("\n\n#################################\n\n");
}

int main(void)
{
    int s = 0;
    HR();
    printf("1.  Atoi başarılı test sayısı: %d/10", test_atoi(&s));
    HR();
    printf("2.  Itoa başarılı test sayısı: %d/9", test_itoa(&s));
    HR();
    printf("3.  IsDigit başarılı test sayısı: %d/10", test_isdigit(&s));
    HR();
    printf("4.  IsAlpha başarılı test sayısı: %d/8", test_isalpha(&s));
    HR();
    printf("5.  IsAlnum başarılı test sayısı: %d/10", test_isalnum(&s));
    HR();
    printf("6.  IsAscii başarılı test sayısı: %d/11", test_isascii(&s));
    HR();
    printf("7.  IsPrint başarılı test sayısı: %d/9", test_isprint(&s));
    HR();
    printf("8.  Strlen başarılı test sayısı: %d/7", test_strlen(&s));
    HR();
    printf("9.  Memset başarılı test sayısı: %d/5", test_memset(&s));
    HR();
    printf("10.  Bzero başarılı test sayısı: %d/3", test_bzero(&s));
    HR();
    printf("11.  MemCPY başarılı test sayısı: %d/4", test_memcpy(&s));
    HR();
    printf("12.  MemMOVE başarılı test sayısı: %d/4", test_memmove(&s));
    HR();
    printf("13.  StrlCPY başarılı test sayısı: %d/4", test_strcpy(&s));
    HR();

    printf("TOPLAM BAŞARILI FONKSIYON SAYISI: %d/2", s);
    HR();
    TESTAREA();
    return 0;
}