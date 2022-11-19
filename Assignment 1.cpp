#include <iostream>

int main() {
  int x =5;
  x += 3;
  std::cout << x<<"\n";
  x -= 5;
  std::cout<<x<<"\n";
  x *= 8;
  std::cout<<x<<"\n";
  x /= 10;
  std::cout<<x<<"\n";
  x %= 25;
  std::cout<<x<<"\n";
  int y = 3;
  std::cout << (x == y)<<"\n";
  std::cout << (x > y)<<"\n";
  std::cout << (x != y)<<"\n";
  std::cout << (x <= y)<<"\n";
  std::cout << (x < y)<<"\n";
  std::cout << (x > 3 && x < 10)<<"\n";
  std::cout << (x > 3 || x < 4)<<"\n";
  std::cout << (!(x > 3 && x < 10))<<"\n";
  return 0;
  }
