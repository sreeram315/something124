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

int bin_sear(vector<int> arr, int key, int l, int h){
	if(h < l)
		return -1;

	int mid = (h + l)/2;

	if(arr[mid] == key)
		return mid;

	if(arr[mid] < key)
		return bin_sear(arr, key, mid + 1, h);

	if(arr[mid] > key)
		return bin_sear(arr, key, l, mid - 1);

	else
		printf("ETH");

}




int main(){
	cout << "\n\n";

	vector<int> arr{1,2,3,4,5,6,7,8,9};


	cout << bin_sear(arr, 6, 0, 8);
	cout << bin_sear(arr, 7, 0, 8);
	cout << bin_sear(arr, 8, 0, 8);
	cout << bin_sear(arr, 9, 0, 8);
	cout << bin_sear(arr, 1, 0, 8);









	cout << "\n\n";
}







