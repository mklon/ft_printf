/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oposhiva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 13:27:12 by oposhiva          #+#    #+#             */
/*   Updated: 2017/03/30 16:48:07 by oposhiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int		main(void)
{
	int		num = 153;
	char    *arg = "|%hhS|";

	printf("\tOg: %d\n", ft_printf("%b", 10));
	printf("\tMy: %d\n", ft_printf("%*.*d", 10, 7, 42));
	return (0);
}
