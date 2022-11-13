/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* plusOne(int* digits, int digitsSize, int* returnSize) { 
    *returnSize=digitsSize+1;
    while(digitsSize!=0)
    {
        digitsSize--;
        if(++digits[digitsSize]>9)
        {digits[digitsSize]=0;}
        else
        {
            (*returnSize)--;
            return digits;
        }
    }
    int *result=(int*)malloc(sizeof(int)*(*returnSize));
    result[0]=1;
    for(int i=1;i<*returnSize;i++)
    {
        result[i]=digits[i-1];
    }
    return result;
}