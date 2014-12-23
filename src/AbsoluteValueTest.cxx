/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_AbsoluteValueTest_init = false;
#include "/var/www/html/codeit/workspace/AbsoluteValue_exercise/src/AbsoluteValueTest.h"

static AbsoluteValueTest suite_AbsoluteValueTest;

static CxxTest::List Tests_AbsoluteValueTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AbsoluteValueTest( "/var/www/html/codeit/workspace/AbsoluteValue_exercise/src/AbsoluteValueTest.h", 5, "AbsoluteValueTest", suite_AbsoluteValueTest, Tests_AbsoluteValueTest );

static class TestDescription_suite_AbsoluteValueTest_test_SimpleIOCompare : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AbsoluteValueTest_test_SimpleIOCompare() : CxxTest::RealTestDescription( Tests_AbsoluteValueTest, suiteDescription_AbsoluteValueTest, 14, "test_SimpleIOCompare" ) {}
 void runTest() { suite_AbsoluteValueTest.test_SimpleIOCompare(); }
} testDescription_suite_AbsoluteValueTest_test_SimpleIOCompare;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
