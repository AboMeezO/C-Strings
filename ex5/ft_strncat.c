/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 00:58:00 by mohammah          #+#    #+#             */
/*   Updated: 2026/08/17 01:14:41 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	index;
	int	index_src;

	index = 0;
	index_src = 0;
	while (dest[index])
		index++;
	while (index_src < nb)
	{
		if (!src[index_src])
			break ;
		dest[index] = src[index_src];
		index++;
		index_src++;
	}
	dest[index] = '\0';
	return (dest);
}
