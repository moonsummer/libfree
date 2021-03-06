/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_reduce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 15:23:19 by ekorley           #+#    #+#             */
/*   Updated: 2016/10/01 08:45:38 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Reduces all items of a matrix into a singular int value.
*/

int		matrix_reduce(t_matrix *matrix, int (*applyf)(int, int))
{
	int		i;
	int		j;
	int		memo;

	memo = 0;
	i = -1;
	while (++i < matrix->height)
	{
		j = -1;
		while (++j < matrix->width)
			memo = applyf(memo, matrix->board[i][j]);
	}
	return (memo);
}
