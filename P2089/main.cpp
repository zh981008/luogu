#include <iostream>

using namespace std;
int num = 0;
int findata[10000][10];
void kaoji(int data[10],int index,int sum,int lefted) {
    if(index == 10){
        if(sum == lefted) {
            for(int i =0;i<10;i++)
                findata[num][i]=data[i];
            num++;
        }
            return;
    }
    if(sum > lefted)
        return;
    //data[index] = temp;
    for (int i=1;i<=3;i++) {
        data[index] = i;
        kaoji(data,index+1,sum+i,lefted);
    }

    return;
}
int main()
{
    int data[10] ={0};
    int n;
    cin>>n;
    if(n<10||n>30) {
        cout<<0;
        return 0;
    }
    kaoji(data,0,0,n);
    cout<<num<<endl;
    for(int i =0;i<num;i++) {
        for(int j=0;j<10;j++){
            cout<<findata[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
