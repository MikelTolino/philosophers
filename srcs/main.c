/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:06:19 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/22 12:00:27 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int argc, char **argv)
{
//	t_philo philo;
	unsigned int	*option;
	printf("%i\n", argc);

	if ((argc < 5 || argc > 6))
		return (-1);
	option = (unsigned int *)malloc(sizeof(unsigned int) * (argc - 1));
	if (parse_arguments(argv, &option) < 0)
		return (-1);
	//test(option);
	return (0);
}