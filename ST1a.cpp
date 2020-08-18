#include<bits/stdc++.h>
#include<string>
 

using namespace std;

string addOne(string str){
	string res="";
	int s=1;
   int i=str.size()-1;
   while(i>=0){
   	s+=(str[i]-'0');
   	res=char(s%2+'0')+res;
   	s=s/2;
   	i--;
   }
   return res;
}

string subOne(string str){
	string res="";
	int s=1;
   int i=str.size()-1;
   while(i>=0){
   	if(s!=2){
   	s+=(str[i]-'0');
   	res=char(s%2+'0')+res;
   }
   else{
   	res=str[i]+res;
   }
   	i--;
   }
   return res;
}


int main(){
	int len;
	 
	cin>>len;
	string str;

	cin>>str;
	int check=0;
	for(int i=0;i<str.size();i++){
		if(str[i]=='0')
		check++;
	}
	if(check==0||check==str.size())
	cout<<"-1"<<endl;
	else
	cout<<subOne(str)<<" "<<addOne(str);
}
