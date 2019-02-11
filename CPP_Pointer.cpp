#include <iostream>
using namespace std;
void add(int* x, int* y){
    printf("sum = %d\n",*x+*y); //���Ы��V���ƭȬۥ[
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
    int*pi_1,*pi_2 ;  //�ŧi���V��ƪ������ܼ�
    pi_1 = &num1;  //�Ϋ���pi_1���Vnum1����m
    printf("pi_1 = %d\n",*pi_1); //pi=7339588
    pi_2 = &num2;//�Ϋ���pi_2���Vnum2����m
    add(pi_1,pi_2);
    printf("*pi_1++ = %d\n",&pi_1);

    int* x=0;
    cout<<x<<endl;
    x++;
    cout<<x<<endl;

    int *ptr;
    int b = 10 ;
    printf("b�G%d\n",b);  //b�G10
    printf("&b�G%d\n",&b);  //&b�G7208676 b��������}
    ptr = &b;  // ptr���Vb����m
    printf("ptr�G%d\n",ptr);  //ptr�G7208676
    printf("&ptr�G%d\n",&ptr);  //&ptr�G7208680 ptr��������}

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
