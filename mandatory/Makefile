LIBFT_PATH = libft/libft.a
NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.
#-fsanitize=address -g3 

SRCS = push_swap.c ft_create_node.c ft_create_stack.c ft_validate_args.c ft_stack_add_.c  ft_concat_args.c ft_is_valid_valude.c ft_validate_integer.c ft_validate_number_list.c \
		ft_free_argv.c ft_has_duplicate_numbers.c ft_parse_and_validate_input.c ft_build_stack.c ft_contains_duplicates.c \
		ft_rotate_a.c ft_push_in_b.c ft_push_in_a.c ft_swap_a_and_b.c ft_rotate_a_and_b.c ft_stack_size.c ft_sort_three.c ft_set_index.c \
		ft_reverse_rotate_a.c  ft_rotate_b.c ft_swap_a.c ft_swap_b.c ft_reverse_rotate_b.c ft_check_sort.c ft_reverse_rotate_ab.c \
		ft_sort.c  ft_move_stack_b_to_stack_a.c ft_apply_best_moves.c ft_calculate_move_cost.c ft_clear_stack.c ft_find_min_index_position.c ft_rotate_to_position.c  \
		ft_final_rotation.c ft_determine_best_rotation.c ft_get_position.c ft_find_target_position.c ft_calculate_moves_to_top.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_PATH)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files"
	$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
