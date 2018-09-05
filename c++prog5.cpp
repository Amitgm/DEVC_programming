#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class animals{
	
	public:
		int height;
		int weight;
		string name;
		
		void getheight(double hei){
			height=hei;
		}
		void getweight(double wei);
		void getname(double nem);
		
		double weihei(void){
			return height*weight;
		}
		
	
};

void animals::getweight(double wei){
	weight=wei;
}
void animals::getname(double nem){
	name=nem;
}

int main(){
	
	animals a1;
	animals a2;
	double total;
		
	
	a1.height=15;
	a1.weight=20;
	a1.name="cat";
	
	
	a2.height=20;
	a2.weight=25;
	a2.name="dog";
	
	
	a1.getheight(20);
	a1.getweight(30);
	total=a1.weihei();
	cout<<total<<endl;
	
	a2.getheight(10);
	a2.getweight(70);
	total=a2.weihei();
	cout<<total<<endl;

	
	
return 0;	
}
