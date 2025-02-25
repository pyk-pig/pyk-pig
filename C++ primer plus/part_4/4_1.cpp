#include <stdio.h>
#include <string.h>

void dectobin(int *a, int *sums, int n);
void printPixelSequence(int *binaryStr,int n);
void printPixelSequence(int *binaryStr,int n) {
    int length = n;
    int i = 0;

    while (i < length) {
        // 检查当前位是否为1
        if (binaryStr[i] == '1') {
       //  printf("1");
            // 计算连续的1的长度
            int count = 0;
            while (i < length && binaryStr[i] == '1') {
                count++;
                i++;
            }
         printf("%d\n", count+128);
            
            
            
             } else {
      //  printf("0");
            // 计算连续的0的长度
            int count = 0;
            while (i < length && binaryStr[i] == '0') {
                count++;
                i++;
            }
         printf("%d\n", count);
             
    
            
        }
        // 如果不是最后一个字节，打印一个空格分隔
       
    }
    printf("\n");
}
void dectobin(int *a, int *sums, int n) {
    int i;
    for (i = 0; i < n; i++) {
        int sum = 0;
        int x = 1; // x 为叠加的系数
        while (a[i] > 0) {
            int y = a[i] % 2; // y 表示余数
            sum += x * y;
            x *= 10;
            a[i] /= 2;
        }
        
	   printf("%.8d ", sum); // 将计算结果存储在 sums 数组中
	   sums[i] = sum;
    }
    
}


int main() {
    int n,i,j;
    printf("输入整数的数量: ");
    scanf("%d", &n);

    int a[n]; // 定义数组
    int sums[n]; // 定义数组来存储每个数字的二进制和

    printf("请输入%d个整数：", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]); // 读取每个整数
    }

    dectobin(a, sums, n); // 调用函数转换并打印二进制表示
   //char *binaryStr =sums;
    printPixelSequence(sums,n);
    return 0;
}