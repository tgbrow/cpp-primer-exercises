#include <iostream>

static const int FIRST_VAL = 50;
static const int LAST_VAL = 100;

int main()
{
  int sum = 0, val = FIRST_VAL;
  while (val <= LAST_VAL)
    sum += val++;

  std::cout << "The sum of all numbers in range [" << FIRST_VAL << ", " << LAST_VAL << "] is " << sum << std::endl;

  return 0;
}
