#include "adder.h"
#include "lib1.h"

int main() {
  Hello h;
  h.hello();
  int res = adder(1, 2);
  std::cout << "res: " << res << std::endl;
}
