#include <stdio.h>
#include <stdlib.h>


int main(){
	int *a , b, **c;
	b = 150;
	a = &b;
	c = &a;
	**c = 400;
	soma(a,b,c);
	
	printf("Valor do ponteiro: %d ",*a);
	printf("Valor da variavel b: %d", b);
	printf("Valor do ponteiro de ponteiro c: %d",**c);
}

void soma(int *a, int b, int **c){
	*a = *a + b;
	b = 150;
}
