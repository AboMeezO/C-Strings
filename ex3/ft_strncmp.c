/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 00:25:54 by mohammah          #+#    #+#             */
/*   Updated: 2026/08/17 00:56:26 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	index;

	while (index < n)
	{
		if (s1[index] && s2[index])
		{
			if (s1[index] == s2[index])
				continue ;
			else if (s1[index] > s2[index])
				return (1);
			else
				return (-1);
		}
		else
			break ;
		index++;
	}
	return (0);
}
