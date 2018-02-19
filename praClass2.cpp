#include<iostream>
using namespace std;

class item{
	int itemNo[10];
	int itemPrice[10];
	int count;
public:
	void CNT(void){count =0};
	void addEntry(int ,int );
	void deleteEntry(int );
	int totalPrice(void);
	void showItems(void);

};
void item :: addEntry(int itemNum,int price){
	itemNo[count] = itemNum;
	itemPrice[count] = price;
	count++;
}

void item :: deleteEntry(int itemNum){
	bool flag = false ;
	for (int i=0;i<count-1;i++){
		if (itemNo[i] == itemNum){
			while(i<count){
				itemNo[i] = itemNo[i+1];i++;
			}
			flag = true;
			count--;
		}	
	}
	if (itemNo[count-1] == itemNum ) {
		flag = true;
		count--;
	}
	if (!flag) cout<<"Invalid Input"<<endl;
}

int item :: totalPrice(void){
	int sum;
	for (int i=0;i<count;i++) sum += itemPrice[i];
	return sum;	
}

void item :: showItems(void){
	cout<<"Showing items\n"<<"item number\tprice"<<endl;
	for (int i=0;i<count;i++){
		cout<<itemNo[i]<<"\t"<<itemPrice[i]<<endl;
	}
}


int main(int argc, char const *argv[])
{
	int choice,ino,ip;item p;
	p.CNT();
	do{
		cout<<"*********************MENU*************************"<<endl<<"1.Add Entry\n2.Delete Entry\n3.Total price\n4.show all\n5.Exit\n";
		cin>>choice;
		switch(choice){
			case 1:
			cout<<"Enter the item number:\t";
			cin>>ino;
			cout<<"Enter the price of the item:\t";
			cin>>ip;
			p.addEntry(ino,ip);
			break;

			case 2:
			cout<<"Enter the item number:\t";
			cin>>ino;
			p.deleteEntry(ino);
			break;

			case 3:
			cout<<"Total price is - "<<p.totalPrice()<<endl;
			break;

			case 4:
			p.showItems();
			break;

		}
	}
	while(choice != 5);
	return 0;
}