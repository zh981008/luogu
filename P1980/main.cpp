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
        a = m/(10*n);//当前为左边的数字串
        b = m/n%10;//当前位数字
        c = m%n;//当前位右边数字
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
