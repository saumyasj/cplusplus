#include <bits/stdc++.h> //preprocessor directives that store preefined functions 
using namespace std;

int main()
{
    //changing string to integer 
    string sAge=0;
    cout<<"enter age";
    getline(cin,sAge);
    int nAge=stoi(sAge);
    cout<<nAge<<endl;


    int arr[10]={2,3};
    cout<<"array size is: "<<sizeof(arr)/sizeof(*arr)<<endl;

    vector<int> vec(2);
    vec[0]=10;
    vec[1]=20;
    vec.push_back(30);
    cout<<vec.size();
    
    //diplaying words of an input string one by one 
    
    string sSentence="This is a random string";
    vector<string> vecsWords;
    stringstream ss(sSentence);
    string sIndivStr;
    char cSpace=' ';
    while(getline(ss,sIndivStr,cSpace)){
        vecsWords.push_back(sIndivStr);
    }

    for(int i=0;i<vecsWords.size();++i)
    {
        cout<<vecsWords[i]<<endl;
    }

}
