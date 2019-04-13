// nia nur atika 1817051015


#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<windows.h>
#define max 20
using namespace std;

struct tong
{
        int top;
        char tmp[20][max];
}
tong;
       
void push (char sampah[20]);
void pop();
void awal();
int isEmpty();
int isFull();
       
