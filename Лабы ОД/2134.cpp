#include <iostream>
#include <random>
#include <time.h>
#include <vector>

using namespace std;

int n = 20;
int m = 10;


int main(){
	srand(time(NULL));
	int arr[n][m];
	for(int i(0); i<n; i++)
		for(int j(0); j<m; j++)
		arr[i][j] = rand()%100;
		
	for(int i(0); i<n; i++){	
		for(int j(0); j<m; j++){
			cout << arr[i][j] << "\t";	
		}
		cout << endl;
	}
	
	for(int i(0); i<n; i++){
		for(int j(0); j<m; j++){
			for(int a(0); a<m; a++){
				if(arr[i][j] < arr[i][a]){
					int temp = arr[i][j];
					arr[i][j] = arr[i][a];
					arr[i][a] = temp;
				}
		
			}
			
		}
		
	}
	cout << "__________________________________________________________________________________________________\n";
	for(int i(0); i<n; i++){	
		for(int j(0); j<m; j++){
			cout << arr[i][j] << "\t";	
		}
		cout << endl;
	}
	
	
	return 0;
}
