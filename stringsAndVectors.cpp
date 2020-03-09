#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> myVec(10);
    iota(begin(myVec),end(myVec),0);//stores successive increasing values
    for(int i=0;i<myVec.size();++i)
    {

        cout<<myVec[i]<<" ";
    }

    for(auto y: myVec)
    {

        cout<<y<<" ";
    }

    char cString[10]={'A',' ','S','t','r','\0'};//bad if u forget the null char
    cout<<"array size: "<<sizeof(cString)<<endl;

    vector<string> strVec(10);
    string str("I'm a string");
    strVec[0]=str;
    cout<<str[0]<<endl;
    cout<<str.at(0)<<endl;
    cout<<"first char "<<str.front()<<" last char "<<str.back()<<endl;
    cout<<"length is "<<str.length()<<endl;
    string str2(str);
    strVec[1]=str2;
    string str3(str,4);
    strVec[2]=str3;
    string str4(5,'x');//copy x five times
    strVec[3]=str4;
    strVec[4]=str.append(" and you're not");
    str+= " and you're not ";
    cout<<"appended string"<<str<<endl;

    str.append(str,34,37);
    cout<<"append with indexes: "<<str<<endl;
    strVec[5]=str;

    str.erase(13,str.length()-1);
    strVec[6]=str;

    if(str.find("string") != string::npos)
        cout<<"first index:"<<str.find("string")<<endl;


    cout<<"substring: "<<str.substr(6,6)<<endl;//(start,length)

    reverse(str.begin(),str.end());
    cout<<"reversed string: "<<str<<endl;

    transform(str2.begin(),str2.end(),str2.begin(),::toupper);
    cout<<"to upper: "<<str2<<endl;
    transform(str2.begin(),str2.end(),str2.begin(),::tolower);
    cout<<"to lower: "<<str2<<endl;
    //a-z : 97-122
    //A-Z: 65-90
    char aChar='A';
    int aInt =aChar;
    cout<<"a code "<<(int)'a'<<endl;

    string strNum=to_string(1+2);
    cout<<"string "<<strNum<<endl;


    for(auto y: strVec)
    {

        cout<<y<<endl;
    }

    //convert string to int and make a secret message

    string normalStr,secretStr="";
    cout<<"enter a string"<<endl;
    cin>>normalStr;
    for(char c:normalStr)
        secretStr+=to_string((int)c);
    cout<<"secret string is: "<<secretStr<<endl;
}
