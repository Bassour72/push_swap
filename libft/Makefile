# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 14:45:45 by ybassour          #+#    #+#              #
#    Updated: 2025/03/01 16:47:21 by ybassour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_inttoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcpy.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  ft_strcmp.c \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c \
					get_next_line.c get_next_line_utils.c ft_cleanheap.c ft_find_first_node.c \
					ft_printf.c ft_flags_width.c ft_flags_left.c ft_flags_precision.c  ft_init_flags.c ft_isflgs.c ft_isspecifiertype.c \
					ft_isutils_format_flags.c ft_paddingsporze.c ft_parse_flags.c ft_parse.c ft_itoa.c ft_print_hexadecmal.c ft_print_integer.c \
					ft_print_sign_prec.c ft_print_u.c ft_print_unint.c ft_print_x.c ft_print_address.c ft_print_char.c ft_handle_format.c    \
					ft_print_hex.c ft_print_i.c ft_print_int.c ft_print_string_a.c ft_print_str.c  ft_utoa.c ft_print_hex_prefix.c ft_print_unsigned.c \
					ft_xtoa.c  ft_putchar.c ft_print_str_per.c ft_ptr_len.c ft_isdigit.c ft_strlen.c  ft_swap_int.c ft_atol.c \
					ft_bzero.c
OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
					ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
					ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c 
BONUS_OBJS		= $(BONUS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
PURPLE:="\033[1;35m"
CYAN:="\033[1;36m"
WHITE:="\033[1;37m"
EOC:="\033[0;0m"

all: $(NAME)

%.o: %.c libft.h
	@echo $(CYAN) " - Compiling $@" $(GREEN)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo $(PURPLE) "[OK COMPILED]" $(EOC)

$(NAME): $(OBJS)
	@echo $(GREEN) " - Creating archive $@" $(EOC)
	@ar rc $(NAME) $(OBJS)
	@echo $(RED) " - Archive created $@" $(EOC)
	
clean:
	@echo $(GREEN) " - Removing object files" $(EOC)
	@echo $(PURPLE)
	$(RM) $(OBJS) $(BONUS_OBJS)
	@echo $(EOC)

fclean: clean
	@$(RM) $(NAME)
	@echo $(RED) " - Removed $(NAME)" $(EOC)

re: fclean $(NAME)

bonus: $(BONUS_OBJS)
	ar r $(NAME) $(BONUS_OBJS)

.PHONY: clean fclean re bonus


