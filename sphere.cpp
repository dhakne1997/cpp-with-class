

// 2021 dhakne balaji computer engg All Rights Reserved


/*Write a Program to implement a sphere class with appropriate members
and
member function to find the surface area and the volume.
(Surface = 4 p r2 and Volume = 4/ 3 p r3) */



#include<iostream>

using namespace std;

class sphere

{

        float sarea,vol;

        public:

        void surfacearea(int r)

        {

          sarea=4*(3.14)*(r*r);

        }

        void volume(int r)

        {

          vol=(4.0/3)*(3.14)*(r*r*r);

        }

        void display()

        {

          cout<<"\nSurface Area of Sphere :"<<sarea;

          cout<<"\nVolume of Sphere :"<<vol;

        }

};

int main()

{

      

        sphere s1;

        int r;

        cout<<"\nEnter Radius of Sphere :";

        cin>>r;

        s1.surfacearea(r);

        s1.volume(r);

        s1.display();

       return 0;

}