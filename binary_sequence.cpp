# include<bits/stdc++.h>
using namespace std;

void solve(int ls,int rs,char* arr,int i,int j)
{
    if( i > j)
    {
        if( ls == rs)
        {
            cout<<arr<<endl;
            
        }
        return ;
    }
    arr[i] = '0';
    arr[j] = '0';
    solve(ls,rs,arr,i+1,j-1);
    arr[i] = '0';
    arr[j] = '1';
    solve(ls,rs+1,arr,i+1,j-1);
    arr[i] = '1';
    arr[j] = '0';
    solve(ls+1,rs,arr,i+1,j-1);
    arr[i] = '1';
    arr[j] = '1';
    solve(ls+1,rs+1,arr,i+1,j-1);


}

int main()
{
    int n;
    cout<<"Enter Number : "<<endl;
    cin>>n;
    char* arr = new char[2*n];
    int ls = 0;
    int rs = 0;
    int i = 0;
    int j = 2*n-1;
    solve(ls,rs,arr,i,j);
    return 0;
}