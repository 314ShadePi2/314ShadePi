#include "pch.h"
#include "Main.h"

int main()
{
    {
        Main<const char*> Program = Main<const char*>("Program");
        Program.fMain("Main Program Started");
    }
    return 0;
}

template<typename T>
Main<T>::Main(T _name)
    : m_Name(_name)
{
    initSPstdMacros("314ShadePi");
    std::cout << std::endl;
    initSPDataManipulation("314ShadePi");
    std::cout << std::endl;
}

template<typename T>
int Main<T>::fMain(const char* _message)
{
    std::cout << _message;
    std::cin.get();
    std::cout << std::endl << "Instance Name Is: " << m_Name;
    std::cin.get();
    return 0;
}
