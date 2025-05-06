/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:27:05 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/13 19:22:02 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void getNewLine(std::string &line, std::string first, std::string second, bool &replaced)
{
    size_t startPos = 0;
    replaced = false;

    while ((startPos = line.find(first, startPos)) != std::string::npos)
    {
        line = line.substr(0, startPos) + second + line.substr(startPos + first.length());
        startPos += second.length();
        replaced = true;
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./replace file_in string1 string2" << std::endl;
        return 1; 
    }

    std::string in_file = argv[1];
    std::string first = argv[2];
    std::string second = argv[3];
    std::string line;
    std::string out_file = in_file + ".replace";

    std::ifstream input(in_file.c_str());
    if (!input.is_open())
    {
        std::cerr << "Error: cannot open input file '" << in_file << "'." << std::endl;
        return 1; 
    }

    std::ofstream output(out_file.c_str());
    if (!output.is_open())
    {
        std::cerr << "Error: cannot create output file '" << out_file << "'." << std::endl;
        input.close();
        return 1;
    }

    bool replacements = false;
    while (std::getline(input, line))
    {
        bool replaced = false;
        getNewLine(line, first, second, replaced);

        if (replaced)
        {
            replacements = true;
        }

        output << line;

        // Evitar agregar un salto de línea extra al final del archivo
        if (!input.eof())
        {
            output << std::endl;
        }
    }

    // Verificar si hubo errores al leer el archivo
    if (input.bad())
    {
        std::cerr << "Error: an error occurred while reading the file '" << in_file << "'." << std::endl;
        input.close();
        output.close();
        return 1;
    }

    if (!replacements)
    {
        std::cout << "No occurrences were found in the file." << std::endl;
    }

    // Cerrar archivos
    input.close();
    output.close();

    std::cout << "Replacement complete." << std::endl;
    return 0;
}



