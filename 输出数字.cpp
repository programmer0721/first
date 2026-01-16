#include <stdio.h>
int i=0;
void print(){
	printf("%d\n",i++);
	while(i<=352) print();//我是B，把350改成351 //A又把351改成了352//A
}
int main(){
	print();
	return 0;
}
