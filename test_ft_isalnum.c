/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tf_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:35:45 by jponieck          #+#    #+#             */
/*   Updated: 2024/01/31 21:36:14 by jponieck         ###   ########.fr       */
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
		result = (isalnum(input) >= 1 ? 1 : 0);
	else
		result = ft_isalnum(input);
	printf("testing %c : %d", input, result);
}
