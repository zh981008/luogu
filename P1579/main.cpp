#include <iostream>
#include <math.h>
using namespace std;
int isPrime(int n)        //此方法和方法2类似
{
    if(n==0) return 0;
    int i;
    int k = sqrt(n);
    for(i = 2; i <= k ; i++)
    {
        if(n % i ==0)
            break;
    }
    if(i >k)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    int i,j;
    cin>>n;
    for(i=2;i<n;i++){
        for(j=2;j<n;j++){
            if(isPrime(i)&&isPrime(j)&&isPrime(n-i-j)){
                cout<<i<<' '<<j<<' '<<n-i-j;
                return 0;
            }
        }
    }

    return 0;
}
