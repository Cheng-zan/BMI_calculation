//NAME : HAMDI HASBULLAH NASARUDDIN
//MATRIC: 2023126387
//NAME : MUHAMMAD NA'IM BIN JOHARI
//MATRIC: 2023165005
//CLASS: CS2401A
//LECTURER: Dr. AFIZA BINTI ISMAIL

#include <iostream>
using namespace std;

int main()
{
	float body_weight, body_height, BMI;

	cout << "Please insert your body weight in (kg): ";
	cin >> body_weight;

	cout << "Please insert your body height in (m): ";
	cin >> body_height;

	BMI = body_weight / (body_height * body_height);

	cout << "your BMI is " << BMI << endl;

	system("pause");

	return 0;
}