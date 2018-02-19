#include<iostream>
using namespace std;

class student
{
	char name[30];
	int roll;
	int total;
public:
	void getdata(void);
	void printDetails(void);
	
};

void student :: getdata(void){
	cout<<"Enter the student name"<<endl;
	cin>>name;
	cout<<"enter the roll number"<<endl;
	cin>>roll;
	cout<<"Enter the total number"<<endl; 
	cin>>total;
}

void student :: printDetails(){
	cout<<"student name is -"<<name;
	cout<<"roll number is -"<<roll;
	cout<<"total number is -"<<total;
}

int main(int argc, char const *argv[])
{
	cout<<"How many student?"<<endl;
	int n;
	cin>>n;
	student s[n];
	for (int i=0;i<n;i++) s[i].getdata();
	for (int i=0;i<n;i++) s[i].printDetails();	
	return 0;
}