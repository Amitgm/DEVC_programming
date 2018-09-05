#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
	char happy[6]={'h','a','p','p','y'};
	string birthday ="birthday";
	
	string yourname;
	
	getline(cin,yourname);
	
	cout<<yourname<<endl;
	
	double eulerc=.5571;
	
	string eulerguess;
	
	double eulerguessdouble;
	
	getline(cin,eulerguess);
	
	eulerguessdouble=strtod(eulerguess);
	
	if 	(eulerguessdouble == eulerc){
		cout<<"you guessed right"<<endl;
	}
	else{
		cout<<"you guessed wrong"<<endl;
	}
	
	cout<<happy+birthday<<endl;
}
