// radhe radhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define inf 1e18
#define abs(a,b) a > b ? a - b : b - a

int main(){
    //code
    
    int t;
    cin>>t;

    while(t--){

    	int point_x[40000+10], point_y[40000+10];
    	int n,w,h;
    	cin>>w>>h>>n;

    	// Taking input as cordinate pair 
    	for(int i=0;i<n;i++){
    		cin>>point_x[i]>>point_y[i];
    	}

    	// 1. Sort for cordinates for closer/compact area calculation
    	sort(point_x, point_x+n);
    	sort(point_y, point_y+n);

    	// 2. Find max uncovered tiles in x and y cordinates
    	// Starting point of cordinates
    	int dx = point_x[0];
    	int dy = point_y[0];

    	// 3. Largest uncovered gap 
    	for(int i=1;i<n;i++){
    		dx = max(dx, point_x[i] - point_x[i-1]);
    		dy = max(dy, point_y[i] - point_y[i-1]);

    	}

    	dx = max(dx, w+1 - point_x[n-1]);
    	dy = max(dy, h+1 - point_y[n-1]);

 	   	cout<<((dx-1)*(dy-1))<<endl;
	
    }
    return 0;
}