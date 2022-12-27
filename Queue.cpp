#include<iostream>
using namespace std;

class queue{
	private:
		int f,r;
	public:
		int a[5];
		queue(){
			r=f=-1;
		}
	void insert(){
		int x;
		cout<<"Enter element to be inserted : ";
		cin>>x;
		if(r==-1 && f==-1){
			r=r+1;
			f=f+1;
			a[r]=x;
		}
		else{
			r=r+1;
			a[r]=x;
		}
	}
	
	void del(){
		int x;
		x=a[f];
		if(r==f){
			r=f=-1;
		}
		else{
			f=f+1;
		}
		cout<<"Deleted element is "<<x<<endl;
	}
	
	void display(){
		for(int i=f;i<=r;i++){
			cout<<a[i];
		}
	}
};

int main(){
	int ch;
	queue q;
	cout<<"_________MENU_________"<<endl;
	cout<<"1.Insert element in queue\n2.Delete element in queue\n3.Display queue"<<endl;
	cin>>ch;
	while(true){
		cout<<"Enter your choice : ";
		cin>>ch;
		if(ch==1){
			q.insert();
		}
		else if(ch==2){
			q.del();
		}
		else if(ch==3){
			q.display();
		}
		else{
			cout<<"Invalid input :(";
			false;
			break;
		}
	}
	return 0;
}














