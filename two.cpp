#include<bits/stdc++.h>
using namespace std;
int maxLen(int arr[], int N)
{
    unordered_map<int,int> m;
    int sum=0,length=0,maximum=0;
    for(int i=0;i<N;i++)
    {
        if(arr[i]==0)
           arr[i]=-1;
    }
    for(int i=0;i<N;i++)
    {
        sum=sum+arr[i];
        if(sum==0)
        {
            length=i+1;
        }
         if(m.find(sum)!=m.end())
    {
        length=max(length,i-m[sum]);
        
    }
    if(m.find(sum)==m.end())
    {
        m[sum]=i;
    }
    }
return length;
}

int main()
{
    int n=4;
    int arr[n]={0,1,0,1};
    cout<<maxLen(arr,n);
}