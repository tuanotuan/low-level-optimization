#include "header.h"
// external linkage: co the truy cap tu file cpp khac
int public_var = 10;
void doPublicWork(){
    std::cout << "Public work is being done...\n";
}
// internal linkage: chi truy cap duoc trong file cpp nay
static int private_var = 20;
// no linkage
void localFunction(){
    int secret_var = 30; // chi truy cap duoc trong ham nay
    std::cout << "This is a local function...\n";
}