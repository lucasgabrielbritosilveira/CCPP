#include <string>
std::string encrypt(const std::string &input) {
  std::string output = input;
  auto i = input.size();
  for (auto k = 0; k < i; k++) {
    output[k] = input[i - (k + 1)];
  }
  return output;
}
std::string decrypt(const std::string &input) { return encrypt(input); }
