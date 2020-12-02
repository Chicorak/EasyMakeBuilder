#include "string"
#include "fstream"
#include "iostream"
#include <termcolor.hpp>


int main() 
{   
   
    std::string ProjectName;
    std::string Compiler;
    std::string Output;
    std::string Source;
    std::string Include;
    std::string CompilerOptions; 

    std::cout << termcolor::blue << termcolor::bold << "EasyMakeBuilder" << std::endl  << "//Made By CodePoison;" << std::endl << std::endl << std::endl;
    
    
    std::cout << termcolor::reset << termcolor::green << "Name of Project: ";
    std::cin >> ProjectName; 
    
    std::cout << termcolor::green << "Compiler: ";
    std::cin >> Compiler; 
    
    std::cout << termcolor::green << "Output File Name: ";    
    std::cin >> Output; 
    
    std::cout << termcolor::green << "Sources (example: src/*c): ";    
    std::cin >> Source;
    
    std::cout << termcolor::green << "Include Folder: ";    
    std::cin >> Include;
    
    std::cout << termcolor::green << "Extra Compiler Options ( sperated by space ): ";    
    std::cin >> CompilerOptions;

    std::ofstream o("autobuild.ezmk");
    o << "{" << std::endl;
    o << "  \"Project\":\"" << ProjectName << "\"," << std::endl;
    o << "  \"compiler\":\"" << Compiler << "\"," << std::endl;
    o << "  \"output\":\"" << Output << "\"," << std::endl;
    o << std::endl;
    o << "  \"includes\": [" << std::endl;
    o << "      \"" << Include << "\"" << std::endl; 
    o << "  ],";
    o << std::endl;
    o << "  \"sources\": [" << std::endl;
    o << "    \"" << Source << "\"" << std::endl; 
    o << "  ],";
    o << std::endl;
    o << "  \"compiler_options\": [" << std::endl;
    o << "    \"" << CompilerOptions << "\"" << std::endl; 
    o << "  ],";
    o << "}" << std::endl;
}
