#include <iostream>
#include <string>
int main()
{
  const std::string ROBOT = u8"\U0001F916";
  std::string line;
  for (auto i = 0; i < 30; i++) line.append(ROBOT);
  std::cout << line << u8"\n" << ROBOT << " Welcome to C++ in Android! " << ROBOT << "\n" << line << '\n';
}
