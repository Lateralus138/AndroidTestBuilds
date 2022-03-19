#include <iostream>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <sys/wait.h>
int main()
{
  std::cout << "\x1b]0;Andronix LXQT Installer\007" << std::flush;
  const std::string SPACER(50, '-');
  char
    * argsUpdate[] = {(char *)"pkg", (char *)"update", (char *)"-y", NULL},
    * argsInstall[] =
    {
      (char *)"pkg",
      (char *)"install",
      (char *)"wget",
      (char *)"curl",
      (char *)"proot",
      (char *)"tar",
      (char *)"-y",
      NULL
    },
    * argsWget[] =
    {
      (char *)"wget",
      (char *)
        "https://raw.githubusercontent.com/AndronixApp/AndronixOrigin/"
        "master/Installer/Ubuntu/ubuntu-lxqt.sh", NULL
    },
    * argsChmod[] = {(char *)"chmod", (char *)"+x", (char *)"ubuntu-lxqt.sh", NULL},
    * argsRun[] = {(char *)"bash", (char *)"ubuntu-lxqt.sh", NULL};
  int sysResult = 0;
  pid_t pid;
  std::cout <<  SPACER << "\nAttempting to run 'pkg update -y'\n";
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
    std::cerr << "Error in 'pkg update -y'.\n";
    return 1;
  }
  std::cout << "Successfully ran 'pkg update -y'\n" << SPACER << "\npkg install wget curl proot tar -y'\n";
  pid = fork();
  if (pid > -1)
  {
    if (pid == 0) sysResult = execvp(argsInstall[0], argsInstall);
    else wait(nullptr);
  }
  else
  {
    std::cerr << "Program failed to fork.\n";
    return EXIT_FAILURE;
  }
  if (sysResult > 0)
  {
    std::cerr << "Error in 'pkg install wget curl proot tar -y'.\n";
    return 2;
  }
  std::cout << "Successfully ran 'pkg install wget curl proot tar -y'\n" << SPACER << "\nwget https://raw.githubusercontent.com/AndronixApp/AndronixOrigin/master/Installer/Ubuntu/ubuntu-lxqt.sh'\n";
  pid = fork();
  if (pid > -1)
  {
    if (pid == 0) sysResult = execvp(argsWget[0], argsWget);
    else wait(nullptr);
  }
  else
  {
    std::cerr << "Program failed to fork.\n";
    return EXIT_FAILURE;
  }
  if (sysResult > 0)
  {
    std::cerr << "Error in 'wget https://raw.githubusercontent.com/AndronixApp/AndronixOrigin/master/Installer/Ubuntu/ubuntu-lxqt.sh'.\n";
    return 3;
  }
  std::cout << "Successfully ran 'wget https://raw.githubusercontent.com/AndronixApp/AndronixOrigin/master/Installer/Ubuntu/ubuntu-lxqt.sh'\n" << SPACER << "\nAttempting to run 'chmod +x ubuntu-lxqt.sh'\n";
  pid = fork();
  if (pid > -1)
  {
    if (pid == 0) sysResult = execvp(argsChmod[0], argsChmod);
    else wait(nullptr);
  }
  else
  {
    std::cerr << "Program failed to fork.\n";
    return EXIT_FAILURE;
  }
  if (sysResult > 0)
  {
    std::cerr << "Error in 'chmod +x ubuntu-lxqt.sh'.\n";
    return 4;
  }
  std::cout << "Successfully ran 'chmod +x ubuntu-lxqt.sh'\n" << SPACER << "\nAttempting to run 'bash ubuntu-lxqt.sh'\n";
  pid = fork();
  if (pid > -1)
  {
    if (pid == 0) sysResult = execvp(argsRun[0], argsRun);
    else wait(nullptr);
  }
  else
  {
    std::cerr << "Program failed to fork.\n";
    return EXIT_FAILURE;
  }
  if (sysResult > 0)
  {
    std::cerr << "Error in 'bash ubuntu-lxqt.sh'.\n";
    return 5;
  }
  std::cout << "Successfully ran 'bash ubuntu-lxqt.sh'\n" << SPACER << "\n";
}
