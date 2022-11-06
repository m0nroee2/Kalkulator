#include <iostream>
#include <conio.h>

using namespace std;

double suma(double a, double b);
double otnimane(double a, double b);
bool neravenstwo(double a);
double mnozenie(double a, double b);
double delenie(double a, double b);
void show(double resaut);
void run();

int main() 
{
	run();
	return 0;
}


double suma(double a, double b)
{
	return a + b;
}
double otnimane(double a, double b)
{
	return a - b;
}
bool neravenstwo(double a)
{
	if (a != 0)
		return false;
	else
		return true;
}
double mnozenie(double a, double b)
{
	return a * b;
}
double delenie(double a, double b)
{
	if (!(neravenstwo(b)))
		return a / b;
	else
		cout << "Chislo na kotoroe vi hotite podelit rovno 0 " << endl;
}
void show(double resaut)
{
	cout << "Vash resultat: "<<resaut << endl;
}
void run()
{
	double	a, b;

	bool work = true;
	
	do
	{
		cout << "Dwe peremennih pozalusta" << endl;
		cin >> a >> b;
		cout << "ESC - clean, +, -, *, /" << endl;

		switch (_getch()) 
		{
		case(27):
			system("cls");
			break;
		case(43):
			show (suma(a, b));
			break;
		case(45):
			show(otnimane(a, b));
			break;
		case(42):
			show(mnozenie(a, b));
			break;
		case(47):
			show(delenie(a, b));
			break;
		}
	} while (work);
}