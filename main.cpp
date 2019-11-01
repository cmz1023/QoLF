#include "qol.h"
int main() {
    std::string s = "hello world! how are you doing today?";

    std::vector<std::string> vec;
    vec = qol::splitString(s);
    std::vector<std::string> vec2 = qol::forEach(vec,(qol::stringReverser));
    for (auto x : vec){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    for (auto x : vec2){
        std::cout << x << " ";
    }
    return 0;
}