// coordin.h -- structure templates and function prototypes
#ifndef COORDIN_H_
#define COORDIN_H

struct polar {
	double distance;
	double angle;
};

struct rect {
	double x;
	double y;
};

polar rect_to_polar(rect);
void show_polar(polar);

#endif // !COORDIN_H_
