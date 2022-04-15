#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int maxNo=INT_MIN;
int minNO=INT_MAX;


for (int i = 0; i < n; i++)
{
    if (arr[i]>maxNo)
    {
        maxNo=arr[i];

    }
    if (arr[i]<minNO)
    {
        minNO=arr[i];
    }
    // maxNo=max(maxNo,arr[i]);
    // minNO=min(minNO,arr[i]);
    
    
}

     cout<<"The Max Value is "<<maxNo<<"\n The Min Value is "<<minNO<<endl;




    return 0;
}