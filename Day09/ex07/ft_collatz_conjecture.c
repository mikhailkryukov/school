/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:54:50 by sgusache          #+#    #+#             */
/*   Updated: 2018/11/02 16:05:03 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else
	{
		if (base % 2)
			base = ft_collatz_conjecture(3 * base + 1) + 1;
		else
			base = ft_collatz_conjecture(base / 2) + 1;
	}
	return (base);
}
