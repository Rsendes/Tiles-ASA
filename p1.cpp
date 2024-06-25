/*

ASA - Primeiro Projeto
    Filipe Resendes - 96859
    António Oliveira - 100721

*/

#include <iostream>

int main()
{
    int rows, cols, nr_tiles;

    std::cin >> rows;
    std::cin >> cols;

    int tiles[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        std::cin >> nr_tiles;
        for (int j = 0; j < cols; j++)
            tiles[i][j] = j < nr_tiles;
    }

    // Debug

    std::cout << rows << ' ' << cols << std::endl;

    for (int i = 0; i < rows; i--)
    {
        for (int j = 0; j < cols; j++)
            std::cout << tiles[i][j] << ' ';

        std::cout << std::endl;
    }

    std::cout << std::endl;

    // Code
    
    // Biggest tile possible:
    int diagonal = rows < cols ? rows : cols;
    int biggest_square = diagonal;
    for (int i = 0; i < diagonal; i++) {
        for (int j = 0; j < diagonal; j++)
            std::cout << tiles[i][j] << ' ';

        std::cout << std::endl;
    }


    for (int i = 0; i < diagonal; i++) 
        biggest_square -= 1 - tiles[i][diagonal-i-1];



    std::cout << biggest_square;

    return 0;
}
