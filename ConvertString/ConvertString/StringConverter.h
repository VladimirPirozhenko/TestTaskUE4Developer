#pragma once
#include <string>
#include <vector>
class StringConverter
{
public:

	StringConverter(char repeatingSymbolReplacement, char nonRepeatingSymbolReplacement);
	~StringConverter();
	std::string ConvertString(std::string stringToConvert);

private:

	char RepeatingSymbolReplacement;
	char NonRepeatingSymbolReplacement;
};

