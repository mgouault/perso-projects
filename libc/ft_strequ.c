/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouault <mgouault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:04:48 by mgouault          #+#    #+#             */
/*   Updated: 2015/03/17 13:40:55 by mgouault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

t_bool ft_strequ(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1 && s2) && (s1[i] && s2[i]) && (s1[i] == s2[i]))
		++i;
	if ((s1 && s2) && (!s1[i] && !s2[i]))
		return (TRUE);
	return (FALSE);
}
