/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:06:19 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/02/07 18:55:30 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_philo	*philo;
	t_data	data;

	if ((argc < 5 || argc > 6))
		return (throw_error("Error: Number of arguments invalid\n"));
	data.params = parse_arguments(argc - 1, argv);
	if (!data.params)
		return (throw_error("Error: Some arguments failed\n"));
	if (init(&philo, &data))
		return (throw_error("Error: Could not initializate threads"));
	if (create_philos(philo))
		return (throw_error("Error: There was an error"));
	if (destroy_struct(philo, &data))
		return (throw_error("Error: A problem in joins threads occurs"));
	return (0);
}
