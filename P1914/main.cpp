#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    string temp;
    cin>>n>>temp;
    while(n>=26){
        n-=26;
    }
    for(string::iterator it = temp.begin();it!=temp.end();it++){

        cout<<char ((*it-'a'+n)%26 + 'a');
    }
    return 0;
}
