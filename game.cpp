#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int countM=0;
	int countC=0;

	while(n--){
		int m,c;
		cin >> m >> c;
		if(m>c){
			countM++;
		}
		else if(c>m){
			countC++;
		}
		else if(c==m){
            countM++;
            countC++;
		}
	}
	if(countM>countC){
		cout << "Mishka" << endl;
	}
	else if(countC>countM){
		cout << "Chris" << endl;
	}
	else{
		cout << "Friendship is magic!^^" << endl;
	}



    

	return 0;
}