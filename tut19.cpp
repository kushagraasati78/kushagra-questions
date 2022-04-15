#include <iostream>
using namespace std;

int add(int a, int b) {
    cout<<" Using function with 2 arguments"<<endl;
    return a+b;
}
int add(int a, int b, int c){
    cout<<" using function with 3 arguments"<<endl;
    return a+b+c;
}
// Calculate the volume of a Cylinder
int volume(double r, int h){
    return(3.14*r*h);
}
// Calculate the volume of a cube
int volume(int a){
    return a*a*a;
}

// Rectangular Box
int volume(int l, int b, int h){
    return(l*b*h);
}
int main() {
    cout<<"the sum of 3 and 6 is"<<add(3,6)<<endl;
    cout<<"the sum of 3 and 6 is"<<add(3,7,6)<<endl;
    cout<<"the volume of cuboid is"<<volume(3,7,6)<<endl;
    cout<<"the volume of cylinder is"<<volume(3,6)<<endl;
    cout<<"the cube of side 3 is"<<volume(3)<<endl;
    return 0;
}