#include<iostream>
using namespace std;
class queue{
	public:
		int a[10], r, f, num;
		queue(){
			r=f=-1;
		}
	void insert(){
		cout<<"Enter a number : ";
		cin>>num;
		if(r==-1 && f==-1){
			r=r+1;
			f=f+1;
			a[r]=num;
		}
		else{
			r=r+1;
			a[r]=num;
		}
}

void del(){
	num=a[f];
	if(r==f){
		r=f=-1;
	}
	else{
		f=f+1;
		cout<<"Deleted element "<<num<<endl;
	}
}

void display(){
	for(int i=f;i<=r;i++){
		cout<<a[i]<<endl;
	}
}

void menu(){
	cout<<"_________MENU_________"<<endl;
	cout<<"1.Insert element at rear\n2.Insert element at front\n3.Delete element from front\n4.Delete element from rear\n5.Display queue"<<endl;
}

void delr(){
	num=a[r];
	if(r==f){
		r=f=-1;
	}
	else{
		r=r-1;
		cout<<"Deleted element is "<<num<<endl;
	}
}

void insertf(){
	cout<<"Enter a number : ";
	cin>>num;
	if(r==-1 && f==-1){
		r=r+1;
		f=f+1;
		a[f]=num;
	}
	else{
		f=f-1;
		a[f]=num;
	}
}
};

int main(){
	int ch;
	queue q;
	q.menu();
	while(true){
		cout<<"Enter a choice : ";
		cin>>ch;
		if(ch==1){
			q.insert();
		}
		else if(ch==2){
			q.insertf();
		}
	    else if(ch==3){
	    	q.del();
		}
		else if(ch==4){
			q.delr();
		}
		else if(ch==5){
			q.display();
		}
		else{
			false;
			break;
		}
	}
	return 0;
}











