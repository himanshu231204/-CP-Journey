// Problems link   https://www.codechef.com/problems/PRB01

#include <bits/stdc++.h>
using namespace std;
 // function to check prime number
bool isPrime(int n){
    if(n==1) return false; // 1 is not a prime number
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;

    }
    return true;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        if(isPrime(n)){
        cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<< endl;
        }

    }
    

}