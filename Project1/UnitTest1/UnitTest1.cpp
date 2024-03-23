#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(TestCapitalizeAfterDot)
    {
    public:

        TEST_METHOD(TestCapitalization)
        {
            std::string testString = "this is a test. another test.";

            std::string expectedString = "this is a test. Another test.";

            capitalizeAfterDot(testString);

            Assert::AreEqual(expectedString, testString);
        }
    };
}