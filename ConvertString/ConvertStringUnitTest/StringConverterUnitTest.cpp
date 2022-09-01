#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConvertString/StringConverter.h"
#include "../ConvertString/StringConverter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ConvertStringUnitTest
{		
	TEST_CLASS(TestStringConverter)
	{
	public:
		
		TEST_METHOD(TestConvertString)
		{
			StringConverter converter(')','(');

			std::string convertedString = converter.ConvertString("Success");
			std::string expectedResult = ")())())";
			Assert::AreEqual(expectedResult, convertedString);

			convertedString = converter.ConvertString("din");
			expectedResult = "(((";
			Assert::AreEqual(expectedResult, convertedString);

			convertedString = converter.ConvertString("recede");
			expectedResult = "()()()";
			Assert::AreEqual(expectedResult, convertedString);

			convertedString = converter.ConvertString("(( @");
			expectedResult = "))((";
			Assert::AreEqual(expectedResult, convertedString);
		}
	};
}