#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int m = 0,n = 1;
    int x;
    cin>>m>>x;

    while(n <= m){
        int a,b,c;
        a = m/(10*n);//��ǰΪ��ߵ����ִ�
        b = m/n%10;//��ǰλ����
        c = m%n;//��ǰλ�ұ�����
        if(x) {
            if(b > x) sum += (a+1)*n;
            if(b == x) sum += a*n + c + 1;
            if(b < x) sum += a*n;
        }
        else {
            if(b > x) sum += a*n;
            if(b == x) sum += (a-1)*n + c + 1;
        }
        n*=10;
    }
    cout<<sum;

    return 0;
}
