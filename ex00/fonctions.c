/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:57:44 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/15 16:39:24 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_recup_args(char *args)
{
	int i;
	int j;
	char *tab;

	tab = (char*)malloc(17);
	i = 0;
	j = 0;
	if (ft_strlen(args) > 31)
		return (0);

	while(args[i])
	{
		if(args[i] != ' ')
		{
			tab[j] = args[i];
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_generate_tab()
{
	char **tab;
	int i = -1;

	tab = (char**)malloc(5);
	while (++i < 4)
		tab[i] = (char*)malloc(5);
	tab[2][2] = 'o';
	return (tab);
}
