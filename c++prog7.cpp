#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class cars{
	protected:		
	    double width;
};

class subcars:cars{
	public:
		void setwidth(double wei);
		double getwidth(void);
	
	
};

void subcars::setwidth(double wei){
	width=wei;
}
double subcars::getwidth(void){
	return width;
}

int main(){
	subcars c1;
	
	c1.setwidth(34.0);
	
	double total=c1.getwidth();
	cout<<total<<endl;
	
	return 0;
}
