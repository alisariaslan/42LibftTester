/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:59:30 by msariasl          #+#    #+#             */
/*   Updated: 2022/11/26 02:55:03 by msariasl         ###   ########.fr       */
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

    if (i == 4)
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

    if (i == 4)
        (*s)++;
    return i;
}

int test_strlcpy(int *s) // STRLCPY
{
    int i = 0;

    char des1[] = "a";
    char src1[] = "bb";
    if (ft_strlcpy(des1, src1, 2) == 2)
        i++;

    char des2[] = "aaa";
    char src2[] = "bb";
    if (ft_strlcpy(des2, src2, 0) == 2)
        i++;

    char des3[] = "aaa";
    char src3[] = "bb";
    if (ft_strlcpy(des3, src3, 99) == 2)
        i++;

    char des4[] = "aaa";
    char src4[] = "\0b";
    if (ft_strlcpy(des4, src4, 1) == 0)
        i++;

    if (i == 4)
        (*s)++;
    return i;
}

int test_strlcat(int *s) // STRLCAT
{
    int i = 0;

    char des1[] = "aaa";
    char src1[] = "bb";
    if (ft_strlcat(des1, src1, 5) == 5)
        i++;

    char des2[] = "aaa";
    char src2[] = "bb";
    if (ft_strlcat(des2, src2, 0) == 2)
        i++;

    char des3[] = "";
    char src3[] = "";
    if (ft_strlcat(des3, src3, 10000000) == 0)
        i++;

    if (i == 3)
        (*s)++;
    return i;
}

int test_toupper(int *s) // TOUPPER
{
    int i = 0;

    if (ft_toupper('a') == 'A')
        i++;
    if (ft_toupper('z') == 'Z')
        i++;
    if (ft_toupper('0') == '0')
        i++;
    if (ft_toupper(' ') == ' ')
        i++;

    if (i == 4)
        (*s)++;
    return i;
}

int test_tolower(int *s) // TOLOWER
{
    int i = 0;

    if (ft_tolower('A') == 'a')
        i++;
    if (ft_tolower('Z') == 'z')
        i++;
    if (ft_tolower('0') == '0')
        i++;
    if (ft_tolower(' ') == ' ')
        i++;

    if (i == 4)
        (*s)++;
    return i;
}

int test_strchr(int *s) // STRCHR
{
    int i = 0;
    const char *str = "-> Yeni gelenlerin MOULINETTE 'den dayak yemesini istemiyorsan gel bu projeyi geliştirelim <-\0 Ne dersin?";
    const char *str_empty = "";
    const char *str_name = "Ali SARIASLAN";

    if (strcmp(ft_strchr(str, '\''), "'den dayak yemesini istemiyorsan gel bu projeyi geliştirelim <-") == 0)
        i++;
    if (strcmp(ft_strchr(str, '\0'), "") == 0)
        i++;
    if (strcmp(ft_strchr(str_empty, '\0'), "") == 0)
        i++;
    if (strcmp(ft_strchr(str_name, 'A'), "Ali SARIASLAN") == 0)
        i++;
    if (strcmp(ft_strchr(str_name, 'N'), "N") == 0)
        i++;

    if (i == 5)
        (*s)++;
    return i;
}

int test_strrchr(int *s) // strRchr
{
    int i = 0;
    const char *str = "-> Yeni gelenlerin MOULINETTE 'den dayak yemesini istemiyorsan gel bu projeyi geliştirelim <-\0 Ne dersin?";
    const char *str_empty = "";
    const char *str_name = "Ali SARIASLAN";

    if (strcmp(ft_strrchr(str, '\''), "'den dayak yemesini istemiyorsan gel bu projeyi geliştirelim <-") == 0)
        i++;
    if (strcmp(ft_strrchr(str, '\0'), "") == 0)
        i++;
    if (strcmp(ft_strrchr(str_empty, '\0'), "") == 0)
        i++;
    if (strcmp(ft_strrchr(str_name, 'A'), "AN") == 0)
        i++;
    if (strcmp(ft_strrchr(str_name, 'N'), "N") == 0)
        i++;

    if (i == 5)
        (*s)++;
    return i;
}

