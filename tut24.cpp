#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout <<"Enter the id"<<endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of the employee is  " << id <<" and the Employee number is "<< count << endl;
        cout << id;
    }
    
    static void getcount(void){
       // cout<<id; throws and error
        cout<<"The value of count is"<<count<<endl;
    }
};
int Employee :: count; //Default value is 0
int main()
{
    Employee harry, rohan, lovish;

    //count is the static data member of the class emoployee
    // harry.id=1; //Cant do as they are private
    //  harry.count=1;
    harry.setData();
    harry.getData();

    Employee ::getcount();

    rohan.setData();
    rohan.getData();
    
    Employee::getcount();

    lovish.setData();
    lovish.getData();
    
    Employee::getcount();
    return 0;
}