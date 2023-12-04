#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dsquared = dx * dx + dy * dy;
    double result = sqrt(dsquared);
    return result;
}

int main(){
	double dist = distance(1, 3, 5, 10);
	cout << "the distance is " << dist << endl;
	return 0;
}