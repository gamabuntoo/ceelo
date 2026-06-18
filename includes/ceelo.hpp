/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ceelo.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:46:42 by gule-bat          #+#    #+#             */
/*   Updated: 2026/06/18 19:28:43 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <limits>
#include <map>
#include <stack>


class ceelo
{
	private:
		int											player_nb;
		bool										game_status; // on or off depending on zhqts going on
		std::map<unsigned int[3], unsigned int[3]> 	status;	// status of dice  (games | result per match)
		std::map<unsigned int, unsigned int> 		bet; 			// mise par joueur de la table
		std::map<unsigned int, unsigned int> 		bank; // player id and amount of $ of the player
		unsigned int								bank[2];								// bank player info (player id + bet)
	public:
		ceelo();
		ceelo(int pl_nb);
		void	setup_game();

};