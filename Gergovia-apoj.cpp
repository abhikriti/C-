// radhe radhe
#include<bits/stdc++.h>
using namespace std;

int main(){

	while(1){
		int n;
		long long ans = 0;
		cin>>n;

		if(n==0){
			break;
		}
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		for(int i=1;i<n;i++){
			arr[i] += arr[i-1];
			ans += abs(arr[i-1]);
		}
		cout<<ans<<endl;
	}
	return 0;
}