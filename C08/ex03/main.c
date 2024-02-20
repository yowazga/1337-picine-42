/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:56:36 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 17:58:22 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

#include <stdio.h>
int main(void)
{
    t_point point;
    set_point(&point);
    printf("%d, %d\n", point.x, point.y); // we use printf to print the values of point.x and point.y
    return (0);
}