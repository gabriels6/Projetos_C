#include <stdio.h>

struct task {
    int start;
    int finish;
};

int tasks_on_hour(struct task *v, int n, int h) {
    int i = 0;
    int valid_tasks = 0;
    while (i <= n) {
        if (v[i].start == h)
            ++valid_tasks;
        ++i;
    }
    return valid_tasks;
}

int main() {
    struct task t1;
    struct task t2;
    struct task t3;
    struct task t4;

    t1.start = 0;
    t1.finish = 2;

    t2.start = 2;
    t2.finish = 5;

    t3.start = 2;
    t3.finish = 3;
    
    t4.start = 5;
    t4.finish = 8;

    struct task v[] = {t1,t2,t3,t4};
    int n = 4;
    int h = 8;

    printf("No. de tarefa iniciadas na hora %d = %d",h,tasks_on_hour(v,n,h));
}