/* ----------------------
radhe radhe
Name: Abhishek kumar
IIIT, Gwalior
------------------------*/
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main(){

	int t;
	cin>>t;

	while(t--){
		string s;
		cin>>s;
		int cnt1 = 0, cnt2 = 0;
		for(int i=0;i<s.size();i++){
			if(s[i] == '1'){
				cnt1 = i;
				break;
			}
		}
		for(int i=s.size()-1;i>=0;i--){
			if(s[i] == '1'){
				cnt2 = i;
				break;
			}
		}

		int flag = true;

		while(cnt1 < cnt2){
			if(s[cnt1] == '1' and s[cnt2] == '1'){
				cnt1++;
				cnt2--;
			}

			else{
				flag = false;
				break;
			}
		}

		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
	return 0;
}