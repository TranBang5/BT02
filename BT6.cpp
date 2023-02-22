#include <iostream>
using namespace std;
int main(){
	int N, r;
	r=1;
	cin >> N;
	for (int i=1; i<=N; i++){
		for (int j=r; j<=N; j++){
			cout << j << " ";
		}
		if (r>1){
			for (int j=1; j<=r-1; j++){
				cout << j << " ";
			}
		}
		cout << endl;
		r++;
	}
	return 0;
}
