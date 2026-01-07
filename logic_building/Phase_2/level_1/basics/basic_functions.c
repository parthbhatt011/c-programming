// basic_functions.c
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int sumOfDigits(int n){
    int sum=0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}

int countVowels(const char *str){
    int c=0;
    for(int i=0; str[i]; i++){
        char ch = tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') c++;
    }
    return c;
}

int factorial(int n){
    int f=1;
    for(int i=1; i<=n; i++) f*=i;
    return f;
}

int isPrime(int n){
    if(n<=1) return 0;
    for(int i=2; i*i<=n; i++) 
        if(n%i==0) return 0;
    return 1;
}

int gcd(int a,int b){
    while(b){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int lcm(int a,int b){
    return (a/gcd(a,b))*b;
}

int reverseNumber(int n){
    int r=0;
    while(n){
        r = r*10 + n%10;
        n/=10;
    }
    return r;
}

int maxInArray(int arr[], int n){
    int m=arr[0];
    for(int i=1;i<n;i++) 
        if(arr[i] > m) m = arr[i];
    return m;
}

int minInArray(int arr[], int n){
    int m=arr[0];
    for(int i=1;i<n;i++) 
        if(arr[i] < m) m = arr[i];
    return m;
}

int countWords(const char *str){
    int count=0, inside=0;
    for(int i=0; str[i]; i++){
        if(str[i] != ' ' && !inside){
            inside = 1; 
            count++;
        } 
        else if(str[i] == ' ') inside = 0;
    }
    return count;
}

int isPalindrome(const char *str){
    int l=0, r=strlen(str)-1;
    while(l<r){
        if(str[l] != str[r]) return 0;
        l++; 
        r--;
    }
    return 1;
}

int power(int a, int b){
    int p=1;
    for(int i=0;i<b;i++) p *= a;
    return p;
}

int sumArray(int arr[], int n){
    int s=0;
    for(int i=0;i<n;i++) s += arr[i];
    return s;
}

int asciiOfChar(char c){
    return (int)c;
}

int countOccurrences(const char *str, char ch){
    int c=0;
    for(int i=0; str[i]; i++)
        if(str[i] == ch) c++;
    return c;
}
