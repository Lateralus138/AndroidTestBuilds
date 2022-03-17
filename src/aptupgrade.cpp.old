#include <iostream>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <sys/wait.h>
int main()
{
  std::cout << "\x1b]0;APT Upgrade Utility\007" << std::flush;
  const std::string SPACER(50, '-');
  char
    * argsUpdate[] = {(char *)"apt", (char *)"update", NULL},
    * argsUpgrade[] = {(char *)"apt", (char *)"upgrade", (char *)"-y", NULL},
    * argsAutoRemove[] = {(char *)"apt", (char *)"autoremove", (char *)"-y", NULL},
    * argsAutoClean[] = {(char *)"apt", (char *)"autoclean", NULL},
    * argsClean[] = {(char *)"apt", (char *)"clean", NULL};
  int sysResult = 0;
  pid_t pid;
  std::cout <<  SPACER << "\nAttempting to run 'apt update'\n";
  pid = fork();
  if (pid > -1)
  {
    if (pid == 0) sysResult = execvp(argsUpdate[0], argsUpdate);
    else wait(nullptr);
  }
  else
  {
    std::cerr << "Program failed to fork.\n";
    return EXIT_FAILURE;
  }
  if (sysResult > 0)
  {
    std::cerr << "Error in 'apt update'.\n";
    return 1;
  }
  std::cout << "Successfully ran 'apt update'\n" << SPACER << "\nAttempting to run 'apt upgrade -y'\n";
  pid = fork();
  if (pid > -1)
  {
    if (pid == 0) sysResult = execvp(argsUpgrade[0], argsUpgrade);
    else wait(nullptr);
  }
  else
  {
    std::cerr << "Program failed to fork.\n";
    return EXIT_FAILURE;
  }
  if (sysResult > 0)
  {
    std::cerr << "Error in 'apt upgrade -y'.\n";
    return 2;
  }
  std::cout << "Successfully ran 'apt upgrade -y'\n" << SPACER << "\nAttempting to run 'apt autoremove -y'\n";
  pid = fork();
  if (pid > -1)
  {
    if (pid == 0) sysResult = execvp(argsAutoRemove[0], argsAutoRemove);
    else wait(nullptr);
  }
  else
  {
    std::cerr << "Program failed to fork.\n";
    return EXIT_FAILURE;
  }
  if (sysResult > 0)
  {
    std::cerr << "Error in 'apt autoremove -y'.\n";
    return 3;
  }
  std::cout << "Successfully ran 'apt autoremove -y'\n" << SPACER << "\nAttempting to run 'apt autoclean'\n";
  pid = fork();
  if (pid > -1)
  {
    if (pid == 0) sysResult = execvp(argsAutoClean[0], argsAutoClean);
    else wait(nullptr);
  }
  else
  {
    std::cerr << "Program failed to fork.\n";
    return EXIT_FAILURE;
  }
  if (sysResult > 0)
  {
    std::cerr << "Error in 'apt autoclean'.\n";
    return 4;
  }
  std::cout << "Successfully ran 'apt autoclean'\n" << SPACER << "\nAttempting to run 'apt clean'\n";
  pid = fork();
  if (pid > -1)
  {
    if (pid == 0) sysResult = execvp(argsClean[0], argsClean);
    else wait(nullptr);
  }
  else
  {
    std::cerr << "Program failed to fork.\n";
    return EXIT_FAILURE;
  }
  if (sysResult > 0)
  {
    std::cerr << "Error in 'apt clean'.\n";
    return 5;
  }
  std::cout << "Successfully ran 'apt clean'\n" << SPACER << "\n";
}
