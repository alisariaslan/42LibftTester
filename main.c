/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:59:30 by msariasl          #+#    #+#             */
/*   Updated: 2022/11/24 16:54:01 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
    if (strcmp(ft_itoa(-12), "-12")== 0)
        i++;
    if (strcmp(ft_itoa(1), "1")== 0)
        i++;
    if (strcmp(ft_itoa(0), "0")== 0)
        i++;
    if (strcmp(ft_itoa(-0), "0")== 0) // 5
        i++;
    if (strcmp(ft_itoa(-1), "-1")== 0)
        i++;
    if (strcmp(ft_itoa(-234234), "-234234")== 0)
        i++;
    if (strcmp(ft_itoa(999999999), "999999999")== 0) 
        i++;
    if (strcmp(ft_itoa(-99999999), "-99999999")== 0) // 9
        i++;
 
    if (i == 9)
         (*s)++;
    return i;
}

int test_isdigit(int *s) // ITOA
{
    int i = 0;

   
 
    if (i == 9)
         (*s)++;
    return i;
}

void TESTAREA() // CASUAL AREA
{

    printf("sonuc: %s", ft_itoa(12));

    // printf("test: %d",ft_atoi("21474483649"));
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

    printf("TOPLAM BAŞARILI FONKSIYON SAYISI: %d/2", s);
    HR();
    TESTAREA();
    return 0;
}