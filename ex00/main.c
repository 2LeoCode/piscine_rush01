/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:47:06 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/15 16:50:28 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_recup_args(char *args);
char	**ft_generate_tab();

int main(int argc, char **argv)
{
	char *values;
	char **tab;

	if (argc > 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	values = ft_recup_args(argv[1]);
	tab = ft_generate_tab();
	
	return (0);
}
