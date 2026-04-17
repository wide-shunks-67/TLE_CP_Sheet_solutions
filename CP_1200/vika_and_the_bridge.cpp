#include<iostream>
#include<vector>
#include<queue>
#include<climits>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll contrast=0;
    for(int i=0;i<n;i++){
        contrast+= abs(a[i] - a[i+1]);
    }
    if(contrast=0){
        cout<<1<<"\n";
        return;
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}