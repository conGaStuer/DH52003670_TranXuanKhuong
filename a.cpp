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

	bool Check_SHT(int N)
{
    int S = 0;
    for (int i = 1; i < N; i++)
        if (N % i == 0)
            S += i;  // S = S + i

    if (S == N)
        return true; // Là số hoàn thiện
    return false;     // Không là số hoàn thiện
}


    bool result = Check_SHT(N);
    if (result == true)
        cout << "La SHT";
    else
        cout << "Khong la SHT";





}
