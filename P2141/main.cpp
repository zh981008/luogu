#include <iostream>
#include <set>
using namespace std;
set<int> setdata;
set<int> sum;
int temp = 0;
 int main()
{
    int n,i=0,j=0,k=0;
    int lenth = 0;
    int data[100];
    cin>>n;
    while(n--) {
        cin>>data[lenth++];
        setdata.insert(data[lenth-1]);
    }
    for(set<int>::iterator it = setdata.begin();it!= setdata.end();it++) {
        set<int>::iterator its = it;
        its++;
        for(;its!= setdata.end();its++) {
            //cout<<*it<<*its<<endl;
            sum.insert(*it+*its);
        }
    }

    for(set<int>::iterator it = setdata.begin();it!= setdata.end();it++) {
        temp+=sum.count(*it);
    }
    cout<<temp;
    return 0;
}
