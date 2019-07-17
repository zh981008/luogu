#include <iostream>

using namespace std;

int main()
{
    int x;
    long long day;
    long long sum = 0;
    cin>>x>>day;
    while (day--) {
        if(x != 6 && x != 7){
            sum+=250;

        }
        x++;
        if(x == 8)x = 1;

    }
    cout<<sum;
    return 0;
}
