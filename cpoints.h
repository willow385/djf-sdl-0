/* This is a purely procedural version of 'points.hpp'.
'points.hpp' is also pretty procedural, but it has structs
which makes it at least slightly object-oriented. I wrote
this because I couldn't get 'points.hpp' to work properly
in C, even when it was named 'points.h'. */
#ifndef MATH_H
#define MATH_H
#include <math.h>
#endif

/* no structs here I'm afraid */

float rotate_point_x(float cx,
                     float cy,
                     float theta,
                     float px,
                     float py) {
    /* So I formatted my arguments weirdly. Whatcha gonna
    do abouddit? */
    float s = sin(theta);
    float c = cos(theta);
    px -= cx;
    py -= cy;

    float rotated_x = px * c - py * s;
    px = rotated_x + cx;
    return px;
}

float rotate_point_y(float cx,
                     float cy,
                     float theta,
                     float px,
                     float py) {
    float s = sin(theta);
    float c = cos(theta);
    px -= cx;
    py -= cy;

    float rotated_y = px * s + py * c;
    py = rotated_y + cy;
    return py;
}
