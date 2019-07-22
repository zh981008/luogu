#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int i =0;
    int flag = 0;
    if(str[0]=='-')
        i = 1;
    reverse(str.begin()+i,str.end());
    string::iterator it;
    string temp;
    for(it = str.begin();it!=str.end();it++){

        if(*it == '-') {
            temp+=*it;
            continue;
        }

        if(flag == 0){
            if(*it=='0')
                continue;
            else {
                flag = 1;
            }
        }
        temp+=*it;
    }
    if(temp.size()==0)
        temp+='0';
    if(temp.size()==1&&temp[0]=='-')
        temp+='0';

    cout<<temp;

    return 0;
}
