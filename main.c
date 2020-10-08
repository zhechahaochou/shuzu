#include <stdio.h>

/*
 * 数组：存储多个数据
 * 1.C语言的数组只能存放同一种类型
 * 2.数组定义的特点[]
 * 例：如果定义的数组类型是int 则这个数组只能存放int类型的数据
 * 3.定义数组时必须明确知道数组元素的个数
 * 系统为这个变量分配内存空间时，必须知道这个变量占多少内存空间
 * 如果是系统的基本类型： int  float   long  double  char  bool  short，系统已经定义好了
 * 自己定义数组时，系统不知道你要放多少个元素，无法确定数组的内存空间
 * a.定义时明确指定元素的个数
 * float height[10];
 * b.初始化不指定元素个数，通过初始化来计算
 * int ages[] = {1,2,3,4,5};
 * c.明确指定元素个数并且初始化
 * float  scores[5] = {80,90};//80,90,0,0,0
 * 4.如何计算数组元素的个数
 *  int ages[] = {1,2,3,4,5};
    printf("%d",sizeof(ages));//5*4 = 20
    int count = sizeof(ages)/sizeof(int );
 *
 * 5.如何访问数组
 * 数组是通过下标来定位每一个元素  这个下标默认从0开始
 * 第一个元素a[0]
 * 第二个元素a[1]
 * 最后一个元素a[n-1]
 *
 * 获取某值get
 * 设置某值set
 */
int main() {
//    int a = 10;
//    float height[10];
//    int ages[] = {1,2,3,4,5};
//    float  scores[5] = {80,90};//80,90,0,0,0
//   //get
//   printf("%d\n",ages[0]);
//   printf("%d\n",ages[4]);
//   //set
//   ages[0] = 3;

//   int array[7] = {};
//    for (int i = 0; i <7-1-i; ++i) {
//        //交换i和6-i的值
//        //1使用临时变量保存一个数
//        int temp = array[i];
//        //2将另一个数写到第一个变量中
//        array[i] = array[6-i];
//        //3将临时变量的值写到第二个变量中
//        array[6-i] = temp;
//
//        printf("%d\n",array[i]);
//
//    }
int array[10] = {};
    for (int i = 0; i < 10; ++i) {
        array[i] = i+1;
        printf("%d",array[i]);
    }
    printf("\n");
    for (int i = 0; i < 9-i; ++i) {
        int temp = array[i];
        array[i] = array[9-i];
         array[9-i] = temp;
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d",array[i]);

    }

    return 0;
}
