#include"mytemperature.h"
double celsius_to_fah(double cel) {
	double fah = cel * 9 / 5 + 32;
	return fah;
}
double fahrenheit_to_cels(double fah) {
	double cel = (fah - 32) * 5 / 9;
	return cel;
}
