/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/10/30 20:51:54 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int a;
	int b;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && n != 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
			n--;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
	{
		a = s1[i - 1];
		b = s2[i - 1];
		return (a - b);
	}
}
