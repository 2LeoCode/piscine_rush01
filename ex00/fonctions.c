/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:57:44 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/16 12:19:16 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_display_tab(char **arr)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &arr[i][j], 1);
			if (j != 3)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			j++;
		}
		i++;
	}
}

int		ft_check_values(char *val)
{
	int i;

	i = 0;
	if (ft_strlen(val) != 31)
		return (1);
	while (i < 31)
	{
		if (val[i] != '1' && val[i] != '2' && val[i] != '3' && val[i] != '4')
			return (1);
		i += 2;
	}
	i -= 3;
	while (i > 0)
	{
		if (val[i] != ' ')
			return (1);
		i -= 2;
	}
	return (0);
}

char	*ft_recup_args(char *args)
{
	int		i;
	int		j;
	char	*tab;

	tab = (char*)malloc(17);
	i = 0;
	j = 0;
	while (args[i])
	{
	if (args[i] != ' ')
		{
			tab[j] = args[i];
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_generate_tab(int x, int y)
{
	char	**tab;
	int		i;

	i = -1;
	tab = (char**)malloc(sizeof(char*) * y);
	while (++i < y)
		tab[i] = (char*)malloc(sizeof(char) * (x + 1));
	i = -1;
	while (++i < y)
		tab[i][x] = 0;
	return (tab);
}
