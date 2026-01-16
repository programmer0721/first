#include <stdio.h>
int i=0;
void print(){
	printf("%d\n",i++);
	while(i<=351) print();//我是B，把350改成351
}
int main(){
	print();
	return 0;
}
