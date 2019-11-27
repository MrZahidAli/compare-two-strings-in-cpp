#include<iostream>
using namespace std;
int biggerString(string str1, string str2){
	int com = str1.compare(str2);
	if(com == 0){
		cout << "noth string are equal";
	}
	else if(com == 1){
		cout << endl << str2 << " : is greater";
	}
	else if(com == -1){
		cout << endl << str1 << " : is greater";
	}
}
int main(){
	biggerString("zahid", "zahia");
}
