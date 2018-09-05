#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
	
	char myname[5][5]={{'a','m','i','t'},{'g','e','r','g','e'}};
	
	for (int i=0;i<2;i++){
		for (int j=0;j<5;j++){
			cout<<myname[i][j];
		}
	}
    cout<<endl;

 return 0;	
}

