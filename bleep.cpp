#include <iostream>
#include <string>

#include "functions.hpp"

int main() {

  std::string word = "broccoli";

  std::string sentence = "I sometimes i like broccoli but i like it more if their is ranch thats the only time i like broccoli but its still evil cause i said so, so broccoli is evil #broccoli #not for me #ranch";

  bleep(word, sentence);

  for (int i = 0; i < sentence.size(); i++) {

    std::cout << sentence[i];

  }

  std::cout << "\n";

}
