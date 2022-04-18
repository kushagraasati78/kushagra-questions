#include <iostream>
using namespace std;
int main()
{
    int t,n,m,k;
    std::cin>>t;
    while(t--)
    {
        std::cin>>n>>m>>k;
        int dif=abs(m-n);
        if(dif>k)
        {
            cout<<abs(dif-k)<<endl;
        }
        else
        {
           cout<<0<<endl;
        }
        
    }
}