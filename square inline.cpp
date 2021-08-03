
// 2021 dhakne balaji computer engg All Rights Reserved

/*Implement inline function for the following programsa.
Square of the number
b. Cube of the number
c. Area of rectangle*/





#include<iostream>
using namespace std;
class power
{
public:
inline int square(int n)
{
return n*n;
}
inline int cube(int n)
{
return n*n*n;
}

inline int rectangle(int l,int b)
{
return l*b;
}




};
int  main()
{
int n,r,l,b;
power p;

cout<<"\nEnter the Number n: \n" ;
cin>>n;

cout<<"\nEnter the length and breadth Number: \n" ;
cin>>l>>b;


r=p.square(n);
cout<<"\nSquare of "<<n<<" = "<<r<<endl;
r=p.cube(n);
cout<<"\nCube of "<<n<<" = "<<r<<endl;

r=p.rectangle(l,b);
cout<<"\n Rectangle of area is:"<<" = "<<r<<endl;


}

