#include <stdio.h>

struct Task {
    int start;
    int finish;
};

int ind_max(struct Task *ts, int n) {
    int m = 0;
    for (int i = 1; i < n; ++i) {
        if(ts[i].finish > ts[m].finish) m = i;
    }
    return m;
}

void sort_arr(struct Task *ts, int n) {
    int i = 0;
    while (i < n) {
        int max_val = ind_max(&ts[i], n);
        struct Task aux = ts[i];
        ts[i] = ts[max_val];
        ts[max_val] = aux;
        ++i;
    }
}

int size_of_max(struct Task *ts, int n) {
    sort_arr(ts,n);
    int u = 0; c = 1;
    for (int i = 1;i < n; ++i)
        if (ts[i].start >= ts[u].finish) {
            ++c; u = i;
        }
    return c;
}

int size_of_max_ptr(struct Task *ts, int n) {
    sort_arr(ts,n);
    struct Task u = ts; struct Task c = ts + 1;
    for (struct Task *i = ts; t < ts+n; ++i)
        if (i->start >= u->finish) {
            struct task aux = c;
            c = i;
            ts[c] = aux;
            ++c; u = i;
        }
    return c;
}

void sort_compatible() {
    sort_arr(ts,n);
    int u = 0; c = 1;
    for (int i = 1;i < n; ++i)
        if (ts[i].start >= ts[u].finish) {
            struct task aux = ts[c];
            ts[c] = ts[i];
            ts[i] = aux;
            ++c; u = i;
        }
}

int print_tasks(struct Task *ts, int n) {
    for (int i = 1;i < n; ++i){
        printf("%d. Start: %d, Finish: %d", i, ts[i].start, ts[i].finish)
    }
}

// Seleciona a primeira tarefa com final mais cedo, busca a segunda que 
int main() {
    int n;
    scanf("%d",&n);
    struct Task ts[n];
    for(int i = 0;i < n; ++i) {
        scanf("%d%d", ts[i].start, ts[i].finish);
    }
}