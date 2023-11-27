#include<stdio.h>
#include<string.h>
struct student
{
	char name[30];
	int id;
	float percentage;
};
int main()
{
	struct student record[3];
	printf("\n Enter the name,ID & percentage\n");
	int i;
	record[0].id=1;
	strcpy(record[0].name,"RAM");
	record[0].percentage=76.50;
    record[1].id=2;
	strcpy(record[1].name,"SHYAM");
	record[1].percentage=66.50;
	record[2].id=3;
	strcpy(record[2].name,"GOPAL");
	record[2].percentage=86.50;

for(i=0;i<3;i++)
{
	printf("\nRecord of student=%d",i+1);
	printf("\n ID=%d",record[i].id);
	printf("\n Name is %s",record[i].name);
	printf("\n Percentage is %f",record[i].percentage);
}
return 0;
}
