/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 14:26:57 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/16 17:08:13 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_switch1(char **tab, char *val, int n)
{
	switch(val[n + 4])
	{
		case '2':
			ft_calc_1_2(tab);
			break ;
		case '3':
			ft_calc_1_3(tab);
			break ;
		case '4':
			ft_calc_1_4(tab);
			break ;
		default:
			return (0);
	}
}

int		ft_switch2(char **tab, char *val, int n)
{
	switch(val[n + 4])
	{
		case '1':
			ft_calc_2_1(tab);
			break ;
		case '2':
			ft_calc_2_2(tab);
			break ;
		case '3':
			ft_calc_2_3(tab);
			break ;
		default:
			return (0);
	}
}

int		ft_switch3(char **tab, char *val, int n)
{
	switch(val[n + 4])
	{
		case '1':
			ft_calc_3_1(tab);
			break ;
		case '2':
			ft_calc_3_2(tab);
			break ;
		default:
			return (0);
	}
}

int		ft_checkTableau(char **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if(tab[i][j] != '1' && tab[i][j] != '2' && tab[i][j] != '3' && tab[i][j] != '4')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_generate_poss(void)
{
	char **_12;
	char **_13;
	char **_14;
	char **_22;
	char **_23;
	int i;

	i = -1;
	_12 = malloc(sizeof(char*) * 2)
		while (++i < 2)
			_12[i] = malloc(5);
	i = -1;
	_13 = malloc(sizeof(char*) * 3)
		while (++i < 3)
			_13[i] = malloc(5);
}
