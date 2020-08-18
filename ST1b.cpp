#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int symmetry(string str){
	int n=str.size();
	
	if(n==1)
	return 0;
	
	string first,second;
	first=str.substr(0,n/2);
	second=str.substr(n/2,n/2);
	
	if(first==second)
	return symmetry(first)+1;
	
	return 0;
}

int main(){
	
	int len;
	cin>>len;
	string str;
	cin>>str;
	
	cout<<symmetry(str)<<endl;
}
