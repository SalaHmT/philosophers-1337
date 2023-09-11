/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph_puting_forks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:05:57 by shamsate          #+#    #+#             */
/*   Updated: 2023/09/11 17:42:25 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/philo.h"

// Function representing the philosopher putting down forks
void philo_puts_forks(t_ph *_ph) {
    // Unlock the mutex for the current philosopher's fork
    if (pthread_mutex_unlock(&_ph->forks) != 0) {
        return; // Return if mutex unlock fails
    }

    // Unlock the mutex for the next philosopher's fork
    if (pthread_mutex_unlock(&_ph->next->forks) != 0) {
        return; // Return if mutex unlock fails
    }
}
