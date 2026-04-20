# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/18 23:35:49 by hfandino          #+#    #+#              #
#    Updated: 2026/04/18 23:36:01 by hfandino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= ft_display_file
CC				= cc
CFLAGS			= -Wall -Wextra -Werror
SRCS_DIR		= srcs
SRCS			= srcs/main.c srcs/util.c
OBJS_DIR		= $(SRCS_DIR)
OBJS			= $(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))
RM				= rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
