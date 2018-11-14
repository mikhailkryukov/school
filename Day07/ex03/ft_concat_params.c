/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/11/01 22:08:27 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		a;
	int		b;
	int		c;
	int		mem;

	mem = 0;
	a = 1;
	while (a < argc)
		mem += ft_strlen(argv[a++]) + 1;
	args = (char*)malloc(sizeof(char) * mem);
	a = 1;
	c = 0;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
			args[c++] = argv[a][b++];
		if (a == argc - 1)
			args[c++] = '\0';
		else
			args[c++] = '\n';
		a++;
	}
	return (args);
}