int test_strncmp(int *s) // strNcmp
{
    int i = 0;

    if (ft_strncmp("aa", "aa", 2) == 0)
        i++;
    if (ft_strncmp("aa", "aA", 2) == 32)
        i++;
    if (ft_strncmp("aa", "aA", 5) == 32)
        i++;
    if (ft_strncmp("aa", "A", 0) == 0)
        i++;
    if (ft_strncmp("aa", "\0", 2) == 97)
        i++;
    if (ft_strncmp("aA", "aa", 2) == -32)
        i++;

    if (i == 6)
        (*s)++;
    return i;
}

int test_memchr(int *s) // memCHR
{
    int i = 0;

    const char *str = "-> Yeni gelenlerin MOULINETTE 'den dayak yemesini istemiyorsan gel bu projeyi geliştirelim <-\0 Ne dersin?";
    const char *str_empty = "";
    const char *str_name = "Ali SARIASLAN";

    if (strcmp(ft_memchr(str, '\'', 99), "'den dayak yemesini istemiyorsan gel bu projeyi geliştirelim <-") == 0)
        i++;
    if (strcmp(ft_memchr(str, '\0', 99), "") == 0)
        i++;
    if (strcmp(ft_memchr(str_empty, '\0', 99), "") == 0)
        i++;
    if (strcmp(ft_memchr(str_name, 'A', 99), "Ali SARIASLAN") == 0)
        i++;
    if (strcmp(ft_memchr(str_name, 'N', 99), "N") == 0) // FIRST 5 SAME AS STRCHR
        i++;
    if (strcmp(ft_memchr(str_name, 'S', 5), "SARIASLAN") == 0)
        i++;
    if (strcmp(ft_memchr(str_name, 'S', -1), "SARIASLAN") == 0)
        i++;

    if (i == 7)
        (*s)++;
    return i;
}

int test_memcmp(int *s) // memCMP
{
    int i = 0;

    if (ft_memcmp("aa", "aa", 2) == 0)
        i++;
    if (ft_memcmp("aa", "aA", 2) == 32)
        i++;
    if (ft_memcmp("aa", "aA", 5) == 32)
        i++;
    if (ft_memcmp("aa", "A", 0) == 0)
        i++;
    if (ft_memcmp("aa", "\0", 2) == 97)
        i++;
    if (ft_memcmp("aA", "aa", 2) == -32) // FISRT 6 SAME AS STRNCMP
        i++;
    if (ft_memcmp("aa", "aA", -1) == 32)
        i++;

    if (i == 7)
        (*s)++;
    return i;
}

int test_strnstr(int *s) // strNstr
{
    int i = 0;
    const char *str_p1 = "Fazla kod kalbe iyi gelirmiş arkadaşlar.";

    if (strcmp(ft_strnstr(str_p1, "kod", 9), "kod kalbe iyi gelirmiş arkadaşlar.") == 0)
        i++;
    if (strcmp(ft_strnstr(str_p1, "r", 29), "rmiş arkadaşlar.") == 0)
        i++;
    if (strcmp(ft_strnstr(str_p1, "F", 1), "Fazla kod kalbe iyi gelirmiş arkadaşlar.") == 0)
        i++;

    if (i == 3)
        (*s)++;
    return i;
}

int test_calloc(int *s) // Calloc (REQUIRES MORE DEV.)
{
    int i = 0;

    int *a = (int *)ft_calloc(0, sizeof(int));
    a[0] = 21;
    a[1] = 2;
    a[2] = 5;
    a[3] = 3;
    if (sizeof(*a) == 4)
        i++;
    if (sizeof(a) == 8)
        i++;
    if (a[3] == 3)
        i++;

    int *b = (int *)calloc(0, sizeof(int));
    b++;
    *b = 23;
    if (*b == 23)
        i++;
    b++;
    *b = 22;
    if (*b == 22)
        i++;

    if (i == 5)
        (*s)++;
    return i;
}

int test_strdup(int *s) // Strdup
{
    int i = 0;
    char *name_p = "Mr. Balbazar";
    char name_a[] = "Mr. Balbazar";

    if (strcmp(ft_strdup(name_a), name_p) == 0)
        i++;
    if (strcmp(ft_strdup(name_p), name_a) == 0)
        i++;
    if (strcmp(ft_strdup(""), "") == 0)
        i++;
    if (strcmp(ft_strdup("\0\0"), "") == 0)
        i++;
    if (strcmp(ft_strdup(""), "\0\0") == 0)
        i++;

    if (i == 5)
        (*s)++;
    return i;
}

