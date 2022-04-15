#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
    
    }
    
    int maxNO=INT_MIN;
    int minNo=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNO=max(maxNO,arr[i]);
        minNo=min(minNo,arr[i]);
        
    }

    cout<<"The max Number is "<<maxNO<<"the Min Number is  "<<minNo;
    

    return 0;
}
