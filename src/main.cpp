#include <iostream>
#include <cmath>
int main(int argc, char * argv [])
{
  std::string message;
  if (argc > 1)
  {
    for (auto i = 1; i < argc; i++)
    {
      if (i > 1) message.push_back(' ');
      message.append(argv[i]);
    }
  }
  else
  {
    std::cerr << "Not enough arguments passed to the program.\n";
    return 1;
  }
  const std::string ROBOT = u8"\U0001F480";
  std::string line;
  bool messageIsEven = ((message.length() % 2) == 0);
  for (auto i = 0; i < ((int) ceil(message.length() / 2) + (messageIsEven?2:3)); i++) line.append(ROBOT);
  std::cout << line << '\n' << ROBOT << message << (messageIsEven?"":" ") << ROBOT << '\n' << line << '\n';
}
