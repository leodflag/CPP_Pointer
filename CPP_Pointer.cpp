#include <iostream>
using namespace std;
void add(int *x, int *y) // 3. 函式內的引數
{
    printf("sum = %d\n", *x + *y); //指標指向的數值相加
}
void swapValue1(int a, int b)  // 複製a、b數值後交換
{
    int tmp = a;
    a = b;
    b = tmp; // 交換完的結果僅在函式內
    cout << "swapValue1_a=" << a << endl;
    cout << "swapValue1_b=" << b << endl;
}
void swapValue2(int &a, int &b) // 輸入a、b位址
{    // ＆在函式(function)使用時設為參考 (reference)
    int tmp = a;
    a = b;
    b = tmp; // a、b值互換結果在函式外仍沿用
}
int main()
{
    //------------*的用法------------
    int num1 = 2, num2 = 3;
    printf("&num1 = %p\n", &num1); //  &num1 = 0x7fff34867b50
    int *pi_1, *pi_2;              // 2.宣告指向整數的指標
    pi_1 = &num1;                  //用指標pi_1指向num1的位址
    pi_2 = &num2;                 //用指標pi_2指向num2的位址
    printf("pi_1 = %d\n", *pi_1); // pi_1 = 2   （4.用*取指標指向變數的值）
    printf("&pi_1 = %p\n", &pi_1); // &pi_1 = 0x7ffe140a9f68
    add(pi_1, pi_2);               // sum = 5
    //------------指標的記憶體位址變動------------
    int *x = 0; // x記憶體位址：0
    cout << x << endl;
    x++; // x記憶體位址：0x4
    cout << x << endl;
    //------------＆的用法2. 解出記憶體位置------------ 
    int *ptr;
    int b = 10;
    printf("b：%d\n", b);       //b變數值：10
    printf("&b：%p\n", &b);     //&b：0x7ffd8bc63f5c b本身的位址
    ptr = &b;                   // ptr指向b的位置
    printf("ptr：%d\n", *ptr);  //ptr：10  用*取指標指向變數的值
    printf("&ptr：%p\n", &ptr); //&ptr：0x7ffd8bc63f60 ptr本身的位址
    //------------＆的用法2. 解出記憶體位置------------
    int a = 5;
    int b = 10;
    swapValue1(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "&a=" << &a << endl;
    cout << "&b=" << &b << endl;
    swapValue2(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "&a=" << &a << endl;
    cout << "&b=" << &b << endl;
    //--------------一般變數--------------
    int A = 1;
    printf("&A = %p\n", &A); // 取址 0x7ffe23d566f0
    printf("A=%d\n", A);     // 直接印出A存的值  1
    printf("*&A=%d\n", *&A); // 從此地址中取出A的值 1
    //---------------指標變數-------------
    int *P;
    P = &A;
    printf("P=%p\n", P);     // 從此P地址中取出P存的A位址
    printf("&P=%p\n", &P);   // 取出指標變數的位址
    printf("*P=%d\n", *P);   // 從此地址中取出此地址的值
    printf("*&P=%p\n", *&P); //從此P地址中取出P存的A位址
    //---------------改變變數值-------------
    int b = 2;
    int *pointer = &b;                           // 宣告一個指標變數，存入b的變數位址
    printf("b=%d\n", b);                         // 印出b的值
    printf("&b=%p\n", &b);                       // 用＆取出b的地址
    printf("pointer=%p\n", pointer);             //印出指標變數的變數值
    printf("變數pointer的地址：%p\n", &pointer); // 用＆取出pointer的地址
    *pointer = 100;                              // 用*取出指標變數的內容存入數值100，連帶此位址的內容也變100
    printf("*pointer的值：%d\n", *pointer);      // 用*取出pointer存的b位址的值
    printf("變數b的值：%d\n", b);                // b位址內容的變數值被存成100
    printf("變數pointer的地址：%p\n", &pointer); // 用＆取出pointer的地址
    printf("pointer=%p\n", pointer);             // 直接印出pointer存的b位址
    printf("&b=%p\n", &b);                       // 用＆取出b的地址
    //--------------交換數值與指標數值--------------
    int a, b, temp;
    int *p1, *p2;
    printf("請輸入a值："); //1
    scanf("%d", &a);       //%d  type 'int*'
    printf("請輸入b值："); //2
    scanf("%d", &b);
    printf("a=%d\n", a);   // 變數值 1
    printf("b=%d\n", b);   // 2
    printf("&a=%p\n", &a); // 位址 &a=0x7ffcf944678c
    printf("&b=%p\n", &b); //  &b=0x7ffcf9446790
    p1 = &a;                        // 將a的位址存入指標p1
    p2 = &b;                        // 將b的位址存入指標p2
    printf("p1的值：%p\n", p1);     // 指標p1的存的位址(值)：0x7ffcf944678c
    printf("p2的值：%p\n", p2);     // 指標p2的存的位址(值)：0x7ffcf9446790
    printf("*&p1的值：%p\n", *&p1); // 1 (取指標指向變數的值)
    printf("*&p2的值：%p\n", *&p2); // 2
    printf("*p1的值：%d\n", *p1);   // 1 (取指標指向變數的值)
    printf("*p2的值：%d\n", *p2);   // 2
    printf("&p1的位址：%p\n", &p1); // 指標p1的位址：0x7ffcf9446798
    printf("&p2的位址：%p\n", &p2); // 指標p2的位址：0x7ffcf94467a0
    if (*p1 < *p2) // 如果指標p1指向位址的值小於p2的
    {
        temp = *p1; // 將兩個指標指向位址的值互換，但各自指向的位址值不換
        *p1 = *p2;
        *p2 = temp;
    }
    printf("p1的值：%p\n", p1);     // 指標p1的存的位址(值)：0x7ffcf944678c
    printf("p2的值：%p\n", p2);     // 指標p2的存的位址(值)：0x7ffcf9446790
    printf("*p1的值：%d\n", *p1);   // 2
    printf("*p2的值：%d\n", *p2);   // 1
    printf("*p1的位址：%p\n", &p1); // 0x7ffcf9446798
    printf("*p2的位址：%p\n", &p2); // 0x7ffcf94467a0
    printf("a=%d\n", a);   // 2
    printf("b=%d\n", b);   // 1
    printf("&a=%p\n", &a); // 0x7ffcf944678c
    printf("&b=%p\n", &b); // 0x7ffcf944679ㄒ
}