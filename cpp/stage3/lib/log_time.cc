#include "lib/log_time.h"
#include <ctime>
#include <iostream>

void log_time() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}
