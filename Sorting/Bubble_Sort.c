// Bubble Sort : Every elemnet comparision with its next 

void BubbleSort(int A[], int size){
    for(int i =0;i<size-1;i++){
        int flag = 0;
        for(int j = 0;j<size-1-i;j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1]=temp;
                flag = 1;
            }
        }
        if(flag==0){
            break;;
        }
    }
}