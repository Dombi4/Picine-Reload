/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:33:45 by tmorgana          #+#    #+#             */
/*   Updated: 2019/09/10 17:11:25 by tmorgana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*t;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	t = (int*)malloc(sizeof(*t) * (max - min));
	while (min < max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
