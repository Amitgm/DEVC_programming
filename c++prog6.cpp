#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class cars{
	private:
		
	    double width;
	
	public:
		double height;
		void setwidth(double wei);
		double getwidth(void);
};

void cars::setwidth(double wei){
	
	width=wei;	
}
double cars::getwidth(){
	return width;
}

int main(){
	
	cars c1;
	cars c2;
	
	c1.height=34;
	cout<<c1.height<<endl;
	
	c1.setwidth(37);
	double width1=c1.getwidth();
	cout<<width1<<endl;
	c2.setwidth(42);
	double width2=c2.getwidth();
	cout<<width2<<endl;
	
	return 0;
}
