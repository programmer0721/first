#include <stdio.h>
int i=0;
void print(){
	printf("%d\n",i++);
	while(i<=350) print();
}
int main(){
	print();
	return 0;
}