int test_substr(int *s) // Substr
{
    int i = 0;
    char *sent = "Eat -> Code -> Sleep -> Repeat";
    char *send = "\0Eat -> Code -> Sleep -> Repeat";

    if (strcmp(ft_substr(sent, 0, 4), "Eat ") == 0)
        i++;
    if (strcmp(ft_substr(sent, 0, 0), "") == 0)
        i++;
    if (strcmp(ft_substr(sent, 5, 0), "") == 0)
        i++;
    if (strcmp(ft_substr(sent, 5, 2), "> ") == 0)
        i++;
    if (strcmp(ft_substr(send, 5, 2), "") == 0)
        i++;

    if (i == 5)
        (*s)++;
    return i;
}

int test_strjoin(int *s) // Strjoin
{
    int i = 0;
    char *a1 = "Alo -> La";
    char *b1 = "Lo\0";
    if (strcmp(ft_strjoin(a1, b1), "Alo -> LaLo") == 0)
        i++;
    if (strcmp(ft_strjoin(b1, a1), "LoAlo -> La") == 0)
        i++;
    char *a2 = "";
    char *b2 = "";
    if (strcmp(ft_strjoin(b2, a2), "") == 0)
        i++;

    if (i == 3)
        (*s)++;
    return i;
}

int test_strtrim(int *s) // Strtrim
{
    int i = 0;
    char *str = "Eat -> Code -> Sleep -> Repeat";
    char *trim = "Eat";
    if (strcmp(ft_strtrim(str, trim), " -> Code -> Sleep -> Repe") == 0)
        i++;

    if (i == 1)
        (*s)++;
    return i;
}

int test_split(int *s) // Split
{
    int i = 0;
    char *str = "Hello from anatolia. We have goals about 2023 and everything will be perfect in that year. \0 ";

    char **stra = ft_split(str, ' ');
    int a = 0;
    while (stra[a] != 0)
        a++;

    if (a == 16)
        i++;
    if (strcmp(stra[0], "Hello") == 0)
        i++;
    if (strcmp(stra[15], "year.") == 0)
        i++;

    if (i == 3)
        (*s)++;
    return i;
}

void TESTAREA() // CASUAL AREA
{
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
    printf("13.  StrlCPY başarılı test sayısı: %d/4", test_strlcpy(&s));
    HR();
    printf("14.  StrlCAT başarılı test sayısı: %d/3", test_strlcat(&s));
    HR();
    printf("15.  ToUPPER başarılı test sayısı: %d/4", test_toupper(&s));
    HR();
    printf("16.  ToLOWER başarılı test sayısı: %d/4", test_tolower(&s));
    HR();
    printf("17.  StrCHR başarılı test sayısı: %d/5", test_strchr(&s));
    HR();
    printf("18.  STRRchr başarılı test sayısı: %d/5", test_strrchr(&s));
    HR();
    printf("19.  strNcmp başarılı test sayısı: %d/6", test_strncmp(&s));
    HR();
    printf("20.  memCHR başarılı test sayısı: %d/7", test_memchr(&s));
    HR();
    printf("21.  memCMP başarılı test sayısı: %d/7", test_memcmp(&s));
    HR();
    printf("22.  strNstr başarılı test sayısı: %d/3", test_strnstr(&s));
    HR();
    printf("23.  Calloc başarılı test sayısı: %d/5", test_calloc(&s));
    HR();
    printf("24.  Strdup başarılı test sayısı: %d/5", test_strdup(&s));
    HR();
    printf("25.  Substr başarılı test sayısı: %d/5", test_substr(&s));
    HR();
    printf("26.  Strjoin başarılı test sayısı: %d/3", test_strjoin(&s));
    HR();
    printf("27.  Strtrim başarılı test sayısı: %d/1", test_strtrim(&s));
    HR();
    printf("28.  Split başarılı test sayısı: %d/3", test_split(&s));
    HR();

    printf("TOPLAM BAŞARILI FONKSIYON SAYISI: %d/2", s);
    HR();
    TESTAREA();
    return 0;
}