#include <iostream>
#include <string>
using namespace std;

enum Colors {RED,YELLOW,AMBER=YELLOW,GREEN};

void print_enum(){
	cout<<"RED: "<<RED<<"\n";
	cout<<"YELLOW: "<<YELLOW<<"\n";
	cout<<"AMBER: "<<AMBER<<"\n";
	cout<<"GREEN: "<<GREEN<<"\n";
}

void q2(){
	int num;
	int *numptr{&num};
	int &ref{num};
	const int constant{10};

	num=5;
	*numptr+=1;
	ref++;
	cout<<num<<"\n";

	int n1{0xf3f2};
	int n2{0437};
	int n3{'a'};

	cout<<"N1: "<<n1<<"\n";
	cout<<"N2: "<<n2<<"\n";
	cout<<"N3: "<<n3<<"\n";
}
void q3(){
	char str[255]{0};
	char word[255]{0};
	cin>>str;
	int i=0;
	int cc=0;
	do{
		if(str[i] !='-' && str[i] != 0){
			word[cc]=str[i];
			cc++;
		}else{
			cout<<"["<<cc<<"] "<<word<<"\n";
			for (int i =0;i<cc;i++)
				word[i]='\0';
			cc=0;
		}
	}while(str[i++] !=0);
}

void q4(){
	using strings= string[10];
	strings arr;
	int index=0;
	for(int i=0;i<10;i++){
		cin>>arr[i];
		if(arr[index].length() < arr[i].length())
			index=i;
	}
	cout<<arr[index]<<endl;
}
int main(){
	q4();
}
