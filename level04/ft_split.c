/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 19:06:43 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/05/15 19:10:59 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Assignment name  : ft_split
**  Expected files   : ft_split.c
**  Allowed functions: malloc
**  --------------------------------------------------------------------------------
**
**  Write a function that takes a string, splits it into words, and returns them as
**  a NULL-terminated array of strings.
**
**  A "word" is defined as a part of a string delimited either by spaces/tabs/new
**  lines, or by the start/end of the string.
**
**  Your function must be declared as follows:
**
**  char    **ft_split(char *str);
**
**  >>>>>>>>>> FAILURE <<<<<<<<<<
*/

#include <stdlib.h>

int     total_words(char *str)
{
    int     i;
    int     num_of_words;

    num_of_words = 0;
    i = 0;
    while(str[i])
    {
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            num_of_words++;
            while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                i++;
        }
    }
    return (num_of_words);
}

char    *malloc_word(char *str)
{
    char    *word;
    int     i;

    i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        i++;
    word = (char *)malloc(sizeof(char) * i + 1);
    i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char *str)
{
    int     tot_words;
    char    **buff;
    int     i;

    i = 0;
    tot_words = total_words(str);
    buff = (char **)malloc(sizeof(char *) * (tot_words + 1));
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\n')
            i++;
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            buff[i] = malloc_word(str);
            i++;
            while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
        }
    }
    buff[i] = NULL;
    return(buff);
}

/*
= ft_split =====================================================================
$> gcc -Wextra -Wall -Werror ft_split.c main.c -o user_exe

= Test 1 ===================================================
$> ./bwu09rsrbygdd4bokt3lzmp4 ""
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./vk1t6t6wdvyg2l9680mg5ukr "

"
Command './vk1t6t6wdvyg2l9680mg5ukr "

"' got killed by a Segmentation fault (Signal -11)
Grade: 0

= Final grade: 0 ===============================================================
*/