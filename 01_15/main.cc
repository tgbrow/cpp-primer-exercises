#include <iostream>

void function_expecting_int_argument(int x)
{
  std::cout << x << " + 1 = " << (x + 1) << std::endl;
}

int main()
{
  // = SYNTAX ERRORS =

  //std::cout << "What's a semicolon?" << std::endl:
  // compiler says -> error: expected ‘;’ before ‘:’ token

  //std::cout << missing quotes around literal << std::endl;
  // compiler says -> error: ‘missing’ was not declared in this scope

  //std::cout << "I sometimes forget operators!" std::endl;
  // compiler says -> error: expected ‘;’ before ‘std’


  // = TYPE ERRORS =

  //function_expecting_int_argument("This string literal is not an int!");
  // compiler says -> error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]


  // = DECLARATION ERRORS =

  //std::cout << "I sometimes forget std::" << endl;
  // compiler says -> error: ‘endl’ was not declared in this scope

  return 0;
}
