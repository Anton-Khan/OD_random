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
	int k;
	cout << "Enter the k: ";
	cin >> k;
	for(int i(0); i<n; i++)
		for(int j(0); j<m; j++)
		arr[i][j] = rand()%100;
		
		for(int i(0); i<n; i++){	
		for(int j(0); j<m; j++){
			cout << arr[i][j] << " ";	
		}
		cout << endl;
	}
	
	int sum(0), a(0);
	vector<int> arr2;
	for(int i(0); i<n; i++){	
		for(int j(0); j<m; j++)
			sum += arr[i][j];
		if(sum % k == 0){
			arr2.push_back(sum);
			a++;
		}
		sum = 0;
	}
	
	cout << endl << endl;
	
	for(int i(0); i<arr2.size(); i++)
	cout << arr2[i] << " ";
	
	
	return 0;
}
