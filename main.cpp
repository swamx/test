//Edited on github.com
#include <iostream>

using namespace std;

//Sort function
// n --> No of elements in array, ptr --> Array of data
void sort(int n, int* ptr) {
     int tmp;
     for(int i =0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if( *(ptr +j) < *(ptr+i)) {
                // tmp = ptr[i]
                tmp = *(ptr + i);
                // ptr[i] = ptr[j]
                *(ptr + i) = *(ptr + j);
                // ptr[j] = tmp
                *(ptr + j) = tmp;

            }
        }
     }
}

int main()
{
    int a[] = {1,4,3,2,7};
    int n = 5;

    sort(n, a);

    cout << "Sorted Array:" << endl;
    for (int i=0; i<n; i++){
        cout << a[i] << "\t";
    }
    return 0;
}
