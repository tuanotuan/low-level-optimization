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
//===
int returnOne() {
    std::cout << "1\n";
    return 1;
}
int returnTwo() {
    std::cout << "2\n";
    return 2;
}
void dummyFunction(int a, int b) {
    std::cout << "dummyFunction called\n";
}
//===
int share_var = 0;
thread_local int personal_var = 0;
void doSomething() {
    share_var++;
    personal_var++;
    std::cout << "share_var: " << share_var << ", personal_var: " << personal_var << "\n";
}
int main() {
    std::cout << sizeof(PaddedStruct) << "\n";
    // unspecified behavior: co the in ra 2 1 hoac 1 2
    dummyFunction(returnOne(), returnTwo());
    std::thread t1(doSomething);
    std::thread t2(doSomething);
    // phai join thread truoc khi main ket thuc de ko bi loi
    t1.join();
    t2.join();
    std::cout << "share_var: " << share_var << ", personal_var: " << personal_var << "\n";
    return 0;
}