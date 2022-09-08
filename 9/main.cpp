#include <iostream>

int main() {
#ifdef EX2
  std::cout << "Compile flag EX2 set\n";
#endif

#ifdef EX3
  std::cout << "Compile flag EX3 set\n";
#endif
}
