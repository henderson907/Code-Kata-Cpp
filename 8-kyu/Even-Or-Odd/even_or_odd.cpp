#include <iostream>
#include <string>

//// Actual Function //////////////////////
std::string even_or_odd(int number) {
  return number % 2 == 0 ? "Even" : "Odd";
}
///////////////////////////////////////////

int main() {

  std::cout << even_or_odd(2) << "\n";
  std::cout << even_or_odd(5) << "\n";

}
