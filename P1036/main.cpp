#include <iostream>
#include <math.h>
using namespace std;
long long a[21];
bool zhishu(long long temp) {
    int n = sqrt(double(temp));
    for (int i = 2;i <= n;i++) {
        if(temp % i == 0){
            return false;
        }
    }
    return true;
}
long what(int lefted,long long sum,int left,int right) {
    if (lefted == 0) {/*cout<<sum<<zhishu(sum)<<endl;*/return zhishu(sum);}
    int zsum = 0;
    for (int i=left;i<=right;i++){
        zsum+=what(lefted-1,sum+a[i],i+1,right);
    }
    return zsum;
}
int main()
{
    int n,k;
    int i,j;
    cin>>n>>k;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<what(k,0,0,n-1);
    return 0;
}
