#pragma once
#include <iostream>
inline void printVersion(){
    std::cout << "Version 1.0\n";
}
class User{
    public:
    void printName(){
        std::cout << "Loi\n";
    }
};
/*
void calculateSomething() {
    std::cout << "[Loi] Ham nay se gay ra Multiple Definition!\n";
}
*/

