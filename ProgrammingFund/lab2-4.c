#include <iostream>
#include <string>
using namespace std;

struct values{
	int num1;
	int num2;
};

values input(){
	values num;
	cin>>num.num1;
	cin>>num.num2;
	return num;
}

int output(int var){return var;}
char output(char var){return var;}
float output(float var){return var;}
long output(long var){return var;}
string output(string var){return var;}

int main(){
	values nums=input();
	int sum=nums.num1 +nums.num2;
	cout<<sum<<endl;
}
