#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int h,k,z;
	printf("��J1�ӼƦr:");
	scanf("%d",&h);
    printf("��J1�ӼƦr:");
	scanf("%d",&k);
	printf("��J1�ӼƦr:");
	scanf("%d",&z);
	if(h+k>z&&h+z>k&k+z>h)
	printf("�O�ӤT����\n");
	else
	printf("���O�T����\n");
	system("pause");
	return 0;
}
