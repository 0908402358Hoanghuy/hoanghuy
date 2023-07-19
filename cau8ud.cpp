#include <iostream>

using namespace std;

int main() {
    int tongGiay;
//Nhap so giay 
    cout << "Nhap tong so giay: ";
    cin >> tongGiay;

    // Chuyen doi 
    int gio = tongGiay / 3600;
    int phut = (tongGiay % 3600) / 60;
    int giay = (tongGiay % 3600) % 60;

    // In ra ket qua 
    cout << "Thoi gian: " << gio << " gio " << phut << " phut " << giay << " giay" << endl;

    return 0;
}
