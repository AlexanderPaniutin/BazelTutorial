#include "main/hello_greet.h"

#include <ctime>
#include <iostream>
#include <string>

void log_time() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

int main(int argc, char* argv[]) {
  std::cout << "Bazel stage 1" << std::endl;
  
  std::string name = "World";
  if (argc > 1) name = argv[1];
  std::cout << greet_name(name) << std::endl;

  log_time();
  return 0;
}
