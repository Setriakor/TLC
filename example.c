#include <iostream>
using namespace std;


void change_number(int num){
	num+=1;
}
void change_actual_number(int *num){
	*num+=1;
}

int main(){
	int num=5;
	int *number=&num;
	change_actual_number(number);
	cout<<num<<"\n";
}
