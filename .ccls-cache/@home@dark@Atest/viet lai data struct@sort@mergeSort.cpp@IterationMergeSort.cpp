#include <iostream>

int min(int x, int y) { return (x<y)? x :y; }
void merge(int a[], int l, int r){
    int m = l + (r - l) / 2;
    int h = m - l + 1;
    int k  = r - m;
    // tạo ra một vungg nhớ O(n)
    int *b = new int[h];
    int *c = new int[k];
    int i, j;
    for (i = 0; i < m - l + 1; i ++){
        b[i] = a[i + l];
    }
    for (i = 0; i < r - m; i ++){
        c[i] = a[i + m + 1];
    }
    i = 0; j = 0; int x = l;
    while (i < h && j < k){
        if (b[i] < c[j]){
            a[x] = b[i];
            ++x;
            ++i;
        }else{
            a[x] = c[j];
            ++x;
            ++j;
        }
    }
    while (i < h){
        a[x] = b[i];
        ++x;
        ++i;
    }
    while (j < k){
        a[x] = c[j];
        ++x;
        ++j;
    }
    delete []b;
    delete []c;
}
// void mergeSort(int a[], int l, int r){
//     if (l < r){
//         int m = (l + r) / 2;
//         mergeSort(a, l, m);
//         mergeSort(a, m + 1, r);
//         merge(a, l, r);
//     }
// }
void mergeSort(int arr[], int n)
{
   int curr_size;  // For current size of subarrays to be merged
                   // curr_size varies from 1 to n/2
   int left_start; // For picking starting index of left subarray
                   // to be merged
 
   // Merge subarrays in bottom up manner.  First merge subarrays of
   // size 1 to create sorted subarrays of size 2, then merge subarrays
   // of size 2 to create sorted subarrays of size 4, and so on.
   for (curr_size=1; curr_size<=n-1; curr_size = 2*curr_size)
   {
       // Pick starting point of different subarrays of current size
       for (left_start=0; left_start<n-1; left_start += 2*curr_size)
       {
           // Find ending point of left subarray. mid+1 is starting
           // point of right
        //    int mid = min(left_start + curr_size - 1, n-1);
 
           int right_end = min(left_start + 2*curr_size - 1, n-1);
 
           // Merge Subarrays arr[left_start...mid] & arr[mid+1...right_end]
           merge(arr, left_start, right_end);
       }
   }
}
int main(){
    int a[] = {4,2,5,2,6,3,6,4,3,2};
    int n = sizeof(a) / sizeof(a[0]);
    // mergeSort(a,0,n-1);
    mergeSort(a, n );
    for (int i = 0; i < n; ++i){
        std::cout << a[i] << "\t" ;
    }
}