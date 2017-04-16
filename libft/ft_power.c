/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oposhiva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 12:50:17 by oposhiva          #+#    #+#             */
/*   Updated: 2017/03/03 12:50:17 by oposhiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int num, int pow)
{
	int		i;
	int		res;

	i = -1;
	res = 1;
	if (pow == 0)
		return (1);
	while (++i < pow)
		res *= num;
	return (res);
}