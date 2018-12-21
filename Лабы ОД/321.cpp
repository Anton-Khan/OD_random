#include <iostream>
#include <cstring>
#include <vector>
#include <locale.h>

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
	
	
	int k(0),z(0);
	cout << endl;
	for(int i(0); i<storage.size(); i++){
		for(int j(0); j<storage.size(); j++){
			if(!strcmp(storage[j], storage[i]))
			k++;
		}
		if(k==2){
			cout << storage[i] << " : " << i << " number in text" << endl; 
			z++;
		}
		k=0;
	}
	
	if(z == 0)
	cout << "The text hasn\'t words, which met only 2 times" << endl;
	
	return 0;
}
