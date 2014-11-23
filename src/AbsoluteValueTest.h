#include <cxxtest/TestSuite.h>

extern float absoluteValueMain(float N);

class AbsoluteValueTest : public CxxTest::TestSuite
{
public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_SimpleIOCompare(){
		float f = absoluteValueMain(-90.001);
		TS_ASSERT_EQUALS(90.0010, f);
	}
	
};