

// 2021 dhakne balaji computer engg All Rights Reserved


/*Write a program to implement flight class with data member as flight no.,
source, destination and fare. Write a copy constructor and a member
function to display the flight information */



//__________________________________________________________________________**********************___________________________________________________________________________




#include <iostream> 
 //#include <conio> 
 #include <string> 
 
 using namespace std;
 const int size=10; 
 class airlines 
 { 
          public: 
                            char flight_no[size]; 
                            char source[size]; 
                            char dest[size]; 
                            int fare; 
          public: 
                           airlines( char* fl,char* s,char* d,int f) 
                      { 
                           strcpy(flight_no,fl); 
                           strcpy( source,s); 
                           strcpy( dest,d); 
                           fare=f; 
                      } 
                           void describe() 
                       { 
                            cout<<"\n" ; 
                            cout<<"Flight Number :"<<flight_no<<endl; 
                            cout<<"Source : "<<source<<endl; 
                            cout<<"Destination : "<<dest<<endl; 
                            cout<<"Fare : "<<fare<<endl; 
                       } 
 }; 
                 int main( ) 
           { 
                      airlines a1(" AI007", "Delhi", "Bombay" ,6000); 
                      airlines a2(" AI008", "Delhi", "Madras" ,8000); 
                      a1.describe(); 
                      a2.describe(); 
           } 