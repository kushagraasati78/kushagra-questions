#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator {
 public: 
        int add(int a, int b)
{
    return (a + b);

}

  int sumRealComplex(Complex , Complex);


};

class Complex
{
    int a, b;
    friend int Calculator :: sumRealComplex(Complex, Complex);
    public:
            void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2)
{   
    return (o1.a + o2.a);
}

int main()
{
Complex o1,o2;
o1.setNumber(1,2);
o2.setNumber(5,7);
Calculator calc;
int res=calc.sumRealComplex(o1, o2);
cout<<"the sum of real part of o1 and 02 is "<<res<<endl;

    return 0;
}