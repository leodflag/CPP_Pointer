#include <iostream>
using namespace std;
void add(int* x, int* y){
    printf("sum = %d\n",*x+*y); //指標指向的數值相加
}
void swapValue1(int a,int b){
    int tmp = a;
    a = b;
    b = tmp;
    cout<<"swapValue1_a="<<a<<endl;
    cout<<"swapValue1_b="<<b<<endl;
}
void swapValue2(int &a,int& b){
    int tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int num1 = 2 , num2 = 3;
    printf("&num1 = %d\n",&num1);
    int*pi_1,*pi_2 ;  //宣告指向整數的指標變數
    pi_1 = &num1;  //用指標pi_1指向num1的位置
    printf("pi_1 = %d\n",*pi_1); //pi=7339588
    pi_2 = &num2;//用指標pi_2指向num2的位置
    add(pi_1,pi_2);
    printf("*pi_1++ = %d\n",&pi_1);

    int* x=0;
    cout<<x<<endl;
    x++;
    cout<<x<<endl;

    int *ptr;
    int b = 10 ;
    printf("b：%d\n",b);  //b：10
    printf("&b：%d\n",&b);  //&b：7208676 b本身的位址
    ptr = &b;  // ptr指向b的位置
    printf("ptr：%d\n",ptr);  //ptr：7208676
    printf("&ptr：%d\n",&ptr);  //&ptr：7208680 ptr本身的位址

    int a = 5;
    swapValue1(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"&a="<<&a<<endl;
    cout<<"&b="<<&b<<endl;
    swapValue2(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"&a="<<&a<<endl;
    cout<<"&b="<<&b<<endl;
}
