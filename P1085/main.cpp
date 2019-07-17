#include <iostream>

using namespace std;

int main()
{
    int flag = 0;
    int sum = 0;
    for (int i = 0;i < 7;i++) {
        int x,y;
        cin>>x>>y;
        if (x + y > sum) {
            sum = x+y;
            flag = i;
        }

    }
    cout<<flag+1<<endl;

    return 0;
}
