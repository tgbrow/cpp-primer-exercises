#include <iostream>

int main()
{
  int sum = 0;
  for (int i = 50; i <= 100; ++i)
    sum += i;

  std::cout << "sum of numbers in range [50, 100]: " << sum << std::endl;

  std::cout << "countdown from 10 to 0:" << std::endl;

  for (int i = 10; i >= 0; --i)
    std::cout << i << std::endl;

  return 0;
}
