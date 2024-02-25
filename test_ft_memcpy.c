/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:04:18 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/02 18:22:00 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h> 
#include<stdlib.h>
#include <unistd.h> 
#include "libft.h" 

char *empty = "";
char *nll = NULL;

void printmem(char *src, int size)
{
	int i = 0;
	while (i < size)
		printf("%d,", src[i++]);
}

char *test_arg(char *str)
{
	if (ft_strncmp(str, "EMPTY", 6) == 0)
		return (empty);
	else if(ft_strncmp(str, "NULL", 6) == 0)
		return (nll);
	else
	{
		int i = 0;
		while (str[i])
		{
			str[i] = (str[i] == '@' ? 0 : str[i]);
			i++;
		}
		return (str);
	}
}

int	main(int argc, char **argv)
{
	char *src = test_arg(argv[1]);
	int size_of_dst = atoi(argv[2]);
	void *dst = (void *)malloc(size_of_dst);
	if (dst)
		memset(dst, 42, size_of_dst);
	if (atoi(argv[3]) == 1)
		memcpy(dst, src, strlen(src));
	else
		ft_memcpy(dst, src, strlen(src));
	printmem(dst, size_of_dst);
	free(dst);
}