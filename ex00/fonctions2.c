/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 10:38:00 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/16 19:30:58 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "header.h"

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
	char	*tab;
	int		i;

	i = 0;
	tab = (char*)malloc(5);
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
	int i;

	i = 0;
	while (i < 4)
	{
		if (isrow)
			str[p0][i] = str2[i];
		else
			str[i][p0] = str2[i];
		i++;
	}
}

/*int		ft_switch(char **tab, char *val, int n)
{
	switch (val[n])
	{
		case '1':
			ft_switch1(tab, val, n);
			break ;
		case '2':
			ft_switch2(tab, val, n);
			break ;
		case '3':
			ft_switch3(tab, val, n);
			break ;
		case '4':
			if (val[n + 4] == '1')
				ft_calc_4_1(tab);
			else
				return (0);
	}
}
int		ft_calc_pos(char **tab, int k, char *val)
{
	int i;

	i = 0;
	if (ft_checkTableau(tab))
		return (0);
	else
	{
		ft_switch(tab, val, k);
		k += 1;
		ft_calc_pos(tab, k, val);
	}
}*/
