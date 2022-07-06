# include<bits/stdc++.h>
using namespace std;

void  parenthesis(int curopen,int curclose,int remopen,int remclose,string &output)
{
    if( remopen == 0 && remclose == 0)
    {
        cout<<output<<" "<<endl;
        return ;
    }
    if(remopen > 0)
    {
        output.push_back('(');
        parenthesis(curopen+1,curclose,remopen-1,remclose,output);
        output.pop_back();
    }
    if( remclose > 0 && curopen > curclose)
    {
        output.push_back(')');
        parenthesis(curopen,curclose+1,remopen,remclose-1,output);
        output.pop_back();
    }

}

int main()
{
    int n;
    cout<<"Enter value of n : "<<endl;
    cin>>n;
    int curopen = 1;
    int curclose = 0;
    int remopen = n-1;
    int remclose = 0;
    string output = "(";
    parenthesis(curopen,curclose,remopen,remclose,output);
    return 0;

}

