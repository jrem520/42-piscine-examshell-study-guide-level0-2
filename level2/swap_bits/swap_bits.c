/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalgier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:34:30 by jalgier           #+#    #+#             */
/*   Updated: 2018/06/05 14:35:00 by jalgier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result;

	result = octet;
	while (octet)
	{
		result <<= 1;
		result |= octet & 1;
		octet >>= 1;
	}
	result <<= 1;
	return (result);
}
