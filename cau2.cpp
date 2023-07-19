#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int namSinh;
    cout << "Nhap nam sinh cua ban: ";
    cin >> namSinh;
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    int namHienTai = timePtr->tm_year + 1900;
    int tuoi = namHienTai - namSinh;
    cout << "Tuoi hien tai cua ban la: " << tuoi << " tuoi" << endl;

    return 0;
}

