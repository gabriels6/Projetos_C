#include <stdio.h>

struct ponto {
    double x,y;
};

int count_points_in_first_quarter (struct ponto *ps,struct ponto *ps_end) {
    int ps_size = 0;
    while(ps != ps_end) {
        if(ps->x > 0 && ps->y > 0) ++ps_size;
        ++ps;
    }
    return ps_size;
}


int main() {
    struct ponto ps[5] = {
        {.x = 2, .y = 1},
        {.x = 5, .y = -3},
        {.x = 3, .y = 9},
        {.x = -3, .y = 9}
    };

    printf("Pontos do 1o quadrante: %d", count_points_in_first_quarter(ps,ps+5));
}