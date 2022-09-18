// a header-only lib
#pragma once

#include <iostream>

class Hello {
public:
  void hello() { std::cout << "<lib1>:hello from a header-only library.\n"; }
};
