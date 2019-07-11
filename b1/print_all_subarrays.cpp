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

void print_array_between(vector<int> arr, int l, int r){
	if(l == r) return;
	cout << "\n";
	for(int i = l; i <= r; i++)
		cout << arr[i] << " ";
}



void print_all_combs(vector<int> arr){
	for(int  i = 0; i < arr.size(); i++)
		for(int j = i; j < arr.size(); j++)
			print_array_between(arr, i, j);
}


int main(){
	cout << "\n\n";

	vector<int> arr(10);

	for(int i = 0; i < arr.size(); i++)
		arr[i] = rand() % 100;

	print_vect(arr);

	print_all_combs(arr);

	




	cout << "\n\n";	
}