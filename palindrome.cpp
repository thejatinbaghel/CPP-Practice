#include <bits/stdc++.h>
using namespace std;

bool pal(int i, string s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
}

int main(){
    string s="malayalam";
    cout<<pal(0, s);
    return 0;
}