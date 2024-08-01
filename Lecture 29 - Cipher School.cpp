#include <iostream>
using namespace std;

class Bank_Client
{
    private:
    int credit_number;
    int cvv;
    string password;
    
    public:
    string name;
    string user_name;
    // we use public functions to set private data
    // Private members are accessbile inside class and only inside the class
    // **** To access stuff of an object you definetly need a public element, as private elements of an object are always inaccessable
    void set_credit_card_number(int credit_number){
        this->credit_number = credit_number;
        // The pointer to the object is inherently passed by a pointer called "this"
        cout<<"THe address of the object calling this function is "<<this<<endl;
    }
    int get_creditcardnumber(){
        cout<<"The credit card number is "<<credit_number;
        return credit_number;
    }
    void set_allthestuffatonce(int credit_number, int name,int password){
        this->credit_number = credit_number;
        this->name = name;
        this->password = password;
    }
    // Every object when we define a function, inherently passes the pointer of the object and the pointer is called "this"
    
    
    
    
    
    // we use get function to get the data
    // we use set function to set the data
};

int main(){
    
    Bank_Client a,b,c;
    a.name ="Suresh";
    // a.password = "Suresh777";
    // a.cvv = 788;
    
    cout<<"The Bank Account holder name is: "<<a.name<<endl;
    // cout<<"The password of "<<a.name<<" is "<<a.password;
    
    a.set_credit_card_number(98355889);
    
    cout<<"The address of this object is "<<&a<<endl;
    
   return 0;
}
