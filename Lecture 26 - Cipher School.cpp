#include <iostream>
using namespace std;

int main(){
    Char j,o,h,n;
    cin>>j>>o>>h>>n;
    
    char name[1000];
    
    cout<<"Enter your name : ( Note: Enter # after the end of your name: ) ";
    
    int i=0;  // Initial value of i is 0 
    while(1){   // Here i is the previous 
         cin>>name[i];
        
         if(name[i]=='#') break;
         i++; // when name is begin entered, the value of i is incresing
     }
    
     i=0; // Again need to change the value of i to 0 before running the second while loop
     cout<<"The name you have just entered is "<<endl;
     while(name[i]!='#'){
         cout<<name[i];
         i++;
     }
    
    
    
    
    
    
    
    
    
    
    // char name[6];
    // int i;
    // for(i=0;i<6;i++){  
    //     cin>>name[i];
    // }
    
    // cout<<"The name you have just entered is "<<endl;
    
    // for(i=0;i<6;i++){
    //     cout<<name[i];
    // }
    
    
    
    
    
    
    
    // string name;
    // cin>>name;
    // cout<<name;
}
