/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:03:14 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/01 16:30:44 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# define ERROR -1
# define SUCCESS 1
# define STDERR_FD 2

typedef struct s_cost_move
{
	int	ra;
	int	rb;
	int	rra;
	int	rrb;
	int	total;
	int	total_rr;
	int	total_rrr;
	int	total_mix1;
	int	total_mix2;
}	t_cost_move;

typedef struct s_stack
{
	int				val;
	int				index;
	int				cost;
	struct s_stack	*next;
}	t_stack;
int		ft_check_sort(t_stack **stack);
void	ft_free_argv(char **argv);
void	ft_stack_add_(t_stack **stack, t_stack *node);
int		ft_validate_args(int argc, char	*argv[]);
int		ft_is_valid_valude(char *valu);
int		ft_validate_integer(char *number);
int		ft_validate_number_list(char **numbers);
int		ft_has_duplicate_numbers(char **numbers);
int		ft_contains_duplicates(t_stack *stack);
int		ft_stack_size(t_stack *stack);
t_stack	*ft_create_node(int val);
t_stack	*ft_create_stack(char **argv);
t_stack	*ft_build_stack(int argc, char **argv);
char	*ft_concat_args(char **argv, int argc);
char	**ft_parse_and_validate_input(char **argv, int argc);
void	sort_three(t_stack **stack);
int		find_median(t_stack *stack, int size);
void	ft_rotate_a(t_stack **stack, int boolean);
void	ft_rotate_b(t_stack **stack, int boolean);
void	ft_reverse_rotate_a(t_stack **stack, int boolean);
int		ft_set_index(t_stack **stack);
int		ft_find_min_index_position(t_stack *stack);
void	ft_move_stack_b_to_stack_a(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate_to_position(t_stack **stack_a, int pos);
void	ft_final_rotation(t_stack **stack_a);
void	ft_test(t_stack **stack_a, t_stack **stack_b);
void	ft_push_in_a(t_stack **stack_a, t_stack **stack_b);
void	ft_push_in_b(t_stack **stack_a, t_stack **stack_b);
void	ft_swap_a_and_b(t_stack **stack_a, t_stack **stack_b);
void	ft_swap_a(t_stack **stack_a);
void	ft_swap_b(t_stack **stack_b);
void	ft_reverse_rotate_b(t_stack **stack_b, int boolean);
void	ft_rotate_a_and_b(t_stack **stack_a, t_stack **stack_b, int boolean);
void	print_stacks(t_stack *stack_a, t_stack *stack_b);
void	ft_reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
void	ft_move_stack_b_to_stack_a(t_stack **stack_a, t_stack **stack_b);
void	ft_apply_best_moves(t_stack **stack_a, t_stack **stack_b, \
		t_cost_move *best_cost);
void	ft_calculate_move_cost(t_stack *stack_a, t_stack *stack_b, \
		t_stack *node_b, t_cost_move *cost);
void	ft_determine_best_rotation(t_cost_move	*move, t_cost_move *cost);
int		ft_get_position(t_stack *stack, t_stack *node);
void	ft_calculate_moves_to_top(int pos, int size, t_cost_move *move, \
		int boolean);
int		ft_find_target_position(t_stack *stack_a, int index);
void	ft_final_rotation(t_stack **stack_a);
int		find_best_position(t_stack *stack_a, int index);
void	ft_rotate_to_position(t_stack **stack_a, int pos);
int		ft_find_min_index_position(t_stack *stack);
void	ft_clear_stack(t_stack *stack);
#endif