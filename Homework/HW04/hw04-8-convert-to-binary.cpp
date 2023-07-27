/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/
#include <cstdio>
int main() {
    int decimalNum, binaryNum = 0, base = 1;
    printf("User input :\n");
    scanf("%d", &decimalNum);

    while (decimalNum > 0) {
        binaryNum += (decimalNum % 2) * base;
        decimalNum /= 2;
        base *= 10;
    }

    printf("Output: \n%05d", binaryNum);

    return 0;
}