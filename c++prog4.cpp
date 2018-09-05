#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int addsum(int a,int b){
	
	int c= a+b;
	
	return c;
}

int recurse(int numbers){
	
	int sum;	
	if (numbers==1){
		
		sum=1;
	}
	else{
	 return recurse(numbers-1)*numbers;
		
	}
}
	
void makemeyoung(int* age){
	
	cout<< *age<<endl;
	
	*age=31;			
}

  void actyourage(int& age){
    	
    	age=39;
    	
    	
	}
int main(){
	

	
	int ager=34;
	
	makemeyoung(&ager);
	
	cout<<ager<<endl;
	
	int& ageref=ager;
	
	cout<<"present age"<<ager<<endl;
	
	ageref++;
	
	cout<<"one year later"<<ager<<endl;
	
	actyourage(ageref);
	
	cout<<ager<<endl;
	
	
	
	
		
	
    cout<<addsum(5,4)<<endl;
	cout<<recurse(5)<<endl;	
	
	
	
	int* my_age=&ager;
		
	
	int number[5]={1,2,3,4,5};
	
	int* numbs=number;
	
	cout<<*my_age<<endl;
	cout<<my_age<<endl;
	cout<<"address"<<numbs<<"values"<< *numbs <<endl;
	numbs++;
	cout<<"address"<<numbs<<"values"<< *numbs <<endl;
	
	
	
		
	return 0;
}
