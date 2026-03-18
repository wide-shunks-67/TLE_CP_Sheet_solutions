#include<iostream>
#include<vector>
#include<string>
#define ll long long
using namespace std;
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        int maxi=0;
        int i=0;
        while(i<n){
            if(s[i]=='0'){
                i++;
                continue;
            }
            int j=i+1;
            while(j<n && s[j]=='1'){
                j++;
            }
            maxi = max(maxi,j-i);
            i=j;
        }
        if(maxi==n){
            cout<<n * n<<"\n";
        }
        else{
            if(s[0]=='1' && s[n-1]=='1'){
                int cnt=0;
                int i=0;
                while(i<n && s[i]=='1'){
                    cnt++;
                    i++;
                }
                int j=n-1;
                while(j>=0 && s[j]=='1'){
                    cnt++;
                    j--;
                }
                maxi= max(maxi,cnt);
                cout<<(maxi + 1)/2 * (maxi + 2)/2<<"\n";
            }
            else{
                cout<<(maxi + 1)/2 * (maxi + 2)/2<<"\n";
            }
        }
    }
 }
