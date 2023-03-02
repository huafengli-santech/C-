#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include "Test.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_CLASS_INITIALIZE(setUp);
		TEST_CLASS_CLEANUP(tearDown);
		TEST_METHOD_CLEANUP(MethodClear);
		TEST_METHOD(add);
	private:
		Test c;
	};
}
