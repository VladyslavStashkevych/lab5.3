#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.3/lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 {
	TEST_CLASS(UnitTest1) {
public:

		TEST_METHOD(TestMethod1) {
			double testVar = f(0);
			Assert::AreEqual(1., testVar);
		}
	};
}
