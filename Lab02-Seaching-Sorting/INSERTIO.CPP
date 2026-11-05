 #include<iostream.h>
#include<conio.h>
#define MAX 5
void display(int a[]){
for(int i=0;i<MAX;i++){
cout<<a[i]<<" ";
 }
}
void insertion_sort(int a[]){
int temp;
int j;
for( int i=0;i<MAX;i++)
      {temp=a[i];
	j=i-1;
while( j>=0 &&a[j]>temp)
{
  a[j+1]=a[j];
  j--;
}
a[j+1]=temp;
      }
}
int main(){
int a[MAX];
cout<<"enter array elements:"<<endl;
 for(int i=0;i<MAX;i++){
     cin>>a[i];
 }
 cout<<"sorted elements"<<endl;
 insertion_sort(a);
  display(a);
  getch();
  return 0;

  }