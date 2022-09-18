#include "palindrome.h"

bool isPalindrome(const std::string &s) {
  /* return s == std::string(s.rbegin(), s.rend()); */
  auto b = s.begin();
  auto e = s.end();
  while (b < e) {
    if (*(b++) != *(--e))
      return false;
  }
  return true;
}
