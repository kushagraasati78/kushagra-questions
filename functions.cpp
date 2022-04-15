#include <iostream>
using namespace std;



// Function Prototye

//type -function name (arguments0)
// int sum(int a,int b); Acceptable
// int sum(int a, b); Not Acceptable
// int sum(int ,int ); Acceptable Only Type INT


int sum(int ,int );
void g();
int main() {
    int num1, num2;
    cout<<"Enter First Number"<<endl;
    cin>>num1;
    cout<<"Enter the second Number";
    cin>>num2;
    cout<<"the sum is "<<sum(num1,num2);
    g();
    return 0;
}

    int sum(int a, int b){
    int c=a+b;
    return c;
    }
void g() {
    cout<<" \nHello Gm";

    }