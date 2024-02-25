/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:49:21 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/04 14:26:35 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stdio.h> 
#include "libft.h" 

int main(int argc, char **argv)
{
	char datatype = argv[1][0];
	int mode = ft_atoi(argv[5]);
	if (datatype == 'i')
	{
		int a1 = ft_atoi(argv[2]);
		int a2 = ft_atoi(argv[3]);
		int a3 = ft_atoi(argv[4]);
		int *result;	
		if (mode == 1)	
			result = calloc(3, sizeof(int));
		else
			result = ft_calloc(3, sizeof(int));
		result[0] = a1;
		result[1] = a2;
		result[2] = a3;
		int i = 0;
		while (i < 3)
			printf("%d ", result[i++]);
		free(result);
	}
	
	if (datatype == 's')
	{
		char *a1 = argv[2];
		char *a2 = argv[3];
		char *a3 = argv[4];
		char **result;	
		if (mode == 1)	
			result = calloc(3, sizeof(char *));
		else
			result = ft_calloc(3, sizeof(char *));
		result[0] = a1;
		result[1] = a2;
		result[2] = a3;
		int i = 0;
		while (i < 3)
			printf("%s ", result[i++]);
		free(result);
	}
	if (datatype == 'c')
	{
		char a1 = argv[2][0];
		char a2 = argv[3][0];
		char a3 = argv[4][0];
		char *result;	
		if (mode == 1)	
			result = calloc(3, sizeof(char));
		else
			result = ft_calloc(3, sizeof(char));
		result[0] = a1;
		result[1] = a2;
		result[2] = a3;
		int i = 0;
		while (i < 3)
			printf("%c ", result[i++]);
		free(result);
	}
	return (0);
}


