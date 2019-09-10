/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 23:28:54 by tmorgana          #+#    #+#             */
/*   Updated: 2019/09/10 17:14:45 by tmorgana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		ft_display(char *fn)
{
	int		fd;
	char	print;

	fd = open(fn, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Open failed\n", 12);
		return (1);
	}
	while (read(fd, &print, 1) != 0)
		write(1, &print, 1);
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	return (ft_display(argv[1]));
}
