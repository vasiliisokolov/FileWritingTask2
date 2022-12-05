#include <iostream>
#include <fstream>
#include <ctime>

int main()
{
    std::srand(std::time(nullptr));
    int width, height;
    std::ofstream pic("pic.txt", std::ios::out);
    std::cout << "Enter width and height of the picture!" << std::endl;
    std::cin >> width >> height;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            pic << rand()%2;
        }
        pic << std::endl;
    }
    pic.close();
}

