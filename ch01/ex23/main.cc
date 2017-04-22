#include "Sales_item.h"

int main()
{
  // This program doesn't handle equivalent ISBNs that aren't adjacent in the input. In such cases the occurences are
  // counted separately.

  Sales_item currBook, book;

  if (std::cin >> currBook) {
    int cnt = 1;

    while (std::cin >> book) {
      if (book.isbn() == currBook.isbn()) {
        ++cnt;
      } else {
        std::cout << "Transactions with ISBN " << currBook.isbn() << " occur " << cnt << " times." << std::endl;
        currBook = book;
        cnt = 1;
      }
    }

    std::cout << "Transactions with ISBN " << currBook.isbn() << " occur " << cnt << " times." << std::endl;
  }

  return 0;
}
