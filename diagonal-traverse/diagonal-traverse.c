/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize){
    int f = matSize + *matColSize - 2;
    *returnSize = matSize*(*matColSize);
    int *ret = (int*)malloc(sizeof(int)*(*returnSize));
    int n = 0;
    for (int i = 0; i <= f; i++){
        if (i%2==0){
            int start = i;
            if (i > matSize-1) start = matSize-1;
            int end = 0;
            if (i > *matColSize-1) end = i-(*matColSize-1);
            for (int j = start; j >= end; j--){
                ret[n] = mat[j][i-j];
                n++;
            }
        }
        if (i%2!=0){
            int start = 0;
            if (i > *matColSize-1) start = i-(*matColSize-1);
            int end = i;
            if (i > matSize-1) end = matSize-1;
            for (int j = start; j <= end; j++){
                ret[n] = mat[j][i-j];
                n++;
            }
        }
    }
    return ret;
}