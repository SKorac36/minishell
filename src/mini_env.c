/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 11:08:05 by skorac            #+#    #+#             */
/*   Updated: 2018/09/27 12:41:37 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_putenv(char **env)
{
	int i;

	i = 0;
	while (env[i])
	{
		ft_putendl(env[i]);
		i++;
	}	
}
