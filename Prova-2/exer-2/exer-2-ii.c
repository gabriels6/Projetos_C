#include <stdio.h>

struct task {
    int start;
    int finish;
};



struct task *find_minimum_task(struct task *arr, int n) {
    struct task *min_value = arr;
    for (struct task *value = arr + 1; value != arr + n; ++value) {
        if (value->finish - value->start < min_value->finish - min_value->start) {
            min_value = value;
        }
    }
    return min_value;
}

void sort_tasks(struct task *v, int n) {
    int i = 0;
    while (i < n) {
        struct task *t = find_minimum_task(v+i,n-i);
        struct task temp = v[i];
        v[i] = *t;
        *t = temp;
        ++i;
    }
}

void print_tasks(struct task *v, int n) {
    int i = 0;
    while(i < n) {
        printf("Task from %d to %d duration: %d\n", v[i].start, v[i].finish, v[i].finish - v[i].start);
        ++i;
    }
    printf("\n");
}


int main() {
    struct task t1;
    struct task t2;
    struct task t3;
    struct task t4;
    struct task t5;

    t1.start = 0;
    t1.finish = 8;

    t2.start = 2;
    t2.finish = 7;

    t3.start = 9;
    t3.finish = 11;

    t4.start = 2;
    t4.finish = 7;

    t5.start = 9;
    t5.finish = 13;

    struct task v[] = {t1,t2,t3,t4,t5};
    int n = 5;

    sort_tasks(v,n);
    print_tasks(v,n);
}