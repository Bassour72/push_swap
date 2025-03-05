LIBFT_PATH = libft/libft.a
NAME = push_swap
NAME_BONUS = checker
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.
#-fsanitize=address -g3 
BONUS_DIR = bonus
SRCS_BONUS = \
	$(BONUS_DIR)/ft_build_stack_bonus.c \
	$(BONUS_DIR)/ft_check_sort_bonus.c \
	$(BONUS_DIR)/ft_clear_stack_bonus.c \
	$(BONUS_DIR)/ft_concat_args_bonus.c \
	$(BONUS_DIR)/ft_contains_duplicates_bonus.c \
	$(BONUS_DIR)/ft_create_node_bonus.c \
	$(BONUS_DIR)/ft_create_stack_bonus.c \
	$(BONUS_DIR)/ft_free_argv_bonus.c \
	$(BONUS_DIR)/ft_has_duplicate_numbers_bonus.c \
	$(BONUS_DIR)/ft_is_valid_valude_bonus.c \
	$(BONUS_DIR)/ft_parse_and_validate_input_bonus.c \
	$(BONUS_DIR)/ft_push_in_a_bonus.c \
	$(BONUS_DIR)/ft_push_in_b_bonus.c \
	$(BONUS_DIR)/ft_reverse_rotate_a_bonus.c \
	$(BONUS_DIR)/ft_reverse_rotate_ab_bonus.c \
	$(BONUS_DIR)/ft_reverse_rotate_b_bonus.c \
	$(BONUS_DIR)/ft_rotate_a_bonus.c \
	$(BONUS_DIR)/ft_rotate_a_and_b_bonus.c \
	$(BONUS_DIR)/ft_rotate_b_bonus.c \
	$(BONUS_DIR)/ft_stack_add__bonus.c \
	$(BONUS_DIR)/ft_stack_size_bonus.c \
	$(BONUS_DIR)/ft_swap_a_bonus.c \
	$(BONUS_DIR)/ft_swap_a_and_b_bonus.c \
	$(BONUS_DIR)/ft_swap_b_bonus.c \
	$(BONUS_DIR)/ft_validate_args_bonus.c \
	$(BONUS_DIR)/ft_validate_integer_bonus.c \
	$(BONUS_DIR)/ft_validate_number_list_bonus.c \
	$(BONUS_DIR)/ft_clean_command_bonus.c \
	$(BONUS_DIR)/ft_addnode__bonus.c \
	$(BONUS_DIR)/ft_lstadd_back_bonus.c \
	$(BONUS_DIR)/ft_parse_commands_bonus.c \
	$(BONUS_DIR)/ft_apply_commands_bonus.c \
	$(BONUS_DIR)/push_swap_bonus.c

MANDATORY_DIR = mandatory
SRCS = \
	$(MANDATORY_DIR)/ft_apply_best_moves.c \
	$(MANDATORY_DIR)/ft_build_stack.c \
	$(MANDATORY_DIR)/ft_calculate_move_cost.c \
	$(MANDATORY_DIR)/ft_calculate_moves_to_top.c \
	$(MANDATORY_DIR)/ft_check_sort.c \
	$(MANDATORY_DIR)/ft_clear_stack.c \
	$(MANDATORY_DIR)/ft_concat_args.c \
	$(MANDATORY_DIR)/ft_contains_duplicates.c \
	$(MANDATORY_DIR)/ft_create_node.c \
	$(MANDATORY_DIR)/ft_create_stack.c \
	$(MANDATORY_DIR)/ft_determine_best_rotation.c \
	$(MANDATORY_DIR)/ft_find_min_index_position.c \
	$(MANDATORY_DIR)/ft_find_target_position.c \
	$(MANDATORY_DIR)/ft_final_rotation.c \
	$(MANDATORY_DIR)/ft_free_argv.c \
	$(MANDATORY_DIR)/ft_get_position.c \
	$(MANDATORY_DIR)/ft_has_duplicate_numbers.c \
	$(MANDATORY_DIR)/ft_is_valid_valude.c \
	$(MANDATORY_DIR)/ft_move_stack_b_to_stack_a.c \
	$(MANDATORY_DIR)/ft_parse_and_validate_input.c \
	$(MANDATORY_DIR)/ft_push_in_a.c \
	$(MANDATORY_DIR)/ft_push_in_b.c \
	$(MANDATORY_DIR)/ft_reverse_rotate_a.c \
	$(MANDATORY_DIR)/ft_reverse_rotate_ab.c \
	$(MANDATORY_DIR)/ft_reverse_rotate_b.c \
	$(MANDATORY_DIR)/ft_rotate_a.c \
	$(MANDATORY_DIR)/ft_rotate_a_and_b.c \
	$(MANDATORY_DIR)/ft_rotate_b.c \
	$(MANDATORY_DIR)/ft_rotate_to_position.c \
	$(MANDATORY_DIR)/ft_set_index.c \
	$(MANDATORY_DIR)/ft_sort.c \
	$(MANDATORY_DIR)/ft_sort_three.c \
	$(MANDATORY_DIR)/ft_stack_add_.c \
	$(MANDATORY_DIR)/ft_stack_size.c \
	$(MANDATORY_DIR)/ft_swap_a.c \
	$(MANDATORY_DIR)/ft_swap_a_and_b.c \
	$(MANDATORY_DIR)/ft_swap_b.c \
	$(MANDATORY_DIR)/ft_validate_args.c \
	$(MANDATORY_DIR)/ft_validate_integer.c \
	$(MANDATORY_DIR)/ft_validate_number_list.c \
	$(MANDATORY_DIR)/push_swap.c

MANDATORY_OBJ = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
PURPLE:="\033[1;35m"
CYAN:="\033[1;36m"
WHITE:="\033[1;37m"
EOC:="\033[0;0m"

all: sub_program $(NAME)

$(NAME): $(MANDATORY_OBJ) $(LIBFT_PATH)
	$(CC) $(CFLAGS)  $(MANDATORY_OBJ) $(LIBFT_PATH)  -o $(NAME)

bonus: sub_program $(NAME_BONUS)

$(NAME_BONUS): $(OBJS_BONUS) $(LIBFT_PATH)
	@echo $(CYAN) " - Compiling $@" $(GREEN)
	$(CC) $(CFLAGS) $(OBJS_BONUS) $(LIBFT_PATH) -o $(NAME_BONUS)
	@echo $(PURPLE) "[OK COMPILED]" $(EOC)

	
$(MANDATORY_OBJ): $(MANDATORY_DIR)/%.o: $(MANDATORY_DIR)/%.c mandatory/push_swap.h
	@echo $(CYAN) " - Compiling $@" $(GREEN)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo $(PURPLE) "[OK COMPILED]" $(EOC)

$(OBJS_BONUS): $(BONUS_DIR)/%.o: $(BONUS_DIR)/%.c bonus/push_swap_bonus.h
	@echo $(CYAN) " - Compiling $@" $(GREEN)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo $(PURPLE) "[OK COMPILED]" $(EOC)

sub_program:
	make -C libft/ all
clean:
	@echo $(PURPLE) "[🧹Cleaning...🧹]" $(EOC)
	rm -f $(MANDATORY_OBJ)
	rm -f $(OBJS_BONUS)
	$(MAKE) clean -C libft

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_BONUS)
	$(MAKE) fclean -C libft


re: fclean all
	@echo $(PURPLE) "[🧹FCleaning...🧹]" $(EOC)
nor:
	norminette *

.PHONY: all clean fclean re bonus sub_