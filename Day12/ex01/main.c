/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/11/08 21:44:40 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

int		main(int argc, char **argv)
{
	int i;
	int	fd;

	i = 1;
	if (argc < 2)
		return (error(1));
	else if (argc > 2)
	{
		while (i <= argc)
		{
			fd = open(argv[i], O_RDONLY);
			ft_print_file(fd);
			i++;
		}
	}
	else
		fd = open(argv[1], O_RDONLY);
	return (0);
}
