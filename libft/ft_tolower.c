/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 12:40:49 by dcastro-          #+#    #+#             */
/*   Updated: 2017/08/24 18:05:49 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	int a;

	if (c >= 65 && c <= 90)
	{
		c = (97 + c - 65);
		return (c);
	}
	else
	{
		a = c;
		return (a);
	}
}
