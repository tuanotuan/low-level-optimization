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
    void doSomething();
};
// ko co inline se bi multiple definition khi include header nay vao nhieu file cpp
inline void User::doSomething(){
    std::cout << "Loi dang lam gi do...\n";
}
/*
void calculateSomething() {
    std::cout << "[Loi] Ham nay se gay ra Multiple Definition!\n";
}
*/

