#include <iostream>
#include <cmath>
// #include <string>
// #include <filesystem>
int main()
{
  std::string ln = u8"\U0001F916";

  const std::string ROBOT = u8"\U0001F916";
  std::string line;
  std::string message = " Welcome to C++ in Android! ";
  for (auto i = 0; i < ((int) floor(ln.length() / 4) + 2); i++) line.append(ROBOT);
  std::cout
    << line
    << "`nThe length of ln: [" << ln << "] is [" << ln.length()
    << "]\nand\nThe size of ln: [" << ln << "] is [" << ln.size() << "]\n";
  // const std::string ROBOT = u8"\U0001F916";
  // std::string line;
  // for (auto i = 0; i < 15; i++) line.append(ROBOT);
  // line.append(ROBOT);
  // std::cout << line << u8"\n" << ROBOT << " Welcome to C++ in Android! " << ROBOT << "\n" << line << '\n';
}
