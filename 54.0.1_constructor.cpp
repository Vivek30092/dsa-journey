#include<iostream>
using namespace std; 
class Car{
private:
    long engineNo;
public:
    // non-parameterized constructor
    Car(){
        cout<<"non-parametrized constructor called..."<<endl;       //creating constructor
        color = "notKnown";
    }

    // parametrized constructor
    Car(string m, string c, int wc){
        cout<<"parametrized constructor called..."<<endl;
        model = m;
        color = c;
        wheelCount = wc;
    }
    string model;
    string color;
    int wheelCount;
    
    void printinfo(){
        cout<<"Model name: "<< model<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"wheelCount: "<<wheelCount<<endl;
    }

};
int main(){
    Car c1;  
    c1.model = "Mercedes 220d";
    c1.wheelCount = 4;
    c1.printinfo();

    cout<<endl<<endl;

    Car c2("Tesla Model Y","Carbon Black", 4); 
    c2.printinfo();
    return 0;
}