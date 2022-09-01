
#include "stdafx.h"
#include "StringConverter.h"
#include <iostream> 

int main()
{
	StringConverter converter(')','(');
	std::cout << "din => " << converter.ConvertString("din") << "\n";
	std::cout << "Success => " << converter.ConvertString("Success") << "\n";
	std::cout << "recede => " << converter.ConvertString("recede") << "\n";
	std::cout << "(( @ => " << converter.ConvertString("(( @") << "\n";
	std::string userInput;
	while (userInput != "q")
	{
		std::cout << "Waiting for string to convert...\n";
		std::cin >> userInput;
		std::cout << "Conversion result: " << converter.ConvertString(userInput) << "\n\n";
	}
    return 0;
}

