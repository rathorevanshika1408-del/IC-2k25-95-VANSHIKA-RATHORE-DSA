#include<iostream.h>
#include <conio.h>
#define N 5
class linear
{
   int a[N],num;
  public:
   linear();
   void display();
   void search();
};
linear::linear()
{
 cout<<"ENTER THE DATA: ";
 for(int i=0;i<N ; i++)
 { cin>>a[i];
 }
}
void linear ::display()
{
 cout<<" THE REQUIRED VALUE: ";
 for(int i=0; i<N; i++)
 { cout<<a[i]<<" ";
 }
}
void linear::search()
{
cout<<"ENTER ELEMENT TO SEARCH: ";
cin>>num;
for(int i=0; i<N; i++)
{
 if ( a[i]==num)
 { break; }
}
if (i==N)
cout<<"ELEMENT not found";
else
cout<<"ELEMENT FOUND AT "<<i+1<<" position";
}
 void main()
 {
 clrscr();
 linear l;
 l.display();
 l.search();
 getch();
 }
