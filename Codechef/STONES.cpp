#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
#define pb push_back
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define tc(t) while(t--)
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int c=0,t;
	string s;
	char ch;
	
	cin>>t;
	tc(t){
		getchar();
		set<char> j;
		c=0;
		while(true){
			ch=getchar();
			if(ch!='\n'&&ch!=' '){
				j.insert(ch);
							
			}
			else{
				break;
			
			}
		}	
		
		cin>>s;
		rep(i,s.size()){
			if(j.count(s[i])){
			//cout<<"found"<<s[i]<<endl;
			c++;}
			}
			cout<<c<<"\n";
}	
	
}	 
