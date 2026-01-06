# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/19 18:07:36 by pmawusi           #+#    #+#              #
#    Updated: 2025/11/26 12:48:53 by pmawusi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
       ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove \
       ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr \
       ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi ft_calloc ft_strdup \
       ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri \
       ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

OBJS   = $(SRCS:=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	@norminette -R CheckForbiddenSourceHeader

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re norm
