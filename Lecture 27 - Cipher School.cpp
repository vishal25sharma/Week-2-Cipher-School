#include <iostream>
#include<string>
using namespace std;
int main(){
    
    // string name;
    // cin>>name;
    // int i;
    // for(i=0;i<5;i++){
    //     cout<<name[i]<<endl;
    // }
    
    
    
    
    
    // string a;
    // string b;
    // cin>>a>>b;
    // cout<<"The strings which you have given as input are "<<a<<" and "<<b<<endl;
    
    // string c;
    // c= a+b; // This is called concatination
    // cout<<"The combined word is: "<<c<<endl;
    // cout<<"The length of the combined word is : "<<c.length()<<endl;
    // return 0;
    
    
    
    
    
    
    
    
    
    string a;
    // instead of using cin, you use something called a getline
    cout<<"Enter your full name: ";
    getline(cin,a);  // getline is help to take input with spaces in input
    
    cout<<"Your full name is: "<<a<<endl;
    
    cout<<"The length of the full name is : "<<a.length()<<endl;
    return 0;
}
