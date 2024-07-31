#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    
    int c;
    int* p;
    int* q;
    a=2;// I am only changing the value, but the address of a is still the same, so the pointer will still point to the same a, not matter how the a is being changed
    b=5;
    p = &a;
    q =&b;
    
    c = *p + *q;
    cout<<"The value of a is (from the actual variable type) "<<a<<endl;
    cout<<"The value of a from the pointer using *(astreix/ indirection operator) "<<*p<<endl;
    
    cout<<"The value of c is: "<<c<<endl;
    
    return 0;
    
}
