#include <iostream>
#include <conio.h>
#include <random>
#include <time.h>
using namespace std;

int n = 20;

int main(){
	srand(time(NULL));
	
	int arr[n];
	
	for(int i(0); i<n; i++)
		arr[i] = 10 - rand()%20;
	
	for(int i(0); i<n; i++)
		cout << arr[i] << " ";
		
	int i(0);	
		for(int j(0); j<n; j++){
			if(arr[j] == 0){
			int temp;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;		
			}
		}
		for(int j(i); j<n; j++){
			if(arr[j] > 0){
			int temp;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;		
			}
		}
		for(int j(i); j<n; j++){
			if(arr[j] < 0){
			int temp;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;		
			}
		}
	
		cout << endl;
	for(int i(0); i<n; i++)
	cout << arr[i] << " ";
	
	
	
	
	return 0;
}
