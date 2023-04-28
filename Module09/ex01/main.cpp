/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:04:21 by masebast          #+#    #+#             */
/*   Updated: 2023/04/28 17:02:26 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

int ft_error(std::string str)
{
	std::cerr << str << std::endl;
	return (1);
}

int checkArgs(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] != '+' && argv[i] != '-' && argv[i] != '/' &&
			argv[i] != ' ' && argv[i] != '*' && !std::isdigit(argv[i]))
			return (1);
		i++;
	}
	return (0);
}

int operate(std::stack<int> *stack, char operand)
{
	int n1, n2, result;

	result = 0;
	n2 = stack->top();
	stack->pop();
	n1 = stack->top();
	stack->pop();
	if (operand == '+')
		result = n1 + n2;
	else if (operand == '-')
		result = n1 - n2;
	else if (operand == '*')
		result = n1 * n2;
	else if (operand == '/')
		result = n1 / n2;
	else
		return (ft_error("ERROR: unexpected token found among operands"));
	stack->push(result);
	return (0);
}

int parse(char *argv, std::stack<int> *stack)
{
	int index;

	index = 0;
	while (argv[index])
	{
		if (std::isdigit(argv[index]))
			stack->push(argv[index] - '0');
		else if (argv[index] == '+' || argv[index] == '-' ||
			argv[index] == '*' || argv[index] == '/')
			operate(stack, argv[index]);
		index++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	std::stack<int> stack;

	if (argc != 2)
		return (ft_error("ERROR: argument"));
	if (checkArgs(argv[1]))
		return (ft_error("ERROR: invalid arguments"));
	parse(argv[1], &stack);
	if (stack.size() == 1)
		std::cout << stack.top() << std::endl;
	else
		return (ft_error("ERROR in notation syntax"));
	return (0);
}