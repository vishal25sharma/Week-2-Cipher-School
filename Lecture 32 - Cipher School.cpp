#include <iostream>
using namespace std;

class Vehicle{
    public:
    int number_typers;
    string name;
    int capacity;
    int mileage;
    
};
// Now I will inherit the features of the base class into the derived classes
class SchoolBus: public Vehicle
{
    public:
    string name;
    
    int number_holidays;
    public:
    
    void printname(){
        cout<<"heleluheah "<<name;
    }
};

class Car: public Vehicle   // Derived class car has inherited all the data from the base class vehicle
{
    private:
    int number_airbags;
    int ac_consumption;
    
    public:
    void printname(){
        cout<<name;
    }
    // void set_mileage(int mileage){
    //     this->mileage = mileage;
    // }
    // void calculatemileage(){
    //     cout<<"The mileage is "<<mileage;
    // }
    // void number_of_airbags(){
    //     cout<<"the number of air bags is "<<number_airbags;
    // }
};
class SUV : public Car{
    public:
    int four_wheel_drive;
};
int main(){
    
    Car a;
    SchoolBus b;
    
    
    a.name = "Suzuki";
    b.name = "Toyota";
    a.printname();
    cout<<endl;
    b.printname();
    // a.mileage = 50;
    // a.set_mileage(50);
    // a.calculatemileage();
    // a.number_airbags =5;
    // a.number_of_airbags();
   return 0;
}
