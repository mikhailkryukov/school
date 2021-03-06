/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:54:50 by sgusache          #+#    #+#             */
/*   Updated: 2018/11/02 14:39:21 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) = (*(str + i) - 'a' + 42) % 26 + 'a';
		else if (*(str + i) >= 'A' && *(str + i) <= 'Z')
			*(str + i) = (*(str + i) - 'A' + 42) % 26 + 'A';
		i++;
	}
	return (str);
}
