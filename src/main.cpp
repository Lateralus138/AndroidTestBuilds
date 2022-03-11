#include <iostream>
#include <string>
std::string line(50, u8'\U0001F916');
int main()
{
  std::cout << line << u8"\n \U0001F916 Welcome to C++ in Android! \U0001F916 \n" << line << '\n';
}
