#include<stdio.h>
void add(int a)
{
    printf("The address of variable a is %u\n",&a);

}
int main(){
    int i= 3;
    printf("The value of i= %d\n",i);
    add(i);
    printf("\nThe address of i= %u\n",&i);
    return 0;
}