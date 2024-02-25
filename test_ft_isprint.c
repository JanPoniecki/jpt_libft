/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:35:43 by jponieck          #+#    #+#             */
/*   Updated: 2024/01/31 22:36:00 by jponieck         ###   ########.fr       */
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
		result = (isprint(input) >= 1 ? 1 : 0);
	else
		result = ft_isprint(input);
	printf("testing %c : %d", input, result);
}
