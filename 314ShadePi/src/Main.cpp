#include "pch.h"
#include "Main.h"

int main()
{
    fndataManipulation();
    {
        Main Program = Main("Program");
        Program.fMain();
    }
    return 0;
}

Main::Main(const char* _name)
    : m_Name(_name)
{

}

int Main::fMain()
{
    std::cout << "Hello World!";
    std::cin.get();
    std::cout << std::endl << "Instance Name Is: " << m_Name;
    std::cin.get();
    return 0;
}
