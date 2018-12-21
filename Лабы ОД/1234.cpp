#include <iostream>
#include <conio.h>
#include <random>
#include <time.h>
using namespace std;

int n = 10;

int main(){
	srand(time(NULL));
	
	int arr[n];
	int x;
	cout << "Enter the number: ";
	cin >> x;
	
	for(int i(0); i<n; i++)
		arr[i] = rand()%1100;
	
	for(int i(0); i<n; i++)
		cout << arr[i] << " ";
	
	int minRaz = abs(x - abs(arr[0] - arr[1]));
	int i1(0), i2(1);
	
	for(int i(0); i<n; i++){
		for(int j(i+1); j<n; j++){			
			if( minRaz > abs(x - abs(arr[i] - arr[j]))){
				minRaz = abs(x - abs(arr[i] - arr[j]));
				i1 = i;
				i2 = j;
			}
		}
	}
	cout << endl << i1 << " : " << arr[i1] << endl << i2 << " : " << arr[i2] << endl;
		return 0;
	}
