/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph_thinking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <shamsate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:29:58 by shamsate          #+#    #+#             */
/*   Updated: 2023/09/14 15:50:45 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/philo.h"

// Function for the philosopher to sleep and think
void ph_think(t_ph *_ph) 
{
    // Print a message indicating that the philosopher is sleeping
    print_msg(_ph, SLP);

    // Sleep for the specified time
    slp_time(_ph->inf_ph->t_sleep);

    // Print a message indicating that the philosopher is thinking
    print_msg(_ph, TK);
}
