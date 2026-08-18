/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 00:25:54 by mohammah          #+#    #+#             */
/*   Updated: 2026/08/18 11:02:00 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && s1[index] && s1[index] == s2[index])
		index++;
	if (index == n || s1[index] == s2[index])
		return (0);
	if (s1[index] > s2[index])
		return (1);
	return (-1);
}
