#include <iostream>
using namespace std;

int main() {
    // what is pointers

    int a=3;
    int* b= &a;
// &-----> address of operator
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    

   
   // * Value at Dereferance Operator
   cout<<"the valie at address b is "<<*b;

   // Pointer to pointer

//    int**c=&b;
//    cout<<"the value of b is"<<&b<<endl;
//    cout<<"the address of b is"<<c<<endl;
//    cout<<"the value at address c is"<<*c<<endl;
//    cout<<"the value of address value at address c is "<<**c<<endl;

 int** c=&b;
 cout<<"the value at the address of Pointer to pointer is "<<c<<endl;
 cout<<"the address is "<<**c<<endl;




    return 0;
}