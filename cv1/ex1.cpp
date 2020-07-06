#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string x;
    std::string c = "";
    std::cout << "Give a number and name of the file:\n";
    std::cin >> x >> c;
    std::cout<<"Number:"<< x <<" Name of file: "<< c<<"\n";
    std::ofstream outFile(c);
    std::string line;

    outFile << x << std::endl;
    outFile.close();

    return 0;
}