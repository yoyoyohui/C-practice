#include <stdio.h>
int add(int a, int b){
    int left; 
    int right; 
    int sum = 0;
    if(a < b){
        left = a;
        right = b;
    }
    else{
        left = b;
        right = a;//判断a b大小，调换位置
    }
    for(; left <= right; left++){
        if(left % 2 != 0){
            sum += left;//判断并累加奇数。
        }
    }
    return sum; //返回结果。
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("That number = %d", add(a,b));//计算并输出结果。
}
