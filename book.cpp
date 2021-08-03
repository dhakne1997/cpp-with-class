
// 2021 dhakne balaji computer engg All Rights Reserved

/*A book shop maintains the inventory of books that are being sold at the
shop. The list includes details such as author, title, price, publisher and no. of
copies. Whenever a customer wants a book, the sales person inputs the title
and author and the system searches the list and displays whether it is
available or not. If it is not, an appropriate message is displayed. If it is, then
the system displays the book details and requests for the number of copies
required. If the requested copies are available, the total cost of the requested
copies is displayed; otherwise the message “Required copies not in stock” is
displayed.*/
/*Incorporate the following features:
1.Value of attributes should be assign to some value.
2.Create Accept_book_Info() and Display_Book_Status() method */


#include<iostream>


#include<string.h>


using namespace std;

class books
{


public:
char author[20];
char title[20];
char publisher[50];
int price;
int copies;
int stock;

void setData()
{
cout<<"\nEnter the following details:\nAuthor's Name:";
cin>>author;
cout<<"\nTitle :";
cin>>title;
cout<<"\nPublisher :";
cin>>publisher;
cout<<"\nPrice :";
cin>>price;
cout<<"\nNumber of copies:";
cin>>copies;
stock=1;
}

void check()
{
char t[20],aut[20];
int cop;
cout<<"\nEnter the following details to search for book:\n";
cout<<"\nTitle of the book:";
cin>>t;
cout<<"\nEnter Author's Name :";
cin>>aut;
cout<<"\nNumber of copies:";
cin>>cop;
if(strcmp(t,title) & strcmp(aut,author) & (cop<=copies))
{
cout<<"\nBook is availabe in store\nPrice = "<<cop*price;
copies-=cop;
}
else
{
cout<<"Not available";
}
}
};


int main()
{

books bk;
bk.setData();
bk.check();


}