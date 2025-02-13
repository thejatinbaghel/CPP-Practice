#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=0;i<n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        for(char k='A';k<='A'+i;k++){
            cout<<k;
        }

        for(char l=1;l<=i;l++){
            char ch ='A'+n-l-1;
            cout<<ch;
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