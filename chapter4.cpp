#include "std_lib_facilities.h"

int main(){
	double a = 0;
	double smallest = 32767;
	double largest = -32767;
	double sum = 0;
	string unit;
	vector<double> metres;
	const int cmToM = 0.01;
	const double inchToM = 0.0254;
	const double ftToM = 12*inchToM;
	while(cin >> a >> unit){
		cout << a << ' ';
		if(a > largest){
			largest = a;
			cout << "the largest number so far" << endl;
		}
		if(a < smallest){
			smallest = a;
			cout << "the smallest number so far" << endl;
		}
		else
			cout << endl;
		if(unit != "cm" && unit != "m" && unit != "in" && unit != "ft")
			simple_error("use cm, m, in, or ft");
		cout << a << unit << " = " ;
		if(unit == "cm")
			a *= cmToM;
		if(unit == "in")
			a *= inchToM;
		if(unit == "ft")
			a *= ftToM;
		cout << a << "m" << endl;
		sum += a;
		metres.push_back(a);
		sort(metres);
		cout << "Smallest: " << smallest << ", largest: " << largest <<", sum: " << sum << "m" << endl;
		cout << "Values of the vector in ascending order: " << endl;
		for(double elem : metres)
			cout << elem << ' ';
		cout << endl;
	}

	return 0;
}
