#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=0;i<n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }

        for(int k=0;k<i*2;k++){
            cout<<" ";
        }

        for(int l=1;l<=n-i;l++){
            cout<<"*";
        }
        cout << endl;
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        for(int j=1;j<=(n-i-1)*2;j++){
            cout<<" ";
        }

        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
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