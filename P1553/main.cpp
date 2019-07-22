#include <iostream>
#include <algorithm>
using namespace std;

string strswap(string temp){
    reverse(temp.begin(),temp.end());
    int flag = 0;
    for(string::iterator it = temp.begin();it!=temp.end();it++){
        if(*it == '0') {
            flag++;
        }
        else{
            //cout<<*it;
            break;
        }
    }
    //cout<<temp.erase(0,flag)<<endl;
    string tp = temp.erase(0,flag);
    if (tp.compare("") == 0){
        return "0";
    }
    return tp;
}

string strswap2(string temp){
    int flag = 0;
    for(string::iterator it = temp.begin();it!=temp.end();it++){
        if(*it == '0') {
            flag++;
        }
        else{
            //cout<<*it;
            break;
        }
    }
    temp.erase(0,flag);
    reverse(temp.begin(),temp.end());
    if (temp.compare("") == 0){
        return "0";
    }
    //cout<<temp.erase(0,flag)<<endl;
    return temp;
}

string split(string temp,string flag){
    int pos = temp.find(flag);
    string tp1 = temp.substr(0,pos);
    string tp2 = temp.substr(pos+1,temp.size());
    //cout<<tp1<<endl;
    //cout<<tp2<<endl;
    //cout<<*flag.begin();
    switch(*flag.begin()) {
        case '/':{
            return strswap(tp1) + flag + strswap(tp2);
        }
        case '.':{

            return strswap(tp1) + flag + strswap2(tp2);
        }

        case '%':{
            return strswap(tp1) + flag;
        }
    }
    return strswap(tp1) + flag + strswap(tp2);
}
int main()
{
    string s;
    cin>>s;
    //cout<<s;
    if(s.find('.') != string::npos) {
        cout<<split(s,".");

    }
    else if (s.find('/') != string::npos) {
        cout<<split(s,"/");
    }
    else if (s.find('%') != string::npos) {
        cout<<split(s,"%");
    }
    else {
        //cout<<4;
        cout<<strswap(s);
    }
    //cout << "Hello world!" << endl;
    return 0;
}
