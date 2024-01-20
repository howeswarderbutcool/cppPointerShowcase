#include <cstdlib>
#include <iostream>

int main()
{
    int ivar;
    int ivar2; 
    int* pntr = &ivar; 
    std::cout << "Lets read from a pointer!! \n";
    std::cout << "------------------------------------------------ \n";
    std::cout << "Enter a Number: ";
    std::cin >> ivar;
    if(std::cin.fail())
        return EXIT_FAILURE;
    std::cout << "ivar value: " << ivar << '\n'; //PRINTS ivar AND POINTER TO ivar!!
    std::cout << "ivar address: " << &ivar << '\n';
    std::cout << "pointer address: " << &pntr << '\n';
    std::cout << "point to ivar value: " << *pntr << '\n';
    std::cout << "point to ivar address: " << pntr << '\n';
    std::cout << "------------------------------------------------ \n";
    std::cout << "Enter a new Value for ivar: ";
    std::cin >> ivar;   //ivar GETS NEW VALUE!!
    if(std::cin.fail())
        return EXIT_FAILURE;
    std::cout << "ivar value: " << ivar << '\n'; //PRINTS THE NEW VALUE OF ivar AND THE POINTER!!
    std::cout << "ivar address: " << &ivar << '\n';
    std::cout << "pointer address: " << &pntr << '\n';
    std::cout << "point to ivar value: " << *pntr << '\n';
    std::cout << "point to ivar address: " << pntr << '\n';
    std::cout << "------------------------------------------------ \n";
    std::cout << "Enter a new Value for the pointer: ";
    std::cin >> *pntr;  //THE POINTER GETS A NEW VALUE!!
    if(std::cin.fail())
        return EXIT_FAILURE;
    std::cout << "ivar value: " << ivar << '\n'; //PRINTS VALUE OF ivar AND THE POINTER AFTER CHANGING THE VALUE OF THE POINTER!!
    std::cout << "ivar address: " << &ivar << '\n';
    std::cout << "pointer address: " << &pntr << '\n';
    std::cout << "point to ivar value: " << *pntr << '\n';
    std::cout << "point to ivar address: " << pntr << '\n';
    std::cout << "------------------------------------------------ \n";
    std::cout << "Lets try to change the Address of the pointer to a new one! \n";
    std::cout << "First lets point the Pointer to a new Address! \n";
    std::cout << "------------------------------------------------ \n";
    pntr = &ivar2; //HERE WE CHANGE THE POINTER FROM THE ivar ADDRESS TO THE ivar2 ADDRESS!!  
    std::cout << "Enter a new Value for the Pointer: ";
    std::cin >> *pntr;
    if(std::cin.fail())
        return EXIT_FAILURE;
    std::cout << "ivar value: " << ivar << '\n'; //PRINTS VALUE OF ivar AND THE POINTER AFTER CHANGING THE VALUE OF THE POINTER!!
    std::cout << "ivar address: " << &ivar << '\n';
    std::cout << "pointer address: " << &pntr << '\n';
    std::cout << "point to 'ivar' value: " << *pntr << "<-- here the pointer has now the value of ivar2! \n";
    std::cout << "point to 'ivar' address: " << pntr << "<-- here the pointer points to the address to the ivar2 address! \n";
    std::cout << "ivar2 value: " << ivar2 << '\n';
    std::cout << "ivar2 address: " << &ivar2 << '\n';

    std::cout << "------------------------------------------------ \n";
    std::cout << "NOW, let us change the Pointer address to an fixed Address! \n";
    std::cout << "(YOU MAY NEED TO CHANGE THE ADDRESS IF THE CODE WONT RUN!!!) \n";
    pntr = (int*)0x255fffd7c;
    std::cout << "Enter the Value of the new pointer! \n";
    std::cin >> *pntr;
    if(std::cin.fail())
        return EXIT_FAILURE;
    std::cout << "ivar value: " << ivar << '\n'; //PRINTS VALUE OF ivar AND THE POINTER AFTER CHANGING THE VALUE OF THE POINTER!!
    std::cout << "ivar address: " << &ivar << '\n';
    std::cout << "pointer address: " << &pntr << '\n';
    std::cout << "point to new int address value: " << *pntr << "<-- here the pointer has now the value of ivar2! \n";
    std::cout << "point to new int address: " << pntr << "<-- here the pointer points to the address to the ivar2 address! \n";
    std::cout << "ivar2 value: " << ivar2 << '\n';
    std::cout << "ivar2 address: " << &ivar2 << '\n';
    
    return EXIT_SUCCESS;
}