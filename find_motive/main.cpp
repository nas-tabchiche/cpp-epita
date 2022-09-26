#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ifstream file(argv[1]);
    if (file.fail())
    {
        std::cout << "The file " << argv[1] << " could not be opened."
            << std::endl;
        return 1;
    }
    int count = 0;
    std::string word;
    while (file >> word)
        if (word.find(argv[2]) != std::string::npos)
            count++;
    file.close();
    std::cout << "The file " << argv[1] << " contains " << count << " words containing the motive " << argv[2] << "." << std::endl;
    return 0;
}
