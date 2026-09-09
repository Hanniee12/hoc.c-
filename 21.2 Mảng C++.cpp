#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

int main() {
	random_device st;
	mt19937 gen(st());
	uniform_int_distribution<> dis(0, 99);
	int mang[7];
	// 1. Viết phương trình tạo 1 mảng 1 chiều gồm các phần tử là số nguyên, có 7 phần tử ngẫu nhiên
	cout << "Bai 1: " << endl;
	for (int i = 0;i < size(mang); i++) {
		mang[i] = dis(gen);
	}
	// 2. Xuất các giá trị trong mảng 
	cout << "Bai 2: " << endl;
	for (int ip : mang) {
		cout << ip << " ";
	}
	cout << endl;
	// 3. Đảo ngược mảng, và xuất mảng sau khi đảo ngược
	cout << "Bai 3: " << endl;

	reverse(mang, mang + size(mang));
	cout << "Mang sau dao nguoc la: ";
	for (int i = 0; i < 7; i++) {
		cout << mang[i] << " ";
	}
	cout << endl;
	// 4. Sắp xếp mảng tăng dần
	cout << "Bai 4: " << endl;
	sort(mang, mang + size(mang));
	cout << "Mang sau sx tang dan la: ";
	for (int i = 0; i < 7; i++) {
		cout << mang[i] << " ";
	}
	cout << endl;
	// 5 . Tính tổng các phần tử trong mảng
	cout << "Bai 5: " << endl;
	cout << "Tong cac phan tu trong mang la: ";
	int sum = 0;
	for (int ip : mang) {
		sum += ip;
	}
	cout << sum;
	int mode = 0;
	cout << endl;
	// 6. Cho người dùng nhập 1 số bất kỳ, kiểm tra số đó có tồn tại trong mảng hay không, nếu có thì có bao nhiêu số ?
	cout << "Bai 6: " << endl;
	int n;
	cout << "moi nguoi dung nhap vao ban phim (0-99): ";
	cin >> n;
	for (int i = 0; i < size(mang);i++) {
		if (mang[i] == n) {
			mode++;
			
		}
	}
	cout << "co " << mode << "so " << n << " trong mang";


}
