#include <iostream>
#include "absl/strings/str_format.h"

int main() {
    std::string s = absl::StrFormat("Welcome to %s, Number %d!", "The Village", 6);
    std::cout << s << std::endl;
    return 0;
}
