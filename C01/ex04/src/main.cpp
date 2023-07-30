/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 03:08:40 by geudes            #+#    #+#             */
/*   Updated: 2023/07/30 00:33:58 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int sed(std::string file_name, std::string toreplace, std::string replace)
{
    std::ifstream ifile;
    std::ofstream ofile;
    std::string   ofile_name;
    std::string line;
    size_t      found;
    
    ifile.open(file_name.data());
    if (!ifile.is_open())
    {
        std::cerr << "Cant open input file" << std::endl;
        return (1);
    }
    ofile_name = file_name + ".replace";
    ofile.open(ofile_name.data(), std::ios::trunc);
    if (!ofile.is_open())
    {
        std::cerr << "Cant open output file" << std::endl;
        return (2);
    }
    while (std::getline(ifile, line))
    {
        found = 0;
        do
        {
            found = line.find(toreplace, found + (found != 0) ? replace.size() : 0);
            if (found != std::string::npos)
            {
                line = line.erase(found, toreplace.length());
                line = line.insert(found, replace);
            }
        } while(found != std::string::npos);
        ofile << line << std::endl;
    }
    ifile.close();
    ofile.flush();
    ofile.close();
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        sed(av[1], av[2], av[3]);
    }
    else
    {
        std::cout << "Usage:" << std::endl;
        std::cout << "./sed FILE TOREPLACE REPLACE" << std::endl;
    }
    return (0);
}