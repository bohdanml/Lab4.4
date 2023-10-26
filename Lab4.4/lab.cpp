#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x, xp, xk, dx;  // вхідні аргументи
	double R1; // âõ³äíèé ïàðàìåòð
	double R2; // âõ³äíèé ïàðàìåòð
	double y; // ðåçóëüòàò îá÷èñëåííÿ âèðàçó

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		<< setw(7) << "y" << "       |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk) {
	if (x <= -R1)
		y = ((x + 2) * (-R1))/(2-R1);
		//2
	else if (-R1 < x && x <= 0)
			y = sqrt(pow(R1, 2) - pow(x, 2)) - R1;
			//3
		else if (0 < x && x <= R2)
				y = sqrt(pow(R2, 2) - pow(x, 2)) + R2;
				//4
			else if (R2 < x && x <= 4)
					y = -R1;
				else y = (R1 / 2) * (x - 4) - R1;

	cout << "|" << setw(7) << setprecision(2) << x
		<< "   |" << setw(10) << setprecision(3) << y
		<< "    |" << endl;
	x += dx;
}
cout << "---------------------------" << endl;
cin.get();
return 0;


