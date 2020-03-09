#include<bits/stdc++.h>
using namespace std;

vector<int> findmatches(string str,string substring)
{
    vector<int> matchingIndexes;
    int index=str.find(substring,0);
    while(index!=string::npos)
    {
        matchingIndexes.push_back(index);
        index=str.find(substring,index+1);

    }
    return matchingIndexes;
}
int main()
{
    string str="To be or not to be";

    vector<int> matches=findmatches(str,"be");
    for(int i=0;i<matches.size();i++)
    {
        cout<<matches[i]<<endl;
    }
}
