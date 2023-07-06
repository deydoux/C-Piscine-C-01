/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:36:21 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/06 21:23:29 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmpa;
	
	tmpa = *a;
	*a = *b;
	*b = tmpa;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	before;

	index = 1;
	while (index < size)
	{
		before = index - 1;
		while (before >= 0 && tab[before] > tab[before + 1])
		{
			ft_swap(&tab[before], &tab[before + 1]);
			before--;
		}
		index++;
	}
}
