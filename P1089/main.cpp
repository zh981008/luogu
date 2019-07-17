#include <iostream>

using namespace std;

int month = 300;
int main()
{
    int save = 0;
    int now = 0;

    for (int i = 0;i < 12;i++) {
        int temp;
        cin>>temp;
        now += month;
        if(temp > now){
            cout<<-(i+1);
            return 0;
        }
        else {
            now -= temp;
        }
        while(now > 100) {
            now -= 100;
            save += 100;
        }
    }
    cout<<save/5 + save + now;
    return 0;
}
