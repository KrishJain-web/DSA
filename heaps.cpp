
void heapify(int arr[] , int i , int N){
   int right =  2*i + 1;
   int left = 2*i + 2;
   int largest = i;
   if(l<N && arr[l] > arr[largest]) largest = l;
   if(r<N && arr[r] > arr[largest])  largest = r;
   if(largest != i){
   swap(&arr[i] ,&arr[largest]);
   heapify(arr[] , largest , N);
}


void build_heap(int arr[] , int N){
    int n = (N-2)/2;
    for(int i = n ; i >= 0 ; i++){
      maxHeapify(arr[] , i , N);
}
}

    






int main(){
}
