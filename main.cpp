#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n, upper=0, lower=0;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++){
        if(s[i]>=65 and s[i]<=90)
            upper++;
        if(s[i]>=97 and s[i]<=122)
            lower++;
    }
    //cout<<upper<<lower;
    //for(i=0;i<s.length();i++){
        if(upper>lower){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
             cout<<s<<endl;
        }
       else if(upper<lower){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
             cout<<s<<endl;
       }
        else{
            transform(s.begin(), s.end(), s.begin(), ::tolower);
             cout<<s<<endl;
        }

    return 0;
}
