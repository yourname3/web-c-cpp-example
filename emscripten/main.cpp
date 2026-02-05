#include <string>
#include <iostream>

int
main(void) {
    std::string hello("hello world");
    for(int i = 0; i < 15; ++i) {
        std::cout << hello << std::endl;
        hello.append("world");
    }
}