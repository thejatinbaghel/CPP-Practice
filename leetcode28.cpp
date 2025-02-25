#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "This is Jatin Baghel";
    string s2 = "Jatin";
    int sizeOfString1 = s1.length();
    int sizeOfString2 = s2.length();

    for(int i=0; i<=sizeOfString1 - sizeOfString2; i++){
        if (s1.substr(i, sizeOfString2) == s2){
            cout << i;
        }
    }
    return 0;
}