#pragma once
#include <iostream>
#include <sstream>
class HSLAPixel {
public:
	double h, s, l, a;
	HSLAPixel();
	HSLAPixel(double hue, double saturation, double luminance);
	HSLAPixel(double hue, double saturation, double luminance, double alpha);
	static HSLAPixel BLUE;
	static HSLAPixel ORANGE;
	static HSLAPixel YELLOW;
	static HSLAPixel PURPLE;
};