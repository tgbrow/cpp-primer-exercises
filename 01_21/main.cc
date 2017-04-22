#include "Sales_item.h"

int main()
{
  // This program assumes the ISBNs of the two books are the same. Handling the case where they aren't is beyond the
  // scope of this exercise.

  Sales_item book1, book2;
  std::cin >> book1 >> book2;
  std::cout << book1 + book2 << std::endl;

  return 0;
}
