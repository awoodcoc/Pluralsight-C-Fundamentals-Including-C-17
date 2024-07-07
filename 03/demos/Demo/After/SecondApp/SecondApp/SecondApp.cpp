// SecondApp.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Tell me a secret: " << std::endl;
    std::string secret;
    std::cin >> secret;
    std::cout << "Here is your secret: " << secret << std::endl;

    return 0;
}
