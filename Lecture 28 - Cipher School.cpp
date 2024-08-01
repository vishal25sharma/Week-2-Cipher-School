#include <iostream>
using namespace std;

class Student
{
    public:
    
    string name;
    int attendence;
    float total_marks;
    
    void calculate_percentage(){
        cout<<total_marks<<"%";
    }
};

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
    void set_credit_card_number(int number){
        credit_number = number;
    }
    int get_creditcardnumber(){
        cout<<"The credit card number is "<<credit_number;
        return credit_number;
    }
    void set_allthestuffatonce(int number, int User_name,int pass){
        credit_number = number;
        name = User_name;
        password = pass;
    }
    
    // we use get function to get the data
    // we use set function to set the data
};

int main(){
    // Student a,b,c;
    // // Student is the class
    // // and a,b,c are the objects of that template / class
    
    // a.name = "Jio";
    // a.attendence = 90;
    // a.total_marks = 69;
    
    // a.calculate_percentage();
    
    
    Bank_Client a,b,c;
    a.name ="Suresh";
    // a.password = "Suresh777";
    // a.cvv = 788;
    
    cout<<"The Bank Account holder name is: "<<a.name<<endl;
    // cout<<"The password of "<<a.name<<" is "<<a.password;
    
    a.set_credit_card_number(98355889);
    a.get_creditcardnumber();
    
   return 0;
}
