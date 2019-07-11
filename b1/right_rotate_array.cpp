#include<iostream>
#include<vector>
using namespace std;

void print_vect(vector<int> arr){
	cout << "\n";
	for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
}


void rotate_right(vector<int> &arr){
	int last = arr.size() - 1;
	int temp = arr[last];

	for(int i = last; i >= 1; i--)
		arr[i] = arr[i-1];

	arr[0] = temp;

}


int main(){
	cout << "\n\n";

	vector<int> arr(10);

	for(int i = 0; i < arr.size(); i++)
		arr[i] = rand() % 100;

	print_vect(arr);

	rotate_right(arr);


	print_vect(arr);




	cout << "\n\n";	
}