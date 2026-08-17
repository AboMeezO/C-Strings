/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 12:00:36 by mohammah          #+#    #+#             */
/*   Updated: 2026/08/17 14:53:17 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;
	int	result;

	index = 0;
	while (s1[index])
	{
		if (s1[index] == s2[index])
			index++;
		else
		{
			if (s1[index] > s2[index])
				return (1);
			else
				return (-1);
			index++;
		}
	}
	return (0);
}
