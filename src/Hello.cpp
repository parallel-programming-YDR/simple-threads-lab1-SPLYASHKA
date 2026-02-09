#include "Hello.h"
#include <iostream>

void Hello::sendMessage()
{
  std::cout << "Hello, " << name << "!" << std::endl;
}