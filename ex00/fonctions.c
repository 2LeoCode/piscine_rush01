/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:57:44 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/15 15:06:53 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char	*tab;
	int i;
	int j;

	tab = (char*)malloc(16);
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
	return (tab);
}
