#include <stdio.h>

void print_recursion(int* arr_beg, int cont, int length)
{
    if(cont > length){
        return;
    }
    printf("%d ", *(arr_beg + cont));
    print_recursion(arr_beg,3+cont,length);
}

void print_reverse_recursion(int* arr_beg, int cont)
{
    if(cont <= 0){
        return;
    }
    printf("%d ", *(arr_beg + cont));
    print_reverse_recursion(arr_beg,--cont);
}

void print_recursion_v2(int n){

    // Ponto final
    if(n == 0) return;
    if(n == 1) printf("1 ");

    // Recursão
    print_recursion_v2(n-1);

    // Definição do código da função
    printf("%d ", n);
}

void print_simple_recursion(int* arr_beg, int* arr_end)
{
    if (arr_end == arr_beg) {
        return;
    }
    print_simple_recursion(arr_beg,--arr_end);
    printf("%d ", *(arr_end));
}


int verify_value_in_arr(int* arr_beg, int* arr_end, int x)
{
    if (arr_end == arr_beg) {
        return 0;
    }
    if(*(arr_end - 1) == x) return 1;
    return verify_value_in_arr(arr_beg,--arr_end,x);
}

int main()
{
    int arr[] = {3,1,2,5,3,4,2};

    printf("%s",verify_value_in_arr(arr,arr+7,10) ? "True" : "False");

    return 0;
}