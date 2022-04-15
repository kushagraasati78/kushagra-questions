#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,6,8};
     int sum=0;


     for (int i = 0; i < 6; i++)
     {
        sum+=arr[i];
     }
      cout<<"the sum is " <<sum<<endl;
    return 0;
}