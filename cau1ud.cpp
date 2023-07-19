#include <iostream>
#define Pi 3.14
using namespace std;
int main()
{
		float r,s,v;
		cout<<"nhap ban kinh :";cin>>r;
		s= 4*Pi*(r*r);
		v= (4/3)*Pi*(r*r*r);
		cout<<"dien tich hinh cau la: "<<s<<endl;
		cout<<"the tich hinh cau la: "<<v<<endl;
		return 0;
}
