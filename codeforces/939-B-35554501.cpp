#include<bits/stdc++.h>
using namespace std;
     
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
     
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007 
     
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>k>>n;
    vull a(n);
    
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    ll min=LLONG_MAX,val,id;
    for(int i=0;i<n;++i){
        if(k%a[i]<min){
            min=k%a[i];
            val=k/a[i];
            id=i+1;
        }
    }
    cout<<id<<" "<<val;

}