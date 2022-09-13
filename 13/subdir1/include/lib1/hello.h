#pragma once

#include <chrono>
#include <ctime>
#include <iostream>

// header only library

class hello {
  public:
  void time() {
    auto timenow =
        std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::cout << "hello there " << ctime(&timenow) << std::endl;
  }
};
