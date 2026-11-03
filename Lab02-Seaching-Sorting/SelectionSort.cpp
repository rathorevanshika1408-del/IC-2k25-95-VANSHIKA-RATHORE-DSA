#include<iostream.h>
#include<conio.h>
#define max 5
void display(int a[]){
for(int i=0;i<max;i++){
cout<<a[i]<<" ";
}
}
void selection_sort(int a[])
{
	for(int i=0;i<max-1;i++)
	{
	   for(int j=i+1;j<max;j++)
	   {
		if(a[i]>a[j])
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
	       }
	  }
       }
}

void main()
{
  int a[max];
  clrscr();
  cout<<"enter elements";
    for(int i=0;i<max;i++){
      cin>>a[i];
      }
      cout<<"before sort"<<endl;
      display(a);
      cout<<endl;
      selection_sort(a);

      cout<<"after sort"<<endl;
      display(a);
      getch();
      }

