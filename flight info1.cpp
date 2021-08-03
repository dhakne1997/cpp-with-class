// 2021 dhakne balaji computer engg All Rights Reserved


/*Write a program to implement flight class with data member as flight no.,
source, destination and fare. Write a copy constructor and a member
function to display the flight information */



//__________________________________________________________________________**********************___________________________________________________________________________








#include<iostream>

#include<string>

using namespace std;

class flight

{

        int fno;

        char source[20];

        char desti[20];

        float fare;

        public:

        flight(int a,const char b[],const char c[],float d)

        {

          fno=a;

          strcpy(source,b);

          strcpy(desti,c);

          fare=d;

        }

        ~flight()

        {

          cout<<"\nDestructor";

        }

        void display();

};

 

void flight::display()

{

        cout<<"\nFlight Number :"<<fno;

        cout<<"\nSource Station :"<<source;

        cout<<"\nDestination Station :"<<desti;

        cout<<"\nFare :"<<fare;

}

int  main()

{

  

        flight f1(1234,"Varanasi","Goa",7001.50);

        f1.display();

      return 0;
  }

