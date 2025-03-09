/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:03:14 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/03 10:50:43 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include "../libft/libft.h"
# define ERROR -1
# define SUCCESS 1

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
void	ft_rotate_a(t_stack **stack);
void	ft_rotate_b(t_stack **stack);
void	ft_reverse_rotate_a(t_stack **stack);
void	ft_push_in_a(t_stack **stack_a, t_stack **stack_b);
void	ft_push_in_b(t_stack **stack_a, t_stack **stack_b);
void	ft_swap_a_and_b(t_stack **stack_a, t_stack **stack_b);
void	ft_swap_a(t_stack **stack_a);
void	ft_swap_b(t_stack **stack_b);
void	ft_reverse_rotate_b(t_stack **stack_b);
void	ft_rotate_a_and_b(t_stack **stack_a, t_stack **stack_b);
void	ft_reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	ft_clear_stack(t_stack *stack);
void	ft_clean_command(t_list **list);
t_list	*ft_addnode_(char *data);
void	ft_lstadd_back(t_list **list, t_list *new);
t_list	*ft_parse_commands(int *result);
void	ft_apply_commands(t_stack **stack_a, t_stack **stack_b, \
		t_list *list_of_instru);
#endif