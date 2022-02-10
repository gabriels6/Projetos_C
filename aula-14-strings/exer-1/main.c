#include<stdio.h>

int get_char_occ(const char *s, char c){
    int v = 0;
    while(*s) {
        if (*s == c) ++v;
        ++s;
    }
    return v;
}

int get_occ_recursive(const char *s, char c){
    if (!*s) return 0;
    return (*s == c) + get_occ_recursive(++s,c);
}

int main(){
    char *s = "aabba";
    printf("%d", get_occ_recursive(s,'a'));
}