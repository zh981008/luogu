#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
bool cmp(int x,int y)
{
    return x<y;
}
int main()
{
    int n,s;
    int a,b;
    int i,j;
    int cont = 0;
    int finalnum = 0;
    int data[6000];
    cin>>n>>s;
    cin>>a>>b;
    for(i=0;i<n;i++){
        int high,weight;
        cin>>high>>weight;
        if(a+b>=high){
            data[cont++] = weight;
        }
    }
    sort(data,data+cont,cmp);
    for(i=0;i<cont;i++){
        if(s >= data[i]) {
            s-=data[i];
            finalnum++;
        }
        else{
            break;
        }
    }
    cout<<finalnum;
    return 0;
}
