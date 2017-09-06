/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastro- <dcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 11:26:36 by dcastro-          #+#    #+#             */
/*   Updated: 2017/08/24 18:05:57 by dcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	int a;

	if (c >= 97 && c <= 122)
	{
		c = (65 + c - 97);
		return (c);
	}
	else
	{
		a = c;
		return (a);
	}
}
