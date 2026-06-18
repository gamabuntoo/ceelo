/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ceelo.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:46:42 by gule-bat          #+#    #+#             */
/*   Updated: 2026/06/18 13:44:53 by gule-bat         ###   ########.fr       */
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
		std::map<unsigned int[3], unsigned int[3]> status; // status of dice  (games | result per match)
		std::map<unsigned int, unsigned int> bet; // mise par joueur de la table
	public:
		ceelo(int playersnb, int )

}