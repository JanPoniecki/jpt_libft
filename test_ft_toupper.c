/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:36:29 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/02 22:45:07 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(int argc, char **argv)
{
	int i = ft_atoi(argv[1]);
	int m = ft_atoi(argv[2]);

	if (m == 1)
		printf("%c ", toupper(i));
	else
		printf("%c ", ft_toupper(i));
	return (0);
}
