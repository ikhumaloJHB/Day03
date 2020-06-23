/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhumalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:32:24 by ikhumalo          #+#    #+#             */
/*   Updated: 2020/06/23 14:31:25 by ikhumalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char *ft_strrev(char *str){

	int y = 0;
	int h = 0;
	int f = 0;
	char *rev;
    int newH;
	while(str[y] <= '\0'){
        newH = y++;

	}

	h = newH;

	while(f <= h){
      
		if(rev[f] == '0'){
	  	rev[f] = str[newH];
	   	newH--;
		}

		f++;
    }

	str = rev;
 
	return str;

}

