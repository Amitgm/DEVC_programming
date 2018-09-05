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
		line(double len);
};

line::line(double len){
	cout<<"object is being created "<<" the lenght of line "<<len<<endl;
	length=len;
}

void line::setline(double len){
	length=len;
}
double line::getline(void){
	return length;
}
int main(){
	line l1(10);
	l1.setline(20);
	cout<<l1.getline()<<endl;
	
	return 0;
}



