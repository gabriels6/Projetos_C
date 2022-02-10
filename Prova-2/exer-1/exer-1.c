#include <stdio.h>

int is_in_base_16(char c) {

    char *values = "0123456789ABCDEF";

    for(char *v = values; *v != '\0'; ++v) {
        if (c == *v)
            return 1;
    }
    return 0;
}

int is_string_in_base_16(char *s) {
    int is_valid = 1;
    while(*s != '\0') {
        if (!is_in_base_16(*s)) 
            is_valid = 0;
        ++s;
    }
    return is_valid;
}

int main() {

    char *s1 = "12AB3F"; 
    char *s2 = "12aB3F"; 
    char *s3 = "2255EF"; 
    char *s4 = "D955ZA"; 

    printf("%s is in base 16? %d\n", s1, is_string_in_base_16(s1));
    printf("%s is in base 16? %d\n", s2, is_string_in_base_16(s2));
    printf("%s is in base 16? %d\n", s3, is_string_in_base_16(s3));
    printf("%s is in base 16? %d", s4, is_string_in_base_16(s4));
}