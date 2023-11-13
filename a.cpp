#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "\nNhap n = ";
	cin >> n;
	
  bool ktCP(n) {
    int i = 0;
    while(i*i <= n){
		if(i*i == n){
			return true;
		}
		++i;
	}
	return false;
    }

    if(ktCP(n)) {
        cout << "La so chinh phuong";
    } else {
        cout << "Khong la so chinh phuong";
    }
}
