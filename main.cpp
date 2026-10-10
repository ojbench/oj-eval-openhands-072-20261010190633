#include <iostream>
#include <sstream>
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::ostringstream ss;
    ss << std::cin.rdbuf();
    std::cout << ss.str();
    return 0;
}
