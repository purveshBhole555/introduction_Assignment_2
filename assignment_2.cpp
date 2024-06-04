#include <iostream> 
using namespace std;

int main()
{

    // Q1
    int x;
cout << "Enter first number\n";
cin >> x; // user will give ‘x’ a value.
int y, m;
cout << "Enter second number and value for taking modulus\n";
cin >> y >> m; // user will give ‘y’ a value.
int Z = (x * y) % m;
cout << "Output is: " << Z;

// Output is 0

// Q2

int x;
cout<<"Enter first number\n";
cin>>x; // user will give 'x' a value.
int y;
cout<<"Enter second number\n";
cin>>y; // user will give 'y' a value.
cout<<(x!=y)<<" "<<(x>=y);

// Output is 1 1 

// Q3

int x,y;
cin>>x>>y;
x+=y;
x-=y;
x%=y;
cout<<x;

// output is 2

// Q4

float radius , height;
cout<<"Enter the radius and height "<<endl;
cin>>radius>>height;

cout<<"the volume of a cylinder is "<<3.14*radius*radius*height;

// output is 

Enter the radius and height 
4 
4
the volume of a cylinder is 200.96 















    return 0;
}


