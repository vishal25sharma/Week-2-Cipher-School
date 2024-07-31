#include<iostream>
using namespace std;

int main(){
    int a=5;
    
    int *x;
    x=&a;
    cout<<"The address of a, which is stored in the pointer x is: "<<x<<" The value of x+1 is "<<x+1<<endl;
    cout<< x+2;
}
