/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:47:06 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/16 19:29:48 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "header.h"

int		main(int argc, char **argv)
{
	char *values;
	char **tab;

	if (ft_check_values(argv[1]) || argc > 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	values = ft_recup_args(argv[1]);
	tab = ft_generate_tab(4, 4);
	ft_init_tab(tab, 4, 4);
	ft_putstr(tab, 0, 0, "1234");
	ft_putstr(tab, 1, 0, "2341");
	ft_putstr(tab, 2, 0, "3412");
	ft_putstr(tab, 3, 0, "4123");
	ft_display_tab(tab);
	free(values);
	free(tab);
	return (0);
}
