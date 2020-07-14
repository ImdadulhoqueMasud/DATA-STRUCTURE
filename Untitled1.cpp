#include<iostream>
using namespace std;
int main()
{
int n,k=0,n2,q,t,q1,sum=0;
cin>>n;
int arr[n];
int i,j;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cin>>q;
while(q--)
{
cin>>q1;
for(i=0;i<n;i++)
{
if(arr[i]<=q1)
{
k=k+1;
sum=sum+arr[i];
}

}
cout<<k<<" "<<sum<<endl;
}
return 0;
}
