/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammah <mohammah@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 01:16:04 by mohammah          #+#    #+#             */
/*   Updated: 2026/08/17 01:41:54 by mohammah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	inner_index;
	int	outer_index;

	outer_index = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[outer_index])
	{
		inner_index = 0;
		while (str[outer_index + inner_index] == to_find[inner_index])
		{
			inner_index++;
			if (to_find[inner_index] == '\0')
				return (&str[outer_index]);
		}
		outer_index++;
	}
	return (0);
}
