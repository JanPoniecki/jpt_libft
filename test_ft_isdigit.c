/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:23:29 by jponieck          #+#    #+#             */
/*   Updated: 2024/01/31 20:31:45 by jponieck         ###   ########.fr       */
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
		result = (isdigit(input) >= 1 ? 1 : 0);
	else
		result = ft_isdigit(input);
	printf("testing %c : %d", input, result);
}
