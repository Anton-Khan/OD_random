#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main(){
	
	string str;
	char c;
	while((c = getchar()) != '\n')
	str += c;
	
	//cout << str << endl;
	
	char *dup = strdup(str.c_str());
	char *temp = strtok(dup, " :;.,-!?()");
	vector<char*> storage;
	
	
	while (temp != NULL)                         
	{	
  		storage.push_back(temp);
		//std::cout << temp  << "\n";
		temp = strtok (NULL, " :;.,-!?()");
	}
	
	//for(int i(0); i<storage.size(); i++)
	//cout << storage[i] << " ";
	
	
	int k(0);
	cout << endl;
	for(int i(0); i<storage.size(); i++){
		for(int j(0); j<storage.size(); j++){
			if(!strcmp(storage[j], storage[i]))
			k++;
		}
		if(k==1)
		cout << storage[i] << " "; 
		k=0;
	}
	

	
	return 0;
}
