/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("abc");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, capital_letter_pallindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aA");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ababa");
    ASSERT_TRUE(actual);
}

TEST(sortDescending, descending)
{
    Practice obj;
    int a = 3;
    int b = 2;
    int c = 1
    obj.sortDescending(a, b, c);
    ASSERT_TRUE(a == 3 && b == 2 && c == 3);
}

TEST(sortDescending, ascending)
{
    Practice obj;
    int a = 1;
    int b = 2;
    int c = 3;
    obj.sortDescending(a, b, c);
    ASSERT_TRUE(a == 3 && b == 2 && c == 3);
}

TEST(sortDescending, middle_first)
{
    Practice obj;
    int a = 2;
    int b = 3;
    int c = 1
    obj.sortDescending(a, b, c);
    ASSERT_TRUE(a == 3 && b == 2 && c == 3);
}
