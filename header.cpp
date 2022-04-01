#include <iostream>
using namespace std;
// #include "this.h" -- should be in current directory. user defined header files.

int main () {

    cout<<"This is hello world"<<endl;
    int a=10, b=8;
    cout<<"the sum is " <<a+b<<endl;
    cout<<"the sum is "<<a-b<<endl;
    cout<<"the sum is "<<a*b<<endl;
    cout<<"the sum is "<<a/b<<endl;
    cout<<"the sum is "<<a++<<endl;
    cout<<"the sum is "<<a--<<endl;

    cout<<endl;


    cout<<"following are the comparision operators";

    cout<<"the sum is " <<(a>b)<<endl;
    cout<<"the sum is " <<(a<b)<<endl;
    cout<<"the sum is " <<(a==b)<<endl;
    cout<<"the sum is " <<(a<=b)<<endl;
    cout<<"the sum is " <<(a>=b)<<endl;
    cout<<"the sum is " <<(a!=b)<<endl;

    cout<<"Logical Operators";

    cout<<"\n the sum of operators is"<<((a==b) && (a>b))<<endl;
   cout<<"the sum of operators is"<<((a==b) || (a>b))<<endl;
   cout<<"the value of this operator is"<<(!(a==b));
return 0;
}