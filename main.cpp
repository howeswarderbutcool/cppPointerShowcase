#include <cstdlib>
#include <iostream>

int main()
{
    int ivar;
    int ivar2; 
    int* pntr = &ivar; 
    std::cout << "<<--------------------------------------------------->> \n";
    std::cout << "Lets read from a pointer!! \n";
    std::cout << "<<--------------------------------------------------->> \n";
    std::cout << "Enter a Number: ";
    std::cin >> ivar;
    if(std::cin.fail())
        return EXIT_FAILURE;
    std::cout << "ivar value: " << ivar << '\n'; //PRINTS ivar AND POINTER TO ivar!!
    std::cout << "ivar address: " << &ivar << '\n';
    std::cout << "pointer address: " << &pntr << '\n';
    std::cout << "point to ivar value: " << *pntr << '\n';
    std::cout << "point to ivar address: " << pntr << '\n';
    std::cout << "<<--------------------------------------------------->> \n";
    std::cout << "Lets change the Value of ivar \n";
    std::cout << "<<--------------------------------------------------->> \n";
    std::cout << "Enter a new Value for ivar: ";
    std::cin >> ivar;   //ivar GETS NEW VALUE!!
    if(std::cin.fail())
        return EXIT_FAILURE;
    std::cout << "ivar value: " << ivar << '\n'; //PRINTS THE NEW VALUE OF ivar AND THE POINTER!!
    std::cout << "ivar address: " << &ivar << '\n';
    std::cout << "pointer address: " << &pntr << '\n';
    std::cout << "point to ivar value: " << *pntr << '\n';
    std::cout << "point to ivar address: " << pntr << '\n';
    std::cout << "<<--------------------------------------------------->> \n";
    std::cout << "Lets change the value of the pointer! \n";
    std::cout << "<<--------------------------------------------------->> \n";
    std::cout << "Enter a new Value for the pointer: ";
    std::cin >> *pntr;  //THE POINTER GETS A NEW VALUE!!
    if(std::cin.fail())
        return EXIT_FAILURE;
    std::cout << "ivar value: " << ivar << '\n'; //PRINTS VALUE OF ivar AND THE POINTER AFTER CHANGING THE VALUE OF THE POINTER!!
    std::cout << "ivar address: " << &ivar << '\n';
    std::cout << "pointer address: " << &pntr << '\n';
    std::cout << "point to ivar value: " << *pntr << '\n';
    std::cout << "point to ivar address: " << pntr << '\n';
    std::cout << "<<--------------------------------------------------->> \n";
    std::cout << "Lets add another Variable! ivar2\n";
    std::cout << "<<--------------------------------------------------->> \n";      
    std::cout << "Enter a Value for ivar2: ";
    std::cin >> ivar2;
    if(std::cin.fail())
        return EXIT_FAILURE;
    std::cout << "ivar value: " << ivar << '\n'; //PRINTS VALUE OF ivar AND THE POINTER AFTER CHANGING THE VALUE OF THE POINTER!!
    std::cout << "ivar address: " << &ivar << '\n';
    std::cout << "pointer address: " << &pntr << '\n';
    std::cout << "point to ivar value: " << *pntr << '\n';
    std::cout << "point to ivar address: " << pntr << '\n';
    std::cout << "ivar2 value: " << ivar2 << '\n';
    std::cout << "ivar2 address: " << &ivar2 << '\n';
    std::cout << "<<--------------------------------------------------->> \n";
    std::cout << "Lets Point the Pointer to the ivar2 address!\n";
    std::cout << "<<--------------------------------------------------->> \n";      
    pntr = &ivar2; //HERE WE CHANGE THE POINTER FROM THE ivar ADDRESS TO THE ivar2 ADDRESS!!  
    std::cout << "Enter a Value for the Pointer: ";
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

    return EXIT_SUCCESS;
}