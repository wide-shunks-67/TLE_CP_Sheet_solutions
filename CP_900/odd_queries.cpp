#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll>prefix(n+1,0);
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+arr[i-1];
    }
    int total_sum= prefix[n];
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        ll current_sum= total_sum - (prefix[r]-prefix[l-1]) + (ll)(r-l+1)*k;
        if(current_sum%2==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
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