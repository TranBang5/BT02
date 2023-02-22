#include <iostream>
using namespace std;
int main(){
	int n, m;
	cin >> n;
	m = 0;
	for (int i=1; i<=n; i++){
		if (m>0){
			for (int j=1; j<=m; j++){
				cout << " ";
			}
		}
		for (int k=m+1; k<=n; k++){
			cout << "*";
		}
		m++;
		cout << endl;
	}
	return 0;
}
