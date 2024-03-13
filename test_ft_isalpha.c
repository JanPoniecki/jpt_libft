/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:13:58 by jponieck          #+#    #+#             */
/*   Updated: 2024/01/31 19:47:52 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int	result;
	int	input;

	input = ft_atoi(argv[1]);
	if (argv[2][0] == '1')
		result = (isalpha(input) >= 1 ? 1 : 0);
	else
		result = ft_isalpha(input);
	printf("testing %c : %d", input, result);
}

