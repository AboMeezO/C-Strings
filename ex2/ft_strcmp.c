/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 12:00:36 by mohammah          #+#    #+#             */
/*   Updated: 2026/08/18 11:02:00 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] && s1[index] == s2[index])
		index++;
	if (s1[index] == s2[index])
		return (0);
	if (s1[index] > s2[index])
		return (1);
	return (-1);
}
