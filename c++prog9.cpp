#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class line{
	private:
		double length;
	
	public:
		void setline(double len);
		double getline(void);
		line();//constructor declaration
		~line();//decosntructor decalration
};
line::line(){
	cout<<"an object has been created"<<endl;
}
line::~line(){
	cout<<"an object has been deleted"<<endl;
}
void line::setline(double len){
	length=len;
}
double line::getline(void){
	return length;
}

int main(){
	line l1;
	
	l1.setline(20);
	cout<<l1.getline()<<endl;

return 0;	
}
