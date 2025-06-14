//
// Created by Isaac Kilis on 14/6/2025.
//

#ifndef GENERICPOINT_H
#define GENERICPOINT_H
template <typename T>
class Point {
    public:
        T a;
        T b;
    Point(T a, T b): a(a), b(b) {}
};

#endif //GENERICPOINT_H
