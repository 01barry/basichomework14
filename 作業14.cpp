#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int h,k,z;
	printf("輸入1個數字:");
	scanf("%d",&h);
    printf("輸入1個數字:");
	scanf("%d",&k);
	printf("輸入1個數字:");
	scanf("%d",&z);
	if(h+k>z&&h+z>k&k+z>h)
	printf("是個三角形\n");
	else
	printf("不是三角形\n");
	system("pause");
	return 0;
}
