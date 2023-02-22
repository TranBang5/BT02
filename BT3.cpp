#include <iostream>
using namespace std;
int main(){
	int n, m, N;
	cin >> n;
	N=n;
	m = n-1;
	for (int i=1; i<=N; i++){
		if (m>0){
			for (int j=1; j<=m; j++){
				cout << " ";
			}
		}
		for (int k=m+1; k<=n; k++){
			cout << "*";
		}
		m--;
		n++;
		cout << endl;
	}
	return 0;
}
