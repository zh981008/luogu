#include <iostream>

using namespace std;
long long temp[25][25][25]={0};
long long fuction(long long a,long long b,long long c);
long long findtemp(int a,int b,int c);
long long fuction(long long a,long long b,long long c){

    if(a<=0||b<=0||c<=0){
        return 1;
    }
    else if(temp[a][b][c]!=0){
        return temp[a][b][c];
    }
    else if(a>20||b>20||c>20){
        return findtemp(20,20,20);
    }
    else if(a<b&&b<c) {
        temp[a][b][c] = fuction(a,b,c-1) + fuction(a,b-1,c-1) - fuction(a,b-1,c);
    }
    else
        temp[a][b][c] = fuction(a-1,b,c)+fuction(a-1,b-1,c)+ fuction(a-1,b,c-1) - fuction(a-1,b-1,c-1);
    return temp[a][b][c];

}
long long findtemp(int a,int b,int c){
    if(temp[a][b][c]!=0){
        return temp[a][b][c];
    }
    else{
        temp[a][b][c] = fuction(a,b,c);
        return temp[a][b][c];
    }
}
int main()
{
    int a,b,c;
    int x,y,z;
    cin>>a>>b>>c;
    while(1){

        if (a==-1&&b==-1&&c==-1)
            return 0;
            x=a;
            y=b;
            z=c;
        if(a>20) x=21;
        if(b>20) y=21;
        if(c>20) z=21;

        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<fuction(x,y,z)<<endl;
        cin>>a>>b>>c;
    }
    return 0;
}
