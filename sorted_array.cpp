# include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n)
{
    if( n == 0 || n == 1)
    {
        return true;
    }
    if( arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return sorted(arr+1,n-1);

    }
}
int main()
{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    if( sorted(arr,n))
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";
    }
    return 0;
}