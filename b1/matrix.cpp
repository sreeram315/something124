#include<iostream>
using namespace std;


// int get_mat(){
// 	int a[2][2];
// 	for(int i=0; i<2; i++)
// 		for(int j=0; j<2; j++)
// 		cin>>a[i][j];
// 	printm a;
// }

// int add_mat(int a[2][2], int b[2][2]){
// 	int ans[2][2];
// 	for(int i=0; i<2; i++)
// 		for(int j=0;j<2; j++)
// 			ans[i][j] = a[i][j] + b[i][j];
// 	printm(ans);
// }

// int sub_mat(int a[2][2], int b[2][2]){
// 	int ans[2][2];
// 	for(int i=0; i<2; i++)
// 		for(int j=0;j<2; j++)
// 			ans[i][j] = a[i][j] - b[i][j];
// 	printm(ans);
// }

// void printm(int a[2]){
// 	for(int i=0; i<2; i++)
// 		for(int j=0;j<2; j++)
// 			cout << a[i][j]<<" ";
// 		cout << "\n";
// 	cout << "\n\n";
// }

// int mult_mat(int a[2][2], int b[][2]){
// 	int ans[2][2];

// 	for(int i = 0; i<2;i++)
// 		for(int j = 0; j<2;j++)
// 			ans[i][j] = 0;

// 	for(int k = 0; k<2;k++)
// 		for(int i = 0; i<2;i++)
// 			for(int j = 0; j<2;j++)
// 				ans[i][j] = ans[i][j] + (a[i][k] * b[k]b[j]);
// 	printm(ans);
// }

int main(){
	int a[2][2], b[2][2], c[2][2];
	// a = get_mat();
	// b = get_mat();
	// printm(add_mat(a,b));
	// printm(sub_mat(a,b));
	// printm(mult_mat(a,b));

	for(int i=0; i<2; i++)
		for(int j=0; j<2; j++)
			cin>>a[i][j];
	for(int i=0; i<2; i++)
		for(int j=0; j<2; j++)
			cin>>b[i][j];



}


