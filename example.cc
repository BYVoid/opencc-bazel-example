#include <iostream>
#include "opencc.h"

int main(int argc, char **argv) {
  opencc::SimpleConverter converter("s2t.json", {}, argv[0]);
  std::cout << converter.Convert("汉字") << std::endl;
  return 0;
}
