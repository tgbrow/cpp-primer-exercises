#include <iostream>

int main()
{
  int sum = 0, input = 0;

  std::cout << "Please provide a list of whitespace-separated integers to be summed, followed by EOF." << std::endl;

  while (std::cin >> input)
    sum += input;

  std::cout << "The sum is " << sum << "." << std::endl;

  return 0;
}
