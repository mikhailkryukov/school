/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkryukov <mkryukov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 09:58:03 by mkryukov          #+#    #+#             */
/*   Updated: 2018/11/08 21:53:56 by mkryukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H
# define BUF_SIZE 4096

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_putstr(char *str);
int		error(int e);
int		ft_print_file(int fd);

static char *g_errors[4] =
{
	"File name missing.\n",
	"Too many arguments.\n",
	"Error in open() file.\n",
	"Error in close() file.\n"

};
#endif
