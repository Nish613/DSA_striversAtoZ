#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    bool f=true;

    int a[n];
    cout<<"Enter ele : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1]){}
        else
        
        {
            cout<<"Not sorted";
            f=false;
            break;
        }
    }
    if(f==true)
    cout<<"Sorted";
}
