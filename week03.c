#include <stdio.h>
#include <stdlib.h>
//int k, l;
/* global มีค่าเริ่มต้นอัตโนมัติ
กำหนดค่าเรีิ่มต้นให้ตัวแปรทุกตัว */
int addten(int x){
    printf("addten x = %d\n", x);
    x += 10;
    printf("after = %d\n",x);
    return x;
}
int main()
{
    int x= 200;
    int y = addten(x);
    printf("In main x = %d, y =%d\n", x, y );

}
    //int, j;
    //printf("%d %d %d %d\n", i , j, k, l);
    /*while(i<10){
        printf("%d\n",i);
        i++;
    }// รู้จำนวนรอบ

    while(1){
        printf("%d\n",i);
        i++;
    /*ค่าความจริงเป้นจริง = 1
    }*/
    
    // for(int i = 0; i < 10; i++ ){
      //  printf("%d\n", i );

   // }
    
//}