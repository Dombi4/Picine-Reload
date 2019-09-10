# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmorgana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 20:27:06 by tmorgana          #+#    #+#              #
#    Updated: 2019/09/09 00:01:29 by tmorgana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
OPTION = -o 
FILES = ft_display_file.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTION) $(NAME)  $(FILES) 

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
