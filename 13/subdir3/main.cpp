#include "lib1/hello.h"
#include "lib2/adder.h"

int main() {
  hello h;
  h.time();
  adder(1, 2, 3);
}
