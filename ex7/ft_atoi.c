/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 01:42:58 by mohammah          #+#    #+#             */
/*   Updated: 2026/08/19 09:44:44 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	number;

	index = 0;
	sign = 1;
	number = 0;
	while (str[index] == ' ' || (str[index] >= 9 && 13 >= str[index]))
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + str[index] - '0';
		index++;
	}
	return (number * sign);
}
/*
#include <stdio.h>
int main (int ac, char **av)
{
	if (ac < 2)
	{
		printf("please provide a valid number\n");
		return 0;
	}
	int number = ft_atoi(av[1]);
	printf("%d\n", number);
	return (0);
}*/
