/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:28:43 by jllarena          #+#    #+#             */
/*   Updated: 2025/01/10 11:45:15 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype> // Para std::toupper

/*int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        int i = 1;
        while (i < argc)
        {
            int j = 0;
            while (argv[i][j] != '\0')
            {
                std::cout << (char)std::toupper(argv[i][j]);
                j++;
            }
            i++;
        }
        std::cout << '\n';
    }
}*/

std::string mytoUpper(const std::string &str)
{
    std::string result;
    for (size_t i = 0; i < str.size();)
    {
        unsigned char c = str[i]; //evitar problemas con valores negativos

        if (c < 128) 
        {
            result += std::toupper(c); 
            i++;
        }
        else if ((c & 0xE0) == 0xC0) // carácter UTF-8 de 2 bytes
        {
            if (str.substr(i, 2) == "\xC3\xB1") //  "ñ" (C3 B1)
                result += "\xC3\x91";           // "Ñ" (C3 91)
            else
                result += str.substr(i, 2);
            i += 2;
        }
        else
        {
            result += str[i];
            i++;
        }
    }
    return (result);
}


int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::cout << mytoUpper(argv[i]);
        }
        std::cout << '\n';
    }
    return 0;
}
