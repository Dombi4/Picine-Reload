/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:49:18 by tmorgana          #+#    #+#             */
/*   Updated: 2019/09/08 20:59:21 by tmorgana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_foreach(int *tab, int lehgth, void (*f)(int))
{
	int		i;

	i = 0;
	while (i < lehgth)
	{
		f(tab[i]);
		i++;
	}
}
