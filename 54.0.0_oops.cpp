/* CLASS SYNTAX
class class_name{
    properties;
    methods;
};
*/

/* OBJECT SYNTAX
class_name Object_name;
*/

/* ASSIGN OR ACCESS VALUES OF OBJECT
objact_name.properties(using dot operator)
*/
#include<iostream>
#include<string>
using namespace std;

class Teacher{
private: 
    double salary;      // data hiding

public: 
    // properties/ attributes
    string name;
    string dept;
    string subject;

    // methods/ member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    void getInfor(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
    }

    // setter function : set private value
    void setSalary(double s){
        salary = s;
    }

    // getter function : get private value 
    double getSalary(){
        return salary;
    }

};

int main(){
    // Teacher t1 OBJECT
    Teacher t1;     // constructor called
    t1.name = "vivek";
    t1.subject = "Ai&ml";
    // t1.dept = "Computer Science";
    t1.setSalary(80000);
    
    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    cout<<t1.dept<<endl;
    return 0;
}