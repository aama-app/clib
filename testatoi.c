/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuyu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 18:46:16 by seuyu             #+#    #+#             */
/*   Updated: 2020/06/30 18:48:55 by seuyu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main()
{
	char a[30] = "    -323";
	char b[30] = "-323sds";
	char c[30] = "+323";
	char d[30] = "--323";
	printf("%d %d %d %d\n", atoi(a), atoi(b), atoi(c), atoi(d));
}
