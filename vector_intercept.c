#include <stdio.h>

double findS(double a, double b, double c, double d, double e, double f) {
	double top = d * e - b * f;
	double bot = a * d - b * c;
	double s = top/bot;
	return s;
}

double findT(double a, double b, double c, double d, double e, double f) {
	double top = a * f - c * e;
	double bot = a * d - b * c;
	double t = top/bot;
	return t;
}
	
int main ( int argc char** argv ) {
	double points[8];
	double n;
	int point = 0;
	while( scanf("%d", &n ) != EOF ) {
		points[point] = n;
		point++;
	}//while
	double a = points[1] - points[0];
	double b = points[2] - points[3];
	double c = points[5] - points[4];
	double d = points[6] - points[7];
	double e = points[2] - points[0];
	double f = points[6] - points[4];
	double s = findS(a, b, c, d, e, f);
	double t = findT(a, b, c, d, e, f);
	if ( 0 <= s || s <= 1 ) {
		if ( 0 <= t || t <= 1 ) {
			printf("Lines do intersect");
		}//if
	}//if
	else {
		printf("Lines do not intersect");
	}//else
}//main
