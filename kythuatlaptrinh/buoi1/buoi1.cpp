// buoi1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
int main()
{
    // tạo mảng động lưu điểm
    vector <float> diem;
    // thêm điểm 5 người
	diem.push_back(20);
	diem.push_back(10);
	diem.push_back(13);
	diem.push_back(6);
	diem.push_back(9);	
	// xoá điểm của người cuối
	diem.pop_back();
	// duyệt qua mảng để in ra màn hình
	for (int i = 0; i < diem.size(); i++) {
		cout << diem[i] << endl;
	}
}