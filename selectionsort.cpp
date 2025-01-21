#include<iostream>
using namespace std;
void selection(int a[],int n)
{
	int i,j,temp,small;
	for(i=0;i<n-1;i++)
	{
		small=i;
		for(j=i+1;j<n;j++)
		if(a[j]<a[small])
		small=j;
		int temp=a[small];
		a[small]=a[i];
		a[i]=temp;
		
	}
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
int main()
{
	int a[10],n,i;
	cout<<"Enter the size of list: ";
	cin>>n;
	cout<<"Enter list elements: "<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"List before sorting: "<<endl;
	print(a,n);
	cout<<"List after sorting: "<<endl;
	selection(a,n);
	print(a,n);
	return 0;
}
