#include <iostream>
#include <stdio.h>
#define SIZE 10
#define PRIME 7
using namespace std;

int has(int key)
{
return key%SIZE;
}

int primehas(int key)
{
return PRIME - (key%PRIME);
}

int doublehas(int H[], int key)
{
    int idx = has(key);
    int i=0;
    while(H[(has(idx) + i*primehas(idx))%SIZE]!=0)
        i++; 
    return (idx + i*primehas(idx))%SIZE;
}

int probe(int H[], int key)
{
    int index = has(key);
    int i=0;
    while(H[(index+i*i)%SIZE]!=0)
        i++;
    return (index+i*i)%SIZE;
}

void Insert(int H[], int key)
{
    int index = has(key);
    if(H[index]!=0)
        index = doublehas(H,key);
    H[index] = key;

}

int Search(int H[], int key)
{
    int idx = has(key);
    int i=0;
    while(H[(has(idx) + i*primehas(idx))%SIZE]!=key)
        i++;
    return (has(idx) + i*primehas(idx))%SIZE;
}

int main()
{
    int HT[10] = { };
    Insert(HT, 12);
    Insert(HT, 25);
    Insert(HT, 45);
    Insert(HT, 35);
    Insert(HT, 95);
    Insert(HT, 26);
    printf("Key found at %d\n", Search(HT, 35));
    printf("Key found at %d\n", Search(HT, 95));
}
