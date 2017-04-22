#include <iostream>

int main()
{
  // legal
  std::cout << "/*";

  // legal
  std::cout << "*/";

  // not legal; requires closing double-quote before semi-colon
  // std::cout << /* "*/" */;

  // legal
  std::cout << /*  "*/" /*  "/*"  */;

  return 0;
}
