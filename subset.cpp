# include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&num,int n,int index,vector<int>&output, vector<vector<int> >&ans)
{
    if( index > n)
    {
        ans.push_back(output);
        return ;
    }
    solve(num,n,index+1,output,ans);
    int ch = num[index];
    output.push_back(ch);
    solve(num,n,index+1,output,ans);


}

int main()
{
    int n;
    cout<<"Enter size of vector : "<<endl;
    cin>>n;
    vector<int>num(n);
    for(int i = 0;i<n;i++)
    {
        cin>>num[i];
    }
    vector<vector<int> >ans;
    vector<int>output;
    int index = 0;
    solve(num,n,index,output,ans);
    //return ans;
    return 0;


}