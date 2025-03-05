/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybassour <ybassour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:16:33 by ybassour          #+#    #+#             */
/*   Updated: 2025/03/03 11:32:13 by ybassour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int  ft_isempty(t_stack **stack_b)
{
	if (!stack_b || !(*stack_b))
		return (SUCCESS);
	return (ERROR);
}


void print_stack_for_debug(t_stack **stack_a, t_stack **stack_b, char *position)
{
	t_stack *for_address_stack_first_node;
	t_stack *for_address_stack_next_node;

	// Print Stack A
	//sleep(3);
	ft_printf("\n\n|%s|\n\n", position);
	if (*stack_a != NULL) {
		for_address_stack_first_node = *stack_a;
		for_address_stack_next_node = (*stack_a)->next;

		ft_printf("|           STACK A     | \n");
		ft_printf("The node address is  |%p| \n", (void*)for_address_stack_first_node);
		ft_printf("The value of node is |%d| \n", for_address_stack_first_node->val);
		
		if (for_address_stack_next_node != NULL) {
			ft_printf("The next address is  |%p| \n", (void*)for_address_stack_next_node);
			ft_printf("The value of next is |%d| \n", for_address_stack_next_node->val);
		} else {
			ft_printf("There is no next node. Stack has only one element.\n");
		}

		ft_printf("|_______________________| \n\n");
	} else {
		ft_printf("Stack A is empty.\n");
	}

	// Print Stack B
	if (*stack_b != NULL) {
		for_address_stack_first_node = *stack_b;
		for_address_stack_next_node = (*stack_b)->next;

		ft_printf("|           STACK B     | \n");
		ft_printf("The node address is  |%p| \n", (void*)for_address_stack_first_node);
		ft_printf("The value of node is |%d| \n", for_address_stack_first_node->val);
		
		if (for_address_stack_next_node != NULL) {
			ft_printf("The next address is  |%p| \n", (void*)for_address_stack_next_node);
			ft_printf("The value of next is |%d| \n", for_address_stack_next_node->val);
		} else {
			ft_printf("There is no next node. Stack has only one element.\n");
		}

		ft_printf("|_______________________| \n\n");
	} else {
		ft_printf("Stack B is empty.\n");
	}
}


static t_stack	*ft_handle_stack_building(int argc, char *argv[])
{
	t_stack	*stack_a;

	stack_a = ft_build_stack(argc, argv);
	if (!stack_a)
	{
		ft_clear_stack(stack_a);
		ft_putendl_fd("Error", STDERR_FILENO);
		return (NULL);
	}
	
	return (stack_a);
}

static void ft_process_commands(t_stack **stack_a, t_stack	**stack_b)
{
	t_list *list_of_instru;
	int result;

	if (!stack_a)
		return ;
	result = 0;
	list_of_instru = ft_parse_commands(&result);
	if (!list_of_instru && result == ERROR)
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		return;
	}
	ft_apply_commands(stack_a, stack_b, list_of_instru);
	if (!*stack_a)
	{
		ft_clean_command(&list_of_instru);
		ft_putendl_fd("Error", STDERR_FILENO);
		return;
	}
	if (ft_check_sort(stack_a) == ERROR || ft_isempty(stack_b) == ERROR)
		ft_printf("KO\n");
	else if (ft_check_sort(stack_a))
		ft_printf("OK\n");
	ft_clean_command(&list_of_instru);
}

void f(void) {
	//system("valgrind  ./checker");
	system("leaks checker");
		//system("valgrind --leak-check=full --log-file=valgrind_output.txt ./checker");
}
void	print_stacks(t_stack *stack_a)
{
	
	t_stack	*tmp_a;

	ft_printf("\nStack A: ");
	tmp_a = stack_a;
	while (tmp_a)
	{
		ft_printf(" %d |", tmp_a->val);
		tmp_a = tmp_a->next;
	}
	
}
int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	atexit(f);
	stack_b = NULL;
	if (argc == 1)
		return (0);
	stack_a = ft_handle_stack_building(argc, argv);
	print_stacks(stack_a);
	ft_printf("\n");
	if (!stack_a)
		return (0);
	ft_process_commands(&stack_a, &stack_b);
	print_stacks(stack_a);
	ft_clear_stack(stack_b);
	ft_clear_stack(stack_a);
	return (0);
}

