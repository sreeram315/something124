#include<iostream>
using namespace std;


class que{
	public:
		int front = -1, rear = -1, max_size = 100, arr[100];	

		void push(int val){
			if(rear == max_size - 1){
				cout << "Overflow";
				return;
			}
			if(front == -1) 
				front = 0;
			arr[++rear] = val;
		}

		int get_and_delete(){
			if(front == -1)
				cout<<"No elements to return";
			return rear--;
		}

		void display_all(){
			if(front == -1)
				cout<< "No elements to display";
			else{
				cout<< "The que is:\t"<<endl;
				for(int i = front; i <= rear; i++)
					cout<<arr[i]<<" ";
				cout<<"\n\n";
			}
		}
};

int main(){
	que q1;
	q1.push(30);
	q1.push(20);
	q1.push(10);
	q1.push(50);
	q1.get_and_delete();
	q1.display_all();
}