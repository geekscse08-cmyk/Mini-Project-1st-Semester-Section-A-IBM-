
#include<iostream>
using namespace std;
int main() {
	int l, b, area, perimeter ; 
	cout << "Enter length : " ;
	cin >> l ;
	cout << "Enter width : " ;
	cin >> b ;
	
	area=l*b;
	perimeter=2*(l+b);
	
	cout << "Area = " << area << endl;
	cout << "Perimeter = " << perimeter << endl;
	return 0;
}

