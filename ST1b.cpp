#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int symmetry(string str){
	int n=str.size();
	
	//base case
	if(n==1)
	return 0;
	
	//copy first and second half of strings
	string first,second;
	first=str.substr(0,n/2);
	second=str.substr(n/2,n/2);
	
	//if first and second halfs are equal
	//increment result by one
	if(first==second)
	return symmetry(first)+1;
	
	//return 0 otherwise
	return 0;
}

int main(){
	
	int len;
	cin>>len;
	string str;
	cin>>str;
	
	//calculate using recursive function
	cout<<symmetry(str)<<endl;
}
