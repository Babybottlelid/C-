#include <iostream>

using namespace std;

void f(const int i ){
    //i=10;//const i 常量不赋值
    cout<<i<<endl;
}
int main(){
    f(1);
}

