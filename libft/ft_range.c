/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 16:07:35 by dcastro-          #+#    #+#             */
/*   Updated: 2017/08/24 18:01:51 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int *res;
	int b;
	int c;

	if (min >= max)
		return (NULL);
	b = min;
	c = max - min;
	res = ((int*)malloc(sizeof(int) * c));
	while (b < max)
	{
		res[b - min] = b;
		b++;
	}
	return (res);
}
