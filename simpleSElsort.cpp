#include<iostream>
using namespace std;
void ssort(int a[],int n)
{
int pos,small,temp;
for(int i=0;i<n;i++)
{
small=a[i];
pos=i;
for(int j=i+1;j<n;j++)
{
if(a[j]<small)
{pos=j; }
}
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
}
}


main()
{
int a[25],i,n;
cout<<"Enter the numbers of elements-\n";
cin>>n;
cout<<"Enter the elements-\n";
for(i=0;i<n;i++)
{cin>>a[i];
}
ssort(a,n);
cout<<"\nThe sorted array is\t";
for(i=0;i<n;i++)
{cout<<a[i]<<" ";
}
}
