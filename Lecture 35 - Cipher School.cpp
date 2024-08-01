#include <iostream>
// #include<stack>
#include<queue>
using namespace std;

int main(){
    // stack<int> a;
    queue<int> a;
    a.push(5);
    a.push(6);
    a.push(7);
    // cout<<a.top()<<endl;
    cout<<a.front()<<endl;
    a.pop();
    // cout<<a.top()<<endl;
    cout<<a.back()<<endl;
    if(a.empty()==0){
        cout<<"The stack is currently not empty"<<endl;
    }
    else{
        cout<<"The stack is empty"<<endl;
    }
    a.pop();
    a.pop();
    
    if(a.empty()==0){
        cout<<"The stack is currently not empty"<<endl;
    }
    else{
        cout<<"The stack is empty"<<endl;
    }
}





//               STL- Standard template library--map
#include <iostream>
#include<map>
using namespace std;

int main(){
    map<string,int> hash;
    
    hash["suresh"] = 1;
    hash["programing"] = 2;
    hash["ch"] = 3;
    
    cout<<"The value of suresh in the hashtable is "<<hash["suresh"]<<endl;
    
    for(auto j=hash.begin();j!=hash.end();j++){
        cout<<"The key will be "<<j->first<<" The value in the key will be "<<j->second<<endl;
    }
}




//               STL- Standard template library--List
#include <iostream>
#include<list>
using namespace std;

int main(){
    list<int> a;
    a.push_back(4);
    a.push_front(2);
    a.push_back(3);
    a.push_front(2);
    
    a.pop_back();
    a.pop_front();
    
    a.sort();
    
    for(auto i=a.begin();i!=a.end();i++){
        cout<<*i;
    }
}
