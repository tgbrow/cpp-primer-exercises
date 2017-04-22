#include "Sales_item.h"

int main()
{
  // This program assumes the ISBNs of all the books are the same. Handling the case where they aren't is beyond the
  // scope of this exercise.

  Sales_item total, book;

  if (!(std::cin >> total)) {
    std::cerr << "Must provide at least one book as input!" << std::endl;
    return -1;
  }

  while (std::cin >> book)
    total += book;

  std::cout << total << std::endl;

  return 0;
}
