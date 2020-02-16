/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:51:17 by lsuardi           #+#    #+#             */
/*   Updated: 2020/02/16 16:58:40 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char    *ft_recup_args(char *args);
char    **ft_generate_tab(int x, int y);
int		ft_check_values(char *val);
void    ft_display_tab(char **tab);
void    ft_init_tab(char **tab, int c, int y);
char    *ft_getstr(char **str, int p0, int isrow);
void    ft_putstr(char **str, int p0, int isrow, char *str2);
int		ft_strlen(char *str);
int		ft_switch(char **tab, char *val, int n);
int		ft_calc_pos(char **tab, int k, char *val);
int		ft_switch1(char **tab, char *val, int n);
int		ft_switch2(char **tab, char *val, int n);
int		ft_switch3(char **tab, char *val, int n);
int		ft_checkTableau(char **tab);
