#ifndef __POINT__
#define __POINT__

class Point {
public:
    Point() {
        this->x = 0;
        this->y = 0;
    }
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    const int get_x() { return this->x; }
    const int get_y() { return this->y; }
    void set_x(int x) { this->x = x; }
    void set_y(int y) { this->y = y; }
private:
    int x;
    int y;
};

#endif
