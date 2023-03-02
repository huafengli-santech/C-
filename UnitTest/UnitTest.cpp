#include "UnitTest.h"
#include "pch.h"
void __stdcall UnitTest::UnitTest::setUp()
{
}

void __stdcall UnitTest::UnitTest::tearDown()
{
}

void UnitTest::UnitTest::MethodClear()
{
}

void UnitTest::UnitTest::add()
{
	int ret;
	c.Add(1,2,&ret);
	Assert::AreEqual(0, ret);
}
