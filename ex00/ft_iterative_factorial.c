/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 15:23:30 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/05 15:34:08 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 0;
	res = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
	{
		res *= i;
	}
	return (res);
}
