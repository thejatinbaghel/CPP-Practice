#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(char j='A';j<='A' + n-i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        pattern(n);
    }
    
    return 0;
}