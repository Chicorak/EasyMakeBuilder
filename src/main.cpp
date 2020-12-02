#include "string"
#include "fstream"
#include "iostream"
#include "thread"
#include "chrono"
#include <rang.hpp>


int main() 
{   
    bool op = true;
    std::string ProjectName;
    std::string Compiler;
    std::string Output;
    std::string Source;
    std::string Include;
    std::string CompilerOptions; 

    std::cout << rang::style::bold << "EasyMakeBuilder" << std::endl << rang::style::reset  << "//Made By CodePoison;" << std::endl << std::endl << std::endl;
    
    
    std::cout << rang::style::italic  << "Name of Project: ";
    std::cin >> ProjectName; 
    
    std::cout << rang::style::italic << "Compiler: ";
    std::cin >> Compiler; 
    
    std::cout << rang::style::italic << "Output File Name: ";    
    std::cin >> Output; 
    
    std::cout << rang::style::italic << "Sources (example: src/*.c): ";    
    std::cin >> Source;
    
    std::cout << rang::style::italic << "Include Folder: ";    
    std::cin >> Include;
    
    std::cout << rang::style::italic << "Extra Compiler Options ( sperated by space ): ";    
    while(op == true) 
    {   
        std::cin.get();
        if (std::cin.get() == '\n')
        {
            op = false;
        }

    }
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
