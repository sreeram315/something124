#include<stdio.h>


void print_array(int * arr, int n){
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
}

int jump_search(int* arr, int len, int key){
	int step = 4;

	for(int i = 0; i < len; i += step){
		printf("trying %d\n",i );

		if(arr[i] == key){
			return i;
		}

		if(arr[i] > key){
			for(int j = i-3; j <= i; j++){
				if(arr[j] == key)
					return j;
			}
		}

	}

	for(int j = len-step; j <= len; j++){
		if(arr[j] == key)
			return j;
	}

	return -1;
}

int main(){
	
	int arr[20], key;
	arr[0] = 3;

	for(int i = 0; i < 20; i++){
		arr[i] = rand() % 100 + arr[i-1];
	}

	printf("Array is:\t");
	print_array(arr, 20);

	printf("Enter to search element:\t");
	scanf("%d", &key);

	printf("%d\n", jump_search(arr, 20, key));


}