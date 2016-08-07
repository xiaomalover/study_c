#include <stdio.h>

//结构体申明
struct student {
    int age;
    char name[20];
};

//类型定义
typedef struct student stu;

int main()
{
    //结构体使用
    stu stu1 = {24,"xiaoma"};
    printf("%s\n%d\n", stu1.name, ++stu1.age);

    //结构体指针
    stu stu2 = {33, "zhangsan"};
    stu * pstu2;
    pstu2 = &stu2;
    printf("%s\n%s\n", pstu2->name, (*pstu2).name);

    //结构体数组
    stu stu3[] = {{22, "wangwu"}, {42, "zhaoliu"}};
    printf("%s\n%d\n", stu3[0].name, stu3[1].age);

    //指向结构体数组的指针
    stu * pstu3;
    pstu3 = stu3;
    printf("%s\n%d\n", pstu3->name, pstu3->age);

    //指针增加就是数组下标偏移增加
    pstu3++;
    printf("%s\n%d\n", pstu3->name, pstu3->age);

    return 0;
}
