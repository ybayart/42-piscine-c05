/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 17:43:24 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/08 17:35:50 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt_recur(int nb, int i)
{
	if (nb > 2147395600)
		return (0);
	if (i * i == nb)
		return (i);
	if (i * i < nb)
		return (ft_sqrt_recur(nb, i + 1));
	return (0);
}

int		ft_sqrt(int nb)
{
	return (ft_sqrt_recur(nb, 0));
}
