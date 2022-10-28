#include<iostream>

using namespace std;

int main() {
	string islem = "random";
	cout << "Isleminizi giriniz(toplama, cikarma, carpma, bolme): ";
	int ilkSayi, ikinciSayi;
	cout << "Merhabalar gireceginiz iki sayiyi toplayacagim\n"
		<< "ilk sayiyi giriniz: ";
	cin >> ilkSayi;
	cout << "Ikinci sayiyi giriniz: ";
	cin >> ikinciSayi;
	cout << "Isleminizin sonucu: " << (ilkSayi + ikinciSayi) << " dir";
	cin >> islem;
	if (islem == "toplama") {
		// burayi doldur
	}
	else if (islem == "cikarma") {
		// burayi doldur
	}
	else {
		// burayi doldur
	}
	return 0;
}