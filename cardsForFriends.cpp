// radhe radhe 

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		int w,h,n;
		cin>>w>>h>>n;
		int ans = 1;
		while(w%2 == 0){
			w = w/2;
			ans = 2* ans;
		}
		while(h%2 == 0){
					h = h/2;
					ans = 2* ans;
				}
		if(ans >= n){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}