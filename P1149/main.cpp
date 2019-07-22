#include <iostream>

using namespace std;
int data[1000];
int huochai[10]={6,2,5,5,4,5,6,3,7,6};
int findnum(int num) {
    int sum = 0;
    for(int i = num;i>0;i/=10) sum+=huochai[i%10];
    if(num == 0) sum = huochai[0];
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int i,j;
    int cont = 0;
    for(i=0;i<1000;i++)
        for(j=0;j<1000;j++)
            if(findnum(i)+findnum(j)+findnum(i+j)+4==n)
                cont++;
    cout<<cont;

    return 0;
}

