/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 10:38:00 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/16 11:59:10 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_init_tab(char **tab, int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			tab[i][j] = '0';
			j++;
		}
		i++;
	}
}

char	*ft_getstr(char **str, int p0, int isrow)
{
	char *tab;
	tab = (char*)malloc(5);
	int i = 0;

	while (i < 4)
	{
		if (isrow)
			tab[i] = str[p0][i];
		else
			tab[i] = str[i][p0];
		i++;
	}
	tab[i] = 0;
	return (tab);
}

void	ft_putstr(char **str, int p0, int isrow, char *str2)
{
	int i = 0;

	while (i < 4)
	{
		if (isrow)
			str[p0][i] = str2[i];
		else
			str[i][p0] = str2[i];
		i++;
	}	
}
