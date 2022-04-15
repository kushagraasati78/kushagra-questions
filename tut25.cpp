#include <iostream>
using namespace std;


class Employee{
    int id;
    int salary;
    public:

    void setID(void){
        cout<<"Enter id of Employee"<<endl;
        cin>>id;
    }

    void getId(void){
        
        cout<<"The id of this employee is "<<id<<endl;
    }

    // void setsalary(void)
    // {
    //         salary=122;
    //         cout<<"the salary is "<<salary<<endl;
    //         cin>>salary;
            
    // }

    // void getsalary(void){
    //     cout<<"the salary is"<<salary<<endl;
    // }
};

int main() {
    // Employee harry,rohan,lovish, shruti;
    // harry.setID();
    // harry.getId();
    // harry.setsalary();
    // harry.getsalary();
    Employee fb[4];
    
    for (int i = 0; i < 4; i++)
    {
        
        fb[i].setID();
        fb[i].getId();
    
    }
    
    return 0;
}