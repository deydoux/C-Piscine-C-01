/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:43:10 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/06 19:35:02 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmpa;

	tmpa = *a;
	*a = *b;
	*b = tmpa;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	size--;
	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i]);
		i++;
	}
}
