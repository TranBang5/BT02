#include <iostream>
using namespace std;
int main(){
	int n, m, N;
	cin >> n;
	N=n*2-1;
	m = 0;
	for (int i=1; i<=n; i++){
		if (m>0){
			for (int j=1; j<=m; j++){
				cout << " ";
			}
		}
		for (int k=m+1; k<=N; k++){
			cout << "*";
		}
		m++;
		N--;
		cout << endl;
	}
	return 0;
}
