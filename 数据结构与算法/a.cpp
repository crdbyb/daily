#include<iostream>
#include<math.h>
using namespace std;
int count=0;
void fun(int n)
{
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            count++;
            fun(n/i);
        }
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    fun(n);
cout<<count+1<<endl;
}
