#include "stdafx.h"
#include <algorithm>
#include "StringConverter.h"
#include <unordered_map>
#include <chrono>
#include <iostream>
#include <unordered_set>

StringConverter::StringConverter(char repeatingSymbolReplacement,char nonRepeatingSymbolReplacement)
{
	RepeatingSymbolReplacement = repeatingSymbolReplacement;
	NonRepeatingSymbolReplacement = nonRepeatingSymbolReplacement;
}

StringConverter::~StringConverter()
{
}

std::string StringConverter::ConvertString(std::string stringToConvert)
{
	std::unordered_map<char, int> charTable;

	std::transform(stringToConvert.begin(), stringToConvert.end(), stringToConvert.begin(),tolower);

	for (int i = 0; i < stringToConvert.length(); i++)
	{
		charTable[stringToConvert[i]]++;
	}

	std::string result = stringToConvert;
	for (auto it : charTable)
	{
		char symbolToReplace = it.first;
		int timesRepeated = it.second;

		char replacingSymbol = NonRepeatingSymbolReplacement;

		bool isRepeating = timesRepeated > 1;
		if (isRepeating)
		{
			replacingSymbol = RepeatingSymbolReplacement;	
		}

		size_t pos = stringToConvert.find(symbolToReplace, 0);
		while (pos != std::string::npos)
		{
			result[pos] = replacingSymbol;
			pos = stringToConvert.find(symbolToReplace, pos + 1);
		}
	}
	return result;
}
