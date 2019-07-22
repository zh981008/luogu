#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    long long data[1200];
    data[0]=1;
    data[1]=1;
    for(int i=2; i <= n;i++) {
        if(i%2==0){
            data[i] = data[i-1] +data[i/2];
        }
        else {
            data[i] = data[i-1];
        }
    }
    //for(int i=0;i<n;i++)
        cout<<data[n]<<endl;
    /*cout<<26+1*pow(10,2)<<endl;

    cout<<pow(10.0,1+1)<<endl;
    cout<<pow(10,2)<<endl;
    cout<<(int)pow(10.0,2.0)<<endl;
    cout<<(int)pow(10,2)<<endl;*/

    return 0;
}
