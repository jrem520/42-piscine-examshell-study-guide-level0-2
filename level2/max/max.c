/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalgier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:28:58 by jalgier           #+#    #+#             */
/*   Updated: 2018/06/05 14:29:03 by jalgier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	unsigned int	cmp;
	int				cpy;

	cmp = 0;
	cpy = tab[0];
	while (cmp < len)
	{
		if (cpy < tab[cmp])
			cpy = tab[cmp];
		++cmp;
	}
	if (cmp == len)
		return (cpy);
	return (0);
}
