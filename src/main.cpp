#include <iostream>
#include <cmath>
// #include <string>
// #include <filesystem>
int main()
{
  const std::string ROBOT = u8"\U0001F916";
  std::string line;
  std::string message = " Welcome to C++ in Android! ";
  for (auto i = 0; i < ((int) floor(message.length() / 2) + 2); i++) line.append(ROBOT);
  std::cout << line << '\n' << ROBOT << message << ROBOT << '\n' << line << '\n';
  // const std::string ROBOT = u8"\U0001F916";
  // std::string line;
  // for (auto i = 0; i < 15; i++) line.append(ROBOT);
  // line.append(ROBOT);
  // std::cout << line << u8"\n" << ROBOT << " Welcome to C++ in Android! " << ROBOT << "\n" << line << '\n';
}
