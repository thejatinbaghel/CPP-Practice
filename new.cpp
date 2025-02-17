#include <bits/stdc++.h>
using namespace std;

bool rev(string s, int i){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-1-i]) return false;
}

int main(){
    string s = "malayalam";
    cout<<rev(s, 0);
}