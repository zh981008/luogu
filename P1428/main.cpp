#include <iostream>

using namespace std;
int main()
{
    int n,i=0,j=0,k=0;
    int data[200];
    int temp[200]={0};
    cin>>n;
    while (n--) {
        cin>>data[i++];
    }

    for(j=0;j<i;j++){
        for(k=1;k<=j;k++){
            if(data[j] > data[j-k])
                temp[j]++;
        }
    }

    for(j=0;j<i;j++){
        cout<<temp[j]<<' ';
    }

}
