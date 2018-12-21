#include <iostream>
#include <random>
#include <time.h>

using namespace std;

void print(int *arr, int n){
	cout << endl;
	for(int i(0); i<n; i++)
		cout << arr[i] << " ";	
}

void autoEnter(int *arr, int n){
	for(int i(0); i<n; i++)
		arr[i] = rand()%10;
		print(arr, n);
}

void Enter(int *arr, int n){
	int a(1);
	for(int i(0); i<n; i++){
		cout << "Enter " << a << " value of array: ";
		cin >> arr[i];
		a++;
	}
}

void SaR(int *arr, int n){
	int sum(0);
	for(int i(0); i<n; i++){
		sum+= arr[i];
	}
	print(arr, n);
	cout << endl << sum/n;
}

void MaxBef(int *arr, int n){
	int max(0), index(-1);
	
	for(int i(0); i<n; i++){
		if(arr[i] >= max){
			max = arr[i];
			index = i;
		}
	}
	if(index != 0){
	for(int i(index-1); i<n-1; i++){
		arr[i] = arr[i+1];
	}
	arr[n-1] = NULL;
	print(arr, n);
	}else cout << "Can\'t execute this fucnction(First element of array)" << endl;
}

void MaxAft(int *arr, int n){
	int max(0), index(-1);
	
	for(int i(0); i<n; i++){
		if(arr[i] >= max){
			max = arr[i];
			index = i;
		}
	}
	if(index != 0){
	for(int i(index+1); i<n-1; i++){
		arr[i] = arr[i+1];
	}
	arr[n-1] = NULL;
	print(arr, n);
	}else cout << "Can\'t execute this fucnction(Last element of array)" << endl;
}

void Multi(int *arr, int n){
	int res(1);
	for(int i(0); i<n; i+=2){
		res *= arr[i];
	}
	print(arr, n);
	cout << endl << res;
}

int main (){
	srand(time(NULL));
	int n;
	cout << "Enter size of new array: ";
	cin >> n;
	int *arr;
	
	arr = new int[n];
	int enter(-1);
	char y('y');
	
	cout << "1. AutoEnter the array" << endl;
	cout << "2. Enter the array" << endl;
	cout << "Chose your function: ";
	cin >> enter;
	switch (enter){
	case 1: autoEnter(arr, n); break;
	case 2: Enter(arr, n); break;
	}
	
	
	while(y == 'y' ){
		cout << "\n1. Print the array" << endl;
		cout << "2. AutoEnter the array" << endl;
		cout << "3. Enter the array" << endl;
		cout << "4. The arithmetic mean" << endl;
		cout << "5. Delete a number before the last maximum number" << endl;
		cout << "6. The product of the numbers in the array with odd indexes" << endl;
		cout << "7. Delete a number after the last maximum number" << endl;
		cout << "Chose your function: ";
		cin >> enter;
	switch(enter){
		case 1: print(arr, n); break;
		case 2: autoEnter(arr, n); break;
		case 3: Enter(arr, n); break;
		case 4: SaR(arr, n); break;
		case 5: MaxBef(arr, n); break;
		case 6:	Multi(arr, n); break;
		case 7:	MaxAft(arr, n); break;
		default : cout << "Wrong input" << endl;
	}
		
		cout << "\nTest again?(y/n): ";
		cin >> y;
	}
	
	
	
	return 0;
}



