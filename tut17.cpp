#include <iostream>
using namespace std;

// inline int product(int a,int b){
//     // static int c=0; // this executes only once
//     // c=c+1; //next time the function is run value of c is retained
//     // return a*b+c;
//     //return a*b;
//     // Dont use inline with static
// }

float moneyReceived(int Kushagramoney, float factor=1.04){
    return Kushagramoney * factor;
}
int main() {
     // int a,b;
     //cout<<"Enter the value of a and b"<<endl;
     //cin>>a>>b;
     int money=100000;
     //cout<<"the product of a and b is"<<product(a,b)<<endl;
    //  cout<<"the product of a and b is"<<product(a,b)<<endl;
    //  cout<<"the product of a and b is"<<product(a,b)<<endl;
    //  cout<<"the product of a and b is"<<product(a,b)<<endl;
    //  cout<<"the product of a and b is"<<product(a,b)<<endl;
    cout<<"if you have"<<money<<" rs in bank account, you will receive  "<<moneyReceived(money)<< " Rs after 1 year";
    cout<<"if you have"<<money<<" rs in bank account, you will receive  "<<moneyReceived(money, 1.20)<< " Rs after 1 year";
    
    return 0;
}