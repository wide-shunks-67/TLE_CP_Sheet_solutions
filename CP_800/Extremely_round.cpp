#include<iostream>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int length = to_string(n).length();
        int first_digit= to_string(n)[0] - '0';
        ll result = (length - 1) * 9 + first_digit;
        cout<<result<<endl;
    }
}