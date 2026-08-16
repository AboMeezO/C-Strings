/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 00:40:57 by mohammah          #+#    #+#             */
/*   Updated: 2026/08/17 00:53:34 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strcat(char *dest, char *src)
{
	int	index_src;
	int	index_dest;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest])
		index_dest++;
	dest[index_dest] = src[index_src];
	index_dest++;
	index_src++;
	while (src[index_src])
	{
		dest[index_dest] = src[index_src];
		index_src++;
		index_dest++;
	}
	return (dest);
}
