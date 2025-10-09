void heapify(int arr[] , int n , int i){
int largest = i;
l = 2*1+1;
r = 2*i+2;
if(l<n&&arr[largest]>arr[l]){
largest = r;
}
if(r<n&&arr[largest]>arr[i]){
largest = l;
}
if(largest!=i){
swap(arr[i],arr[largest]);
heapify(arr[],n,largest);
}



void delete(int arr[] , int n){
arr[0] = arr[n-1];
n = n-1;

heapify(arr[] , n , 0);
