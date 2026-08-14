/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 10:13:21 by mohammah          #+#    #+#             */
/*   Updated: 2026/08/14 10:25:50 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	index;

	index = 0;
	while (index < n)
	{
		if(src[index])
			dest[index] = src[index];
		else
			dest[index] = 0;
		index++;
	}
	return (dest);
}
