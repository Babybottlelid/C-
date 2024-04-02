#include<iostream>
using namespace std;
int main(){
    int num=0, num1=1;
    int * const ptr=&num; // const指针必须初始化！且const指针的指向不能修改
    *ptr = 1;
    cout<<*ptr<<endl;
}