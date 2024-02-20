/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowazga <yowazga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:55:54 by yowazga           #+#    #+#             */
/*   Updated: 2024/02/20 17:55:56 by yowazga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "ft_abs.h"

int main() {
    int num = -42;
    int absNum = ABS(num);

    printf("The absolute value of %d is %d\n", num, absNum);

    return 0;
}