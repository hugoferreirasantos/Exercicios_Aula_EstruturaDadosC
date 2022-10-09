#include <stdio.h>
#include <stdlib.h>


int main() {

    int *a, b;

    b = 100;

    a = &b;

    func(a, b);

    printf ("%d, ", *a);

    printf ("%d", b);

}

void func (int *a, int b) {

    *a = *a + b;

    b = 150;

}
