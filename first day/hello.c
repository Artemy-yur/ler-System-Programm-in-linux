#include <stdio.h>
#include "hello.h"

struct timur {
    short age;
    short penix;
};

void hello_timur(const char *name, struct timur t) {
    // Добавили кавычки для строки формата
    printf("name - %s\nage - %hd\npen - %hd\n", name, t.age, t.penix);
}
