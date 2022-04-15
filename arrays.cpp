#include <iostream>
using namespace std;

int main()
{
    int marks[] = {23, 45, 56, 89};
    // int mathMarks[5];
    // mathMarks[0] = 2278;
    // mathMarks[1] = 738;
    // mathMarks[2] = 378;
    // mathMarks[3] = 578;
    // cout << "these are maths marks" << endl;
    // cout << mathMarks[0] << endl;
    // cout << mathMarks[1] << endl;

    // You can change the value of an array
        marks[2]=455;
    //     // cout << mathMarks[2] << endl;
    //     // cout << mathMarks[3] << endl;
    //     cout << "These are marks" << endl;
    //     cout << marks[0] << endl;
    //     cout << marks[1] << endl;
    //     cout << marks[2] << endl;
    //     cout << marks[3] << endl;

    for (int i = 0; i <4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
   
    // while (int i=0 i<=4);
    // {
    //    cout<<marks[i]<<endl;
    //    i++;
    // }

    //Pointers and Arrays

    int* p=marks; //pointer variable =marks
    cout<<*(p++);
    cout<<*(++p);
    // cout<<"the value of marks[0]"<<*p<<endl;
    // cout<<"the value of marks[0]"<<*p+1<<endl;
    // cout<<"the value of marks[0]"<<*p+2<<endl;
    // cout<<"the value of marks[0]"<<*p+3<<endl;
    // cout<<"the value of marks[0]"<<*p+4<<endl;
    
    

    

    return 0;
}