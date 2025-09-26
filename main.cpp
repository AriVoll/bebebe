#include <iostream>
#include <string>

int main() {
  std::string input;
  std::cout<<"vvedi stroky";
  std::getline(std::cin,input);
  std::cout<<"ti vvel:"<<input<<std::endl;

  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;


  std::cout << "$ ";

  std::string input;
  std::getline(std::cin, input);
}
