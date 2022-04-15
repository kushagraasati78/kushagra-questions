#include <iostream>
using namespace std;

int main()
{
    // int i=0;
    // int Arr[5] = {23,45,455,89,93};
    // cout<<"using while loops"<<endl;
    // while (i<5)
    // {
    //     cout<<i<<" is "<<Arr[i] <<endl;
    //     i=i+1;
    // }
    //    int array[4] ={10,20,30,40};
    //    cout<<array[3]<<endl;

    int n;
    cin >> n;

    int array[n];

//    for (int i = 0; i <n; i++)
//    {
//        cin>>array[i]
//        ;

//    }
   
//    for (int i = 0; i < n; i++)
//    {
//         cout<<array[i]<<endl;;
//    }
   
    cin>>array[0];
    cin>>array[1];
    cin>>array[2];
    cin>>array[3];
    cin>>array[4];

    cout<<"The Size is "<<array[0]<<endl;
    cout<<"The Size is "<<array[1]<<endl;
    cout<<"The Size is "<<array[2]<<endl;
    cout<<"The Size is "<<array[3]<<endl;
    cout<<"The Size is "<<array[4]<<endl;
    

    return 0;
}