#include<iostream>
 using namespace std;
class book
{
public:
char book_name;
float price;
int page;
void setdata()
{
{
 cout<<"Enter the name of book";
 cin<< name;
 cout<<"Enter the price of book"; 
 cin<<price;
 cout<<"Enter the page of book";
 cin<<page;
}
void getdata() 
cout<<"\n Enter the name of book"<<name;
cout<<"\n Enter the price of book"<< price;
cout<<"\n Enter the page of book"<< page; 
}
};
 
class author
{
public:
char name;
int age; 
 
void show()
{
 cout<<"Enter the name of author";
 cin<<name;
 cout<<"Enter the age of author";
 cin<<age;
} 
void showdata()
{
  cout<<"\n Enter the name of author"<<name;
  cout<<"\nEnter the age of author"<<age;<<endl;
}
};

class library:: public_book :: public_author
{ 
 public:
  char name_library;
  int address;

 
void sate()
{
 cout<<"Enter the name of library";
 cin<<name; 
 cout<<"Enter the address of library";
 cin<<address;
}   
void printdata()
{
 cout<<"\n Enter the name of library"<<name; 
 cout<<"\n Enter the address of library"<<address;
}
};

void main()
{
 library l1;
 l1.gatedata();
l1.showdata();
}

