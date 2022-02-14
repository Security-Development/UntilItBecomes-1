#include <iostream>

using namespace std;

int main() {
	int n, k, result = 0;	
	
	cin >> n >> k;
	
	while(n > 1) {
		if(n % k == 0){
			n /= k;
		}else {
			n -= 1;
		}
		result += 1;
	}
	
	cout << result << endl;
	
	return 0;
} 

