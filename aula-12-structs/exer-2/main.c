#include <stdio.h>

struct ponto {
    double x,y;
};

float get_square(float value, int exponent){
    float result = 1;
    int index = 1;
    while (index < exponent) {
        result *= value;
        ++index;
    }
}

float get_points_square_distance (struct ponto *p1, struct ponto *p2) {
    if(p1->x > p2->x) 
        return get_square(p1->x - p2->x,2) + get_square(p1->y - p2->y,2);
    return get_square(p2->x - p1->x,2) + get_square(p2->y - p1->y,2);
}

struct ponto find_closest_point (struct ponto *ps, struct ponto *ps_end, struct ponto *p) {
    struct ponto closest_pt = *ps;
    ++ps;
    while(ps != ps_end) {
        if(get_points_square_distance(ps,p) < get_points_square_distance(p,&closest_pt)) closest_pt = *ps;
        ++ps;
    }
    return closest_pt;
}


int main() {
    struct ponto ps[5] = {
        {.x = 2, .y = 1},
        {.x = 5, .y = -3},
        {.x = 3, .y = 9},
        {.x = -3, .y = 9}
    };

    struct ponto p = {
        .x = 5,
        .y = -2,
    };

    struct ponto mais_prox = find_closest_point(ps,ps+5,&p);

    printf("Ponto mais proximo %f %f", mais_prox.x, mais_prox.y);
}