#include "palindrome.h"
#define BOOST_TEST_MODULE VsidCommonTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(palindrome_tests)

BOOST_AUTO_TEST_CASE(is_palindrome) {
  std::string s = "abcdcba";
  BOOST_CHECK_EQUAL(isPalindrome(s), true);
}

BOOST_AUTO_TEST_SUITE_END()
