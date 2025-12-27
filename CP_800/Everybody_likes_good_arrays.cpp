#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int parity(ll x){
    if(x%2==0) return 0;//0=even
    else return 1;//1=odd
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int count=0;
        for(int i=0;i<n-1;i++){
            if(parity(a[i])==parity(a[i+1])){
                count++;
                int temp= a[i]*a[i+1];
                a[i]=temp;
                a.erase(a.begin()+i+1);
                i=-1; // Restart from the beginning after modification
                n--; // Decrease the size of the array
            }
        }
        cout<<count<<endl;
    }
}