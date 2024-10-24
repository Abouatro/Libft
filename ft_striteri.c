/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:15:59 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/24 09:16:03 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int index;
    unsigned int len;

    index = 0;
    len = ft_strlen(s);
    while(index < len)
    {
        (*f)(index,s);
        s++;
        index++;
    }
}