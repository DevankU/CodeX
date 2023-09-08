#include<iostream>
using namespace std;

int main() {
int age;
string name, college;

// taking inputs from user

cout<<"Enter your full name : "<<endl;
getline(cin,name);
cout<<"Enter your age :"<<endl;
cin>>age;
cin.ignore();
cout<<"Enter your college name :"<<endl;
getline(cin,college);

//printing 

cout<<"Hello "<<name<<", I see you are "<<age<<" years old and are currently studying at "<<college<<endl;

return 0;
}