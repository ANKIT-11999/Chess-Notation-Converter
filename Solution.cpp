#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	string s;
	cin>>s;
	int n = s.size();
	string black = "";
	string white  = "";
	string c = "";
	int count = 8;
	
	for(int i=0;i<n;i++){
	    if(s[i] == '/'){
	        char ch = 'a';
	        for(int j=0;j<c.size();j++){
	            if(c[j] >='1' && c[j] <= '9'){
	                ch = ch + (c[j]-'0');
	            }
	            else if(c[j] >= 'A' && c[j] <= 'Z')
	                {
	               //white += (ch + (count+'0')+c[j]);
	               white += ch;
	               white += (count + '0');
	               white += (c[j] + 32);
	               //cout<<ch<<" white "<<count<<c[j]<<endl;
	                ch++;
	                }
	            else{
	                black += ch;
	                black += (count + '0');
	                black += c[j];
	                //cout<<ch<<" black "<<count<<c[j]<<endl;
	                ch++;
	            }
	            //cout<<ch<<endl;
	        }
	        c = "";
	        count--;
	        continue;
	    }
	    c += s[i];
	}
	        char ch = 'a';
	        for(int j=0;j<c.size();j++){
	            if(c[j] >='1' && c[j] <= '9'){
	                ch = ch + (c[j]-'0');
	            }
	            else if(c[j] >= 'A' && c[j] <= 'Z')
	                {
	               //white += (ch + (count+'0')+c[j]);
	               white += ch;
	               white += (count + '0');
	               white += (c[j]+32);
	               //cout<<ch<<" white "<<count<<c[j]<<endl;
	                ch++;
	                }
	            else{
	                black += ch;
	                black += (count + '0');
	                black += c[j];
	                //cout<<ch<<" black "<<count<<c[j]<<endl;
	                ch++;
	            }
	            //cout<<ch<<endl;
	        }
	cout<<black<<endl;
	cout<<white<<endl;
	return 0;
}
