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

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int gcd_n(int a, int b)
{
   int i=min(a,b);
   while(i>=1)
   {
      if(a%i==0 && b%i==0)
         break;
      i--;
   }
   return i;
}

int gcd2(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    if(b==0)
    	return a;
    if(a > b)
    	return gcd(a%b, b);
    else
    	return gcd(b%a, a);
}


int main(){
	cout << "\n\n";
	int num1, num2, g1, g2;
	
	for(long i = 0; 1; i++){
		num1 = (int)rand() % 100;
		num2 = (int)rand() % 100;
		g1 = gcd(num1, num2);
		g2 = gcd2(num1, num2);
		if(g1 == g2)
			printf("tesnum: %d test pass for %d, %d = %d\n", i, num1, num2, g1);
		else{
			printf("Failed for %d, %d, g1 = %d, g2 = %d", num1, num2, g1, g2);
			return 0 ;
		}

	




		
		}
		cout << "\n\n";
}