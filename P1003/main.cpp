#include <iostream>

using namespace std;
int data[10001][5];
int main()
{
    int n;
    int i,j,k;
    int x,y;
    int cont = 0;
    cin>>n;
    for(i=0;i<n;i++) {
        for(j=0;j<4;j++)
            cin>>data[i][j];
    }
    cin>>x>>y;

    for(i=n-1;i>=0;i--) {
        int a,b,c,d;
        a=data[i][0];
        b=data[i][1];
        c=data[i][2];
        d=data[i][3];
        if(x>=a&&x<=a+c&&y<=b+d&&y>=b){
            cont++;
            cout<<i+1;
            return 0;
        }
    }
    if(!cont)
        cout<<-1;
    return 0;
}
