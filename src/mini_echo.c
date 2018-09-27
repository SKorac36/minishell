/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_echo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 09:02:58 by skorac            #+#    #+#             */
/*   Updated: 2018/09/27 09:12:09 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	mini_echo(char **argv)
{
	size_t i;

	i = 1;
	while (argv[i])
	{
		ft_putstr((argv[i]));
		ft_putchar(' ');
		i++;
	}
	ft_putstr("\b\n");
}