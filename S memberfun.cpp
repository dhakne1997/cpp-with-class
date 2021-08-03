
// 2021 dhakne balaji computer engg All Rights Reserved

/*Demonstrate static member function with static data member in one
class.*/


#include <iostream>
using namespace std;
class Demo
{
	private:	
		static int X;
		static int y;
	public:
		static void fun()
		{
			cout <<"Value of X: " << X << endl;
		}
		public:
		static void fun1()
		{
			cout <<"Value of y: " << y << endl;
		}
		
		
		
		
		
};
//defining
int Demo :: X =10;
int Demo :: y =20;

int main()
{
	Demo X;
Demo y;
	X.fun();
y.fun1();
	
	return 0;
}