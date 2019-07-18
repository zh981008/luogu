#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long sum = 0;
    long long maxsum = 0;
    long long temp = 0;
    long long now = 0;
    while(n--){
        cin>>now;
        if(now >= temp){
            sum++;
            if(sum>maxsum) {
                maxsum = sum;
            }
        }
        else {
            if(sum>maxsum) {
                maxsum = sum;
            }
            sum = 1;
        }
        temp = now;

    }
    cout <<maxsum<< endl;
    return 0;
}
