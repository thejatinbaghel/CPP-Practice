#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }

        for(int k=1;k<=(n-i)*2;k++){
            cout << " ";
        }

        for(int l=i;l>=1;l--){
            cout <<l;
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