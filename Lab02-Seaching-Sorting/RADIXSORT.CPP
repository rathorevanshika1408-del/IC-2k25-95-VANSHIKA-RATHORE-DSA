#include<iostream.h>
#include<conio.h>
#define MAX 5
int a[MAX]={170,45,90,78,283};
void r_sort(){
	int i,b[MAX],pass=1,m,j;
	int bucket[10];
	int pos;
	m=a[0];
for(i=0;i<MAX;i++){
    if(a[i]>m){
	m=a[i];
 }
}
for(pos=1;m/pos>0;pos*=10){
for(i=0;i<10;i++){
	bucket[i]=0;
	}
for(i=0;i<MAX;i++){
	bucket[(a[i]/pos)%10]++;
	}
for(i=1;i<10;i++){
	bucket[i]+=bucket[i-1];
	}
for(i=MAX-1;i>=0;i--){
	b[bucket[(a[i]/pos)%10]-1]=a[i];
	bucket[(a[i]/pos)%10]--;
}
for(i=0;i<MAX;i++){
	a[i]=b[i];
	pass++;
}
}
}
int main(){
 int i;
 clrscr();
 cout<<"original array:\n"<<endl;
 for(i=0;i<MAX;i++){
  cout<<a[i]<<" ";
 }
 cout<<"\n";
 r_sort();
 cout<<"\n sorted array:";
 for(i=0;i<MAX;i++){
 cout<<a[i]<<"  ";
 }
cout<<"\n";
return 0;
}
