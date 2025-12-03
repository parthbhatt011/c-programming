// intermediate_functions.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int secondLargest(int arr[], int n){
    int first=-1e9, second=-1e9;
    for(int i=0;i<n;i++){
        if(arr[i] > first){
            second = first;
            first  = arr[i];
        } 
        else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    return second;
}

void rotateArray(int arr[], int n, int k){
    k %= n;
    int temp[n];
    for(int i=0;i<n;i++) 
        temp[(i+k)%n] = arr[i];
    for(int i=0;i<n;i++) 
        arr[i] = temp[i];
}

void removeDuplicates(int arr[], int *n){
    if(*n == 0) return;
    int j=0;
    for(int i=1;i<*n;i++) 
        if(arr[i] != arr[j]) 
            arr[++j] = arr[i];
    *n = j+1;
}

int binarySearch(int arr[], int n, int target){
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) l = mid+1;
        else r = mid-1;
    }
    return -1;
}

void sortArray(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}

int longestWordLength(const char *str){
    int max=0, len=0;
    for(int i=0; str[i]; i++){
        if(str[i] == ' '){
            if(len > max) max = len;
            len = 0;
        } else len++;
    }
    if(len > max) max = len;
    return max;
}

void frequencyCount(int arr[], int n){
    int visited[n];
    for(int i=0;i<n;i++) visited[i] = 0;

    for(int i=0;i<n;i++){
        if(visited[i]) continue;
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[j] == arr[i]){
                visited[j]=1;
                count++;
            }
        }
        printf("%d -> %d\n", arr[i], count);
    }
}

int countSetBits(int n){
    int c=0;
    while(n){
        c += n & 1;
        n >>= 1;
    }
    return c;
}

void mergeArrays(int a[], int n1, int b[], int n2, int result[]){
    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(a[i] < b[j]) result[k++] = a[i++];
        else result[k++] = b[j++];
    }
    while(i<n1) result[k++] = a[i++];
    while(j<n2) result[k++] = b[j++];
}

int isArmstrong(int n){
    int temp=n, sum=0, digits=0;
    while(temp){ digits++; temp/=10; }
    temp=n;
    while(temp){
        int d = temp%10;
        int p = 1;
        for(int i=0;i<digits;i++) p *= d;
        sum += p;
        temp /= 10;
    }
    return sum == n;
}

void toUpperCase(char *str){
    for(int i=0; str[i]; i++)
        str[i] = toupper(str[i]);
}

int findMissingNumber(int arr[], int n){
    int xor1=0, xor2=0;
    for(int i=1;i<=n+1;i++) xor1 ^= i;
    for(int i=0;i<n;i++) xor2 ^= arr[i];
    return xor1 ^ xor2;
}

void reverseString(char *str){
    int l=0, r=strlen(str)-1;
    while(l<r){
        char t = str[l];
        str[l] = str[r];
        str[r] = t;
        l++; r--;
    }
}

int isAnagram(const char *a, const char *b){
    if(strlen(a) != strlen(b)) return 0;
    int freq[256]={0};
    for(int i=0; a[i]; i++) freq[(unsigned char)a[i]]++;
    for(int i=0; b[i]; i++) freq[(unsigned char)b[i]]--;
    for(int i=0;i<256;i++)
        if(freq[i] != 0) return 0;
    return 1;
}

int kadaneMaxSubarray(int arr[], int n){
    int max_so_far = arr[0], curr = arr[0];
    for(int i=1;i<n;i++){
        if(curr < 0) curr = arr[i];
        else curr += arr[i];
        if(curr > max_so_far) max_so_far = curr;
    }
    return max_so_far;
}
