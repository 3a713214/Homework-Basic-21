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
	printf("�п�J id:");
	scanf("%s", servitor.id);
	printf("�п�J name:");
	scanf("%s", servitor.name);
	printf("�п�J W:");
	scanf("%d", &servitor.W);
	printf("�п�J H:");
	scanf("%d", &servitor.H);
	salc(&servitor);
	printf("\n\n%s�����:---------\n", servitor.name);
	printf("ID:%s\n", servitor.id);
	printf("�m�W:%s\n", servitor.name);
	printf("���~:%d\n", servitor.W);
	printf("�u�@�ɼ�:%d:\n", servitor.H);
	printf("�~��:%d\n", servitor.pay);
}
int salc(struct Servitor *ser){
	(ser->pay)=(ser->W)*(ser->H);
	return (ser->pay);
}


