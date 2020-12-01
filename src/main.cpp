#include "string"
#include "fstream"
#include "iomanip"
#include "iostream"
#include <termcolor.hpp>
#include <json.hpp>

using json = nlohmann::json;

int main() 
{
    std::string ProjectName;
    std::string Compiler;
    std::string Output;
    std::string Source;
    std::string Include;
    std::string CompilerOptions; 
    nlohmann::json j;

    std::cout << termcolor::blue << termcolor::bold << "EasyMakeBuilder" << std::endl << termcolor::italic << "//Made By CodePoison;" << std::endl << std::endl << std::endl;
    
    
    std::cout << termcolor::green << "Name of Project: ";
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


    j["project"] = ProjectName;
    j["compiler"] = Compiler;
    j["output"] = Output;
    j["sources"] = Source;
    j["include"] = Include;
    j["compiler_options"] = CompilerOptions;

    std::ofstream o("autobuild.ezmk");
    o << std::setw(4) << j << std::endl;
}
