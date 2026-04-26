#pragma once
#include <iostream>
inline void printVersion(){
    std::cout << "Version 1.0\n";
}
/*
void calculateSomething() {
    std::cout << "[Loi] Ham nay se gay ra Multiple Definition!\n";
}
*/
inline void calculateSafe() {
    std::cout << "[Thanh cong] Ham inline xai chung thoai mai.\n";
}