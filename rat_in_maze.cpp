# include<bits/stdc++.h>
using namespace std;

bool is_possible(vector<vector<int> >&m,int n,int x,int y,vector<vector<int> >&visited)
{
    if( (x >= 0 && x <n) && (y>=0 && y < n) && m[x][y] == 1 && visited[x][y] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve(vector<vector<int> >&m,int n,int x,int y, vector<vector<int> >&visited,string &path,vector<string>&ans)
{

    if( x == n-1 && y == n-1)
    {
        ans.push_back(path);
        return ;
    }
    visited[x][y] = 1;

    int nx = x+1;
    int ny = y;
    if(is_possible(m,n,nx,ny,visited))
    {
        path.push_back('D');
        solve(m,n,nx,ny,visited,path,ans);
        path.pop_back();
    }
    nx = x-1;
    ny = y;
    if(is_possible(m,n,nx,ny,visited))
    {
        path.push_back('U');
        solve(m,n,nx,ny,visited,path,ans);
        path.pop_back();
    }
    nx = x;
    ny = y+1;
    if(is_possible(m,n,nx,ny,visited))
    {
        path.push_back('R');
        solve(m,n,nx,ny,visited,path,ans);
        path.pop_back();
    }
    nx = x;
    ny = y-1;
    if(is_possible(m,n,nx,ny,visited))
    {
        path.push_back('L');
        solve(m,n,nx,ny,visited,path,ans);
        path.pop_back();
    }
    visited[x][y] = 0;
}

int main()
{
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    vector<vector<int> >m(n);
    cout<<"Enter path : "<<endl;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>m[i][j];
        }
        cout<<endl;
    }
    vector<string>ans;
    vector<vector<int> >visited(n);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            visited[i][j] = 0;
        }
    }
    string path = " " ;
    int x = 0;
    int y = 0;
    solve(m,n,x,y,visited,path,ans);
    for(int i = 0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;




}