# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shopa <shopa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 14:54:19 by shopa             #+#    #+#              #
#    Updated: 2022/04/28 11:40:52 by shopa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER	= server.a
NAME_CLIENT	= client.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I.
PRINT		= printf/libftprintf.a
LIBFT		= libft/libft.a

FILES		= server.c
OBJS		= $(FILES:%.c=%.o)
FILEC		= client.c
OBJC		= $(FILEC:%.c=%.o)

all				: make-dif $(NAME_SERVER) $(NAME_CLIENT) run-server run-client

$(NAME_SERVER)	: $(OBJS)
	@ar -rcs $(NAME_SERVER) $(OBJS)
$(NAME_CLIENT)	: $(OBJC)
	@ar -rcs $(NAME_CLIENT) $(OBJC)

run-server		:
	$(CC) -o server $(NAME_SERVER) $(PRINT) $(LIBFT)

run-client		:
	$(CC) -o client $(NAME_CLIENT) $(PRINT) $(LIBFT)

make-dif		:
	@make -C printf
	@make -C libft

clean-dif		:
	@make fclean -C printf
	@make fclean -C libft

clean			:
	@rm -f *.o

fclean			: clean-dif clean
	@rm -f $(NAME_CLIENT) $(NAME_SERVER) $(PRINT) $(LIBFT) server client

re				: fclean all

norm			:
	@norminette *.[ch]
	@make norm -C printf
	@make norm -C libft

.PHONY			: all clean fclean re make-dif clean-dif run-server run-client norm
