/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 04:36:58 by msariasl          #+#    #+#             */
/*   Updated: 2022/11/26 04:48:27 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int test_lstnew(int *s) // LSTNEW
{
    int i = 0;
 
    if (i == 10)
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
     printf("\n\n\n----> B O N U S ___ $ ___ P A R T <-----\n\n");
    HR();
    printf("1.  lstnew başarılı test sayısı: %d/10", test_lstnew(&s));
     HR();

    printf("TOPLAM BAŞARILI FONKSIYON SAYISI: %d/6", s);
    HR();
    TESTAREA();
    return 0;
} 