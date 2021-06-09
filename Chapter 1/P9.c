/* 华氏温度转换为摄氏温度（300~0，步长为 20）for 循环版（注意是逆序打印） */

#include <stdio.h>

main(){
    int fahr;

    for(fahr = 300; fahr >= 0; fahr -= 20) // 注意这里是 300~0
        printf("%3d %6.1f\n", fahr, (5./9.)*(fahr-32));

    getchar();
    return 0;
}