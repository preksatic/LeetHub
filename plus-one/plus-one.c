/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    *returnSize = digitsSize + 1;
    while (digitsSize != 0){
        digitsSize--;
        if (++digits[digitsSize] > 9){
            digits[digitsSize] = 0;
        }
        else{
            --*returnSize;
            return digits;
        }
    }
    int *a = (int*)malloc(sizeof(int)*(*returnSize));
    a[0]= 1;
    for (int i = 1; i < *returnSize; i++){
        a[i] = 0;
    }
    return a;
}

