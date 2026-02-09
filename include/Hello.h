#pragma once

#include <string>

class Hello
{
private:
  std::string name;

public:
  explicit Hello(std::string name) : name(name) {}
  void sendMessage();
};