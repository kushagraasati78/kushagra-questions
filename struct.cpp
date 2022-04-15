#include <iostream>
using namespace std;
// typedef struct employee
// {
//     /* data */
//     int eID;
//     char favChar;
//     float salary;
// } ep;

   union money
{
    int rice;
    char car;
    float pounds;
};


int main() {
    enum Meal { breakfast, lunch, dinner};
    // cout<<breakfast<<lunch<<dinner;
    Meal m1 =lunch;
    cout<<m1;
    // cout<<(m1==2); { True of False in 0 and 1}
    // // ep harry;
    // union money m1;
    // m1.rice=34;
    // m1.car='c';
    // m1.pounds=344.8;
    // cout<<m1.pounds;
    

    
    // harry.eID=1;
    // harry.favChar='c';
    // harry.salary=120000;
    // kushagra.salary=25000;

    // cout<<harry.salary<<endl;
    // cout<<harry.eID<<endl;
    // cout<<harry.favChar<<endl;
    // cout<<kushagra.salary<<endl;




    return 0;
}