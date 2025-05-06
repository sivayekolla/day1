#include<stdio.h>
int main()
{
        char name[20];
        int age;
float marks;
        char grade;
double height;
        scanf("%s %d %c\n",&name,&age,&grade);
        printf("%s %d %c\n",name,age,grade);
	printf("%d %d %d %d",sizeof(name),sizeof(grade),sizeof(height),sizeof(marks));
}
