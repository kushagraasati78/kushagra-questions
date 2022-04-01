#include <iostream>
#include <iomanip>

using namespace std;

int main() {
//    int a=34;
//    cout<<"the value of a was "<<a<<endl;
//    a= 45;
//    cout<<"the value of a is "<<a<<endl;
//    // constants in C++

//    const int a=3;
//    cout<<"the value of a was:"<<a;
//    a=45; // you will get an error because a is constant
//    cout<<"the value of a is "<<a;

// int a=3, b=78, c=1233;
// cout<<"the value of a is "<<a<<endl;
// cout<<"the value of a is "<<b<<endl;
// cout<<"the value of a is "<<c<<endl;


// cout<<"the value of a is "<<setw(4)<<a<<endl;
// cout<<"the value of a is "<<setw(4)<<b<<endl;
// cout<<"the value of a is "<<setw(4)<<c<<endl;

//********* Operators Precedence*******
  int a =3, b=4;
  //int c=(a*5)+b;

  int c=((((a*5)+b)-45)+87);
  cout<<c;
  return 0; 
}