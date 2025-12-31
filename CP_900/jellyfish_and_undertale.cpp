#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll max_time=b;
        for(ll i=0;i<n;i++){
            //you gain the most time by using a tool when the timer is at 1.
            //New Timer = min(1 + x_i, a)
            //Time gained = New Timer - current_time= min(1+x_i, a) - 1= min(x_i, a-1)
            max_time+= min(arr[i],a-1);
        }

        cout<<max_time<<"\n";
    }
}