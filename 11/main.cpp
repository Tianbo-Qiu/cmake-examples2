#include <boost/filesystem.hpp>
#include <boost/shared_ptr.hpp>
#include <iostream>

int main() {
  std::cout << "hello boost" << std::endl;

  boost::shared_ptr<int> isp(new int(4));

  boost::filesystem::path path = "/usr/local/share/";

  std::cout << "is path relative: " << path.is_relative() << std::endl;
}
