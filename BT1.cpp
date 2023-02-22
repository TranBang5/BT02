#include <iostream>
using namespace std;
int main(){
	int N;
	cin >> N;
	bool t=true;
	for (int i=2; i<=N; i++){
		if (N%i==0&&N!=i){
			t=false;
		}
	}
	if (t==true){
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
