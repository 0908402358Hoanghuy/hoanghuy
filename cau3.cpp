#include <iostream>
using namespace std;

int main() {
    char ch;
    int num;
    cout << "Nhap  mot ky tu: ";
    cin >> ch;
    cout << "Ma ASCII cua ky tu '" << ch << "' la: " << int(ch) << endl;
    cout << "Nhap mot so nguyen trong khoang tu 1 den 255: ";
    cin >> num;
    cout << "Ky tu co ma ASCII " << num << " la: " << char(num) << endl;

    return 0;
}
