/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 09:24:27 by mkryukov          #+#    #+#             */
/*   Updated: 2018/10/26 10:24:32 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_ultimate_div_mod(int *a, int *b)
{
	int x;

	x = *a;
	*a = x / *b;
	*b = x % *b;
}
