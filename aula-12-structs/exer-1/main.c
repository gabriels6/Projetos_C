#include <stdio.h>

struct ponto {
    double x,y;
};

struct ponto soma_ptr(struct ponto *p, struct ponto *r) {
    struct ponto s = {.x = (*p).x + (*r).x, .y = (*p).y + (*r).y};
    return s;
};

struct ponto soma_ptr_abrev(struct ponto *p, struct ponto *r) {
    struct ponto s = {.x = p->x + r->x, .y = p->y + r->y};
};

int main() {
    struct ponto p = {4, 7};
    printf("x = %f; y= %f", p.x, p.y);
}