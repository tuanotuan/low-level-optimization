#include <iostream>
#include <thread>
#include <memory>
#include <typeinfo>

//Quy tắc: Một biến có kích thước $N$ bytes (1, 2, 4, 8) 
//thì bắt buộc phải được đặt ở một địa chỉ bộ nhớ chia hết cho $N$.
struct PaddedStruct{
    char a;      
    short b;     
    int c;       
};
// => struct nay 8 bytes
// meo toi uu: khai bao bien trong cau truc theo thu
// tu giam dan kich thuoc byte
int main() {
    std::cout << sizeof(PaddedStruct) << "\n";
    return 0;
}