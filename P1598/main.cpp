#include <iostream>
#include <cstdio>
using namespace std;
int data[27]={0};
int main()
{
    char temp[120];
    int maxnum = 0;
    for(int i = 0;i<4;i++) {
        gets(temp);
        for(int j=0;temp[j]!='\0';j++) {
            if(temp[j]<='Z' && temp[j]>='A') {
                data[temp[j]-'A']++;
            }
        }
    }
    maxnum = data[0];
    for(int i=0;i<26;i++){
        if(maxnum < data[i]) {
            maxnum = data[i];
        }
    }

    for(int i=0;i<maxnum;i++) {
        for (int j=0;j<26;j++){
            if(data[j] >= maxnum - i) {
                cout<<'*'<<' ';
            }
            else
                cout<<' '<<' ';
        }
        cout<<endl;
    }
    for (int j=0;j<26;j++)
        cout<<char ('A'+j)<<" ";
    return 0;
}
