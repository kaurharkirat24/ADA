#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,se,first,last,mid;
	cout<<"Enter the number of elements in array: "<<endl;
	cin>>n;
	cout<<"Enter the array elements (sorted): "<<endl;
	for(i=1;i<=n;i++)
	cin>>a[i];
    cout<<"Enter the element to be searched for: ";
	cin>>se;
	first=1;
	last=n;
	mid=(first+last)/2;
	while(first<last && a[mid]!=se)
	{
		if(a[mid]<se)
		first=mid+1;
		if(a[mid]>se)
		last=mid-1;
		mid=(first+last)/2;
	}
	if(a[mid]==se)
	cout<<"Element found at position: "<<mid<<endl;
	else
	cout<<"Element not found"<<endl;
}
