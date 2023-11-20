#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-08.2/PR-08.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081string
{
    TEST_CLASS(UnitTest081string)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int main(void);
            {
                string str = "a(b)c";
                string result = Remove(str);
                Assert::AreEqual(result.c_str(), "ac");
            }
        }
    };
}

