#pragma once
#include <iostream>
void printVersion();
/*
void calculateSomething() {
    std::cout << "[Loi] Ham nay se gay ra Multiple Definition!\n";
}
*/
inline void calculateSafe() {
    std::cout << "[Thanh cong] Ham inline xai chung thoai mai.\n";
}