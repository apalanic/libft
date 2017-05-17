/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:32:30 by apalanic          #+#    #+#             */
/*   Updated: 2016/11/25 11:36:36 by apalanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int n)
{
	return ((n > 64 && n < 91) || (n > 96 && n < 123) ||
			(n >= '0' && n <= '9'));
}
