#include<bits/stdc++.h>
using namespace std;

string trimWhitespace(string theString)
{
    string whitespaces(" \t\f\n\r");
    theString.erase(theString.find_last_not_of(whitespaces)+1);
    theString.erase(0,theString.find_first_not_of(whitespaces));
    return theString;
}
int main()
{
    string aString="     just some random words    ";
    aString=trimWhitespace(aString);
    cout<<"*"<<aString<<"*"<<endl;
}
