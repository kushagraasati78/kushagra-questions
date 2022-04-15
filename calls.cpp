#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// This will not swap a and b
// void swap(int a, int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// This will swap a and b
// void swapPointer(int* a, int* b){
//     int temp=*a; // 4 4 5
//     *a=*b;       // 4 5 5
//     *b=temp;     // 4 5 4
// }
// Call by reference using C++ reference Variables
// void swapReferenceVar (int &a, int&b){
//     int temp=a; // 4 4 5
//     a=b;       // 4 5 5
//     b=temp;     // 4 5 4

// }

int & swapReferenceVar (int &a, int&b){
    int temp=a; // 4 4 5
    a=b;       // 4 5 5
    b=temp;     // 4 5 4
    return a;
}


int main()
{
    int a =4, b=5; 
    //cout << "the sum of 4 & 5 is" << sum(a, b);
    cout << "the sum of a is "<<a<<"The values of B is "<<b<<endl;
    //swap(a,b); // this will not swap
    //swapPointer(&a, &b); // this will swap a and b
    //swapReferenceVar(a,b); // this will swap a and b using reference variables
    swapReferenceVar(a,b)=766;
    cout<<"the value of a is "<<a<<"The values of b "<<b<<endl;
    return 0;
}