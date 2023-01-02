#include <stdio.h>
#include "math.h"
int mini(int first, int second){
    if (second>first){
        return first;
    } else{
        return second;
    }
}

int jumpSearch(int arr[],int size,int value) {
    int step = size / 4;
    int previous = 0;
    int plusStep=0;
    while (arr[mini(step, size) - 1] < value) {
        previous = step;
        step = step + size / 4;

    }
    if (previous >= size) {
        return -1;
    }

        for (int j = plusStep; j < step; j++) {
            plusStep = previous/2;
            if (arr[j] == value) {
                return j;
            }
        }
        return -1;

}
int main() {
    int arr[]={1,5,8,12,18,25,35,36,39,40,55,58,62,71,88,99};
    int size=sizeof (arr)/sizeof (arr[0]);
    int toFind=55;

    int indexNumber = jumpSearch(arr,size,toFind);
    if (indexNumber != -1){
        printf("We found %d \n",arr[indexNumber]);
        printf("We found data at %d \n", indexNumber);
    }else{
        printf("We not found");
    }


    return 0;
}
