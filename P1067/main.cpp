#include <iostream>
#include <string.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;
extern char *itoa( int value, char *str,int radix);
string data[101];
int main()
{
    int n;
    int i,j,k;
    string s;
    char ss[1000];
    cin>>n;
    for(i=0;i<=n;i++){
        cin>>data[i];
    }
    for(i=0;i<=n;i++){

        string coe = data[i];
        string x = "x";
        string index = "";
        string connect = "+";
        int tmp = 0;
        int flag =0;

        if(coe.compare("0")==0){
            continue;
        }
        if(coe.compare("1")==0&&n!=i){
            coe="";
        }
        if(coe.compare("-1")==0&&n!=i){
            coe="-";
        }
        //cout<<data[i]<<endl;
        if(data[i+1][0]=='-'){
            //cout<<i+1<<endl;
            connect ="";
        }
        if(data[i+1].compare("0")==0&&i==n-1){
            connect ="";
        }
        if(data[i+1].compare("0")==0) {
            for(j=i+2;j<=n;j++){
                if(data[j].compare("-")==0) {
                    flag = 0;
                    break;
                }
                if(data[j].compare("0")!=0){
                        flag = 1;
                }
            }
        }
        if(flag==0)
            connect="";
        if(i==n){
            x="";
        }
        if(i!=n && i!= n-1){
            index="^";
            tmp = n-i;
        }
        cout<<coe<<x<<index;
        if(tmp!=0)
            cout<<tmp;
        cout<<connect;
    }


    return 0;
}
