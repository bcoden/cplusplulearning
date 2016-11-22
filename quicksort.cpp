#include <iostream>

using namespace std;

const int TOTAL_SIZE = 10;

void output(int *input) {
    for (int i=0; i < TOTAL_SIZE; i++ ) {
        cout << input[i] << " ";
        cout << endl;   
    }
} 

// moves current position into appropriate position
int partition(int* input, int left, int right) 
{
    int pivot = input[right];
    while(left < right) {
        while (input[left] < pivot) {
            left++;
        }

        while (input[right] > pivot) {
            right--;
        }

        if (input[left] == input[right]) {
            left++;
        } else if (left < right) {
            // swap left and right
            int tmp = input[left];
            input[left] = input[right];
            input[right] = tmp;
        }
    }

    return right;
}

void qs(int* input, int left, int right) 
{
    if (left < right) {
        int p = partition(input, left, right);
        qs(input, left, p-1);
        qs(input, p+1, right);
    }
} 

int main() 
{
    int input[TOTAL_SIZE] = {23,66,87,88,56,57,98,100,1,3};
    cout << "Input: ";
    output(input);

    // get start and end 
    qs(input, 0, 9);

    //output sorted list 
    cout << "Output: ";
    output(input);
    return 0;
}