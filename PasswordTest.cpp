/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, no_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual);
}

TEST(PasswordTest, only_letters_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("ZdkSkenSiQPgn");
	ASSERT_EQ(13, actual);
}

TEST(PasswordTest, only_numbers_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("0138941784");
	ASSERT_EQ(10, actual);
}
TEST(PasswordTest, single_number_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("0");
	ASSERT_EQ(1, actual);
}