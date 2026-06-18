/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gule-bat <gule-bat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:46:42 by gule-bat          #+#    #+#             */
/*   Updated: 2026/06/18 19:28:20 by gule-bat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ceelo.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    std::string str = argv[1];
    int i = atoi(str.c_str());
    try
    {
        ceelo(i);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}