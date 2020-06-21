/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhumalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 16:01:05 by ikhumalo          #+#    #+#             */
/*   Updated: 2020/06/21 16:18:51 by ikhumalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod){

    
 int answerAB;
 int remainderAB;
   answerAB = a/b;

   remainderAB = a % b;

   div = &answerAB;

   mod = &remainderAB;

}

int main(){

   int a;
   int b;
   int *div;
   int *mod;

   ft_div_mod(a,b,div,mod);


}
