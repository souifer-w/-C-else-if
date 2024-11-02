#include<iostream>

using namespace std;

enum encolor { red = 1, green = 2, blue = 3, yellow = 4 };

int main() {

	cout << "color " << endl;
	cout << " *****************************************" << endl;
	cout << " please enter your color" << endl;
	cout << "1 : red" << endl;
	cout << " 2 : green " << endl;
	cout << " 3 : blue " << endl;
	cout << " 4 : yellow" << endl;
	cout << " * ***********************************************************" << endl;
	cout << "enter your color " << endl;

	int c;
	encolor color;

	cin >> c;
	color = (encolor)c;

	if (color == encolor::blue)
	{

		system("color4");

	}
	else if (color == encolor::green)
	{
		system("color F6");

	}

	else if (color == encolor::yellow)
	{
		system("color F1");
	}
	else if (color == encolor::red)
	{
		system("color F2");

	}
	else
	{
		cout << "color" << endl;
	}


}
