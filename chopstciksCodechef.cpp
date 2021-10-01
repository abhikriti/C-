// radhe radhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define inf 1e18
#define abs(a,b) a > b ? a - b : b - a

int main(){
    //code
 	ll n,d,a;
 	cin>>n>>d;
 	int res = 0;
 	std::vector<int> v;
 	
 	for(int i=0;i<n;i++){
 		cin>>a;
 		v.push_back(a);
 	}

 	// 1. Sort the sticks
 	sort(v.begin(), v.end());

 	// 2. Greedy algo
 	for(int i=0;i<n-1; ){

 		// if adjecent diff is less than d
 		// we can make pair out of in
 		if(v[i+1]-v[i] <= d){
 			res++;
 			i = i+ 2;
 		}
 		// We cannot make pair its useless 
 		else{
 			i++;
 		}
 	}

 	cout<<res<<endl;

    return 0;
}