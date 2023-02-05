#include <iostream>
#include <stdio.h>
#include <stropts.h>
#include <sys/ioctl.h>
#include <sys/select.h>
#include <termios.h>
#include <unistd.h>
int _kbhit() {
  static const int STDIN = 0;
  static bool initialized = false;

  if (!initialized) {
    // Use termios to turn off line buffering
    termios term;
    tcgetattr(STDIN, &term);
    std::cout << "stdin = " << STDIN << std::endl;
    term.c_lflag &= ~ICANON;
    tcsetattr(STDIN, TCSANOW, &term);
    setbuf(stdin, NULL);
    initialized = true;
  }

  int bytesWaiting;
  ioctl(STDIN, FIONREAD, &bytesWaiting);
  // std::cout << " !!!stdin = " << STDIN << std::endl;
  return bytesWaiting;
}

int main(int argc, char **argv) {
  while (1) {
    std::cout << "Menu\n";
    std::cout << "Save (s)\n";
    std::cout << "Exit (e)\n";
    char c = getchar();
    system("clear");
    if (c == 's') {
      std::cout << "save\n";
    } else if (c == 'e') {
      std::cout << "exit\n";
    }
  }

  return 0;
}