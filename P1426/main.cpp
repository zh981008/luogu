#include <iostream>

using namespace std;

int main()
{
    int s,x;
    double temp = 0;

    cin>>s>>x;
    double add = 7;
    if(temp<=s+x && temp>=s-x){
            if(temp+add<=s+x && temp+add>=s-x ) {
                cout<<'y';
                return 0;
            }
        }
    temp+=add;
    while(temp < s+x) {
        if(temp<=s+x && temp>=s-x){
            if(temp+add*0.98<=s+x && temp+add*0.98>=s-x ) {
                cout<<'y';
                return 0;
            }
        }
        add*=0.98;
        temp+=add;

    }

    cout<<'n';
    return 0;
}
