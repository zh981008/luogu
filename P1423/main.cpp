#include <iostream>

using namespace std;

int main()
{
    float temp;
    float lenth = 2;
    int num = 0;
    cin>>temp;
    while(temp > 0) {
        temp -= lenth;
        lenth = 0.98*lenth;
        num+=1;
    }
    cout<<num;
    return 0;
}
