//WAP TO SWAP TWO NUMBERS USING FUNCTION AND USING TEMP VARIABLE.

#include<iostream>
using namespace std;

int swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;		
}
int main(){
	
	int x,y;
	
	cout<<"Enter X: ";
	cin>>x;
	cout<<"Enter Y: ";
	cin>>y;
	
	int temp = x;
	x = y;
	y = temp;
	cout<<"After Swapping Numbers are: "<<endl;
	cout<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	
	swap(x,y);
	cout<<"After again swapping performed using swap function: "<<endl;
	cout<<"X = "<<x<<endl;
	cout<<"Y = "<<y;
	
}
