/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:18:32 by jponieck          #+#    #+#             */
/*   Updated: 2024/01/31 22:24:10 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int	result;
	int	input;

	input = ft_atoi(argv[1]);
	if (argv[2][0] == '1')
		result = (isascii(input) >= 1 ? 1 : 0);
	else
		result = ft_isascii(input);
	printf("testing %d : %d", input, result);
}
