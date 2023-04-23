#include "commandLineInterface.h"

#include <iostream>
#include <string>

std::string CommandLineInterface::getInputFromUser(){
    std::string inputStr;
    std::cin >> inputStr;
    return inputStr;
}

void CommandLineInterface::outputToUser(std::string strToPrint){
    std::cout << strToPrint;
}

