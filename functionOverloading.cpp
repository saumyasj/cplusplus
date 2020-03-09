#include<bits/stdc++.h>
using namespace std;
//function overloading
int printthis(int n)
{

    cout<<n;
}
char printthis(char* ch)
{
    cout<<ch;
}
int main()
{
  printthis("Hello there!");
  printthis(20);
}
