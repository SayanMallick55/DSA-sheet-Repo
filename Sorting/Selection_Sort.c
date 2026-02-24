// Selection Sort : Select element and compared 

void SelectionSort(int a[],int size){
    for(int i = 0;i<size-1;i++){
        int min = i;
        for(int j = i+1;j<size;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        if(min!=i){
            int temp = a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}