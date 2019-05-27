#include<stdio.h>
#include<stdlib.h>
struct Servitor{
	char id[20];
	char name[20];
	int W;
	int H;
	int pay;
};
int salc(struct Servitor*);
int main(void){
	struct Servitor servitor;
	printf("請輸入 id:");
	scanf("%s", servitor.id);
	printf("請輸入 name:");
	scanf("%s", servitor.name);
	printf("請輸入 W:");
	scanf("%d", &servitor.W);
	printf("請輸入 H:");
	scanf("%d", &servitor.H);
	salc(&servitor);
	printf("\n\n%s的資料:---------\n", servitor.name);
	printf("ID:%s\n", servitor.id);
	printf("姓名:%s\n", servitor.name);
	printf("時薪:%d\n", servitor.W);
	printf("工作時數:%d:\n", servitor.H);
	printf("薪水:%d\n", servitor.pay);
}
int salc(struct Servitor *ser){
	(ser->pay)=(ser->W)*(ser->H);
	return (ser->pay);
}


