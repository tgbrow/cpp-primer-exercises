#include <iostream>

static const int FIRST_VAL = 10;
static const int LAST_VAL = 0;

int main()
{
  int sum = 0, val = FIRST_VAL;
  while (val >= LAST_VAL)
    sum += val--;

  std::cout << "The sum of all numbers in range [" << LAST_VAL << ", " << FIRST_VAL << "] is " << sum << std::endl;

  return 0;
}
