/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhumalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:30:15 by ikhumalo          #+#    #+#             */
/*   Updated: 2020/06/23 11:29:04 by ikhumalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int ft_strlen(char *str)
{
   int f = 0;

	while(str[f] != '\0')
	{
		f++;
	}
	return f;

}


