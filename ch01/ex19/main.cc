#include <iostream>

int main()
{
  int val1, val2;
  std::cin >> val1 >> val2;

  // ensure that val2 is not less than val1
  if (val2 < val1) {
    int temp = val1;
    val1 = val2;
    val2 = temp;
  }

  std::cout << "The numbers in the range [" << val1 << ", " << val2 << "] are:" << std::endl;
  while (val1 <= val2)
    std::cout << val1++ << std::endl;

  return 0;
}
