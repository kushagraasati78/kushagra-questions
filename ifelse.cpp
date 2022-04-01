#include <iostream>

using namespace std;
int main() {
// cout<<"This is tutorial 9";

int age;
cout<<"Tell me your age"<<endl;
cin>>age;

// Selection Control Structure *******

// if((age<18) && (age>0)){
//     cout<<"you canot come to my party"<<endl;
// }
// else if(age==18){
//     cout<<"You are a kid you can come to my party"<<endl;
// }

// else if (age<1){
//     cout<<"you are a baby";
// }
// else{
//     cout<<"You can come to the party"<<endl;
// }

// Selection Control Structure using Switch case

switch (age)
{
case 18:
    cout<<"you are 18"<<endl;
    break;
case 22:
    cout<<"you are 22"<<endl;
    break;
case 2:
    cout<<"you are 2"<<endl;
    break;

default:
cout<<"No Special Cases"<<endl;
    break;
}

cout<<"done with switvh cases";
return 0;
}