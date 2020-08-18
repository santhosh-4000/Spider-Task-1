#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,r,x,y;
	cin>>n>>r>>x>>y;
	vector<bool> c,s;
	for(int i=0;i<n;i++){
		bool temp;
		cin>>temp;
		c.push_back(temp);
	}
	for(int i=0;i<n;i++){
		bool temp;
		cin>>temp;
		s.push_back(temp);
	}
	int sum=0;
	for(int i=0;i<n;i++){
		if(c[i]==1){
			if(s[i]==1)
			sum+=x;
			else
			sum-=y;
		}
	}
	if(sum>0)
	cout<<"promoted";
	else if(sum<0)
	cout<<"demoted";
	else
	cout<<"no change";
}
