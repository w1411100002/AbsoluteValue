#include <cxxtest/TestSuite.h>

extern const char* absoluteValueMain(int argc, char** argv);

class AbsoluteValueTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_SimpleIOCompare(){
		char* argv[] = {};
		const char* message = absoluteValueMain(sizeof(argv), argv);

		TS_ASSERT_EQUALS("Hello world\n", message);
	}
	
};