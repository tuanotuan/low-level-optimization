#include "header.h"
// xin phep linker sai ke
extern int public_var;
extern void doPublicWork();
 //extern int private_var; 
// loi: khong the truy cap bien static tu file cpp khac
// name mangling
void doWork(int a){
    std:: cout << "hehe";
}
void doWork(double a){
    std:: cout << "haha";
}
extern "C"{
    void do_Work(int a){
        doWork(a);
    } // ok
}
int main(){
    User user;
    user.printName();
    std::cout << "\n";
    user.doSomething();
    //////////////////////
    std:: cout << "\nPublic variable: " << public_var << "\n";
    doPublicWork();
    doWork(1); // hehe
    doWork(1.0); // haha
    //std::cout << "Private variable (should not be accessible): " << private_var << "\n"; // loi: khong the truy cap bien static tu file cpp khac
    return 0;
}