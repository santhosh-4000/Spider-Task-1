#include<bits/stdc++.h>
#include<string>
 

using namespace std;

string addOne(string str){
	//add 1 to binary string str and return it
	string res="";
	int s=1;
	//iterate over all bits in str
   int i=str.size()-1;
   while(i>=0){
	   //add bits to s from right
   	s+=(str[i]-'0');
   	res=char(s%2+'0')+res;
   	s=s/2;
   	i--;
   }
   return res;
}

string subOne(string str){
	//subtract 1 from binary string str
	string res="";
	int s=1;
   int i=str.size()-1;
	//itearate over all bits from right to left
   while(i>=0){
	//toggle least significant 1 and change all 
	//bits right to it to 1
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
	
	//take inputs
	int len; 
	cin>>len;
	string str;
	cin>>str;
	
	//check if all are zeros or all are ones
	int check=0;
	for(int i=0;i<str.size();i++){
		if(str[i]=='0')
		check++;
	}
	if(check==0||check==str.size())
	cout<<"-1"<<endl;
	
	//print integers just one greater and one less than given number
	else
	cout<<subOne(str)<<" "<<addOne(str);
}
