#include <iostream>

using namespace std;

int  prompt(){
	cout<<"Enter number: ";
	int num;
	cin>> num;
	return num;
}
int main(){
	//std::cout<<"Setriakor Addom\n";
	//int sum=0;
	//for(int i=0;i<5;i++){
	//	cout<<"Enter Number: ";
	//	int num;
	//	cin >> num;
	//	sum+=num;
	//}
	//int mean= sum/5;
	//cout<<"The mean is "<<mean<<"\n";
	int num = prompt();
	if(num%2 == 0){
		for(int i=1;i<21;i++){
			cout<<i<<" x "<<num<<" = "<<num*i<<"\n";
		}
	}else{
		int nums=0;
		int count=1;
		while(nums<30){
			if(count%num!=0){
				cout<<count<<"\n";
				nums++;
			}
			count++;
		}
	}

}
