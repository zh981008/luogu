#include <iostream>
#include <iomanip>
float lp = 0.4463;
float mp = 0.4663;
float hp = 0.5663;
int lw = 150;
int mw = 400;
using namespace std;
int main()
{
    int temp = 0;
    float sum = 0;
    cin>>temp;

    if (temp <= lw)
        sum = temp * lp;
    else if (temp <= mw)
        sum = lw * lp + (temp - lw) * mp;
    else if (temp <=10000)
        sum = lw * lp + (mw - lw) * mp + (temp - mw) * hp;
    cout.setf(ios::fixed);
    cout <<setprecision(1)<<sum;
    cout.unsetf( ios::fixed );
    return 0;
}
