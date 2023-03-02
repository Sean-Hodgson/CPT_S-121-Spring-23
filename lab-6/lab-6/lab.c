#include "lab.h"



void prime(int sum) {
        int i = 0, result = 0;

        for (i = 2; i <= sum / 2; ++i) {
            if (sum % i == 0) {
                result = 0; 
            }
            else {
                result = 1;
            }

        }
        if (result == 1) {
            printf("%d is prime\n", sum);
        }
        else {
            printf("%d is not prime\n", sum);
        }
    }

    int read(FILE * infile) {
        int num = 0, sum = 0;
        while (!feof(infile)) {
            fscanf(infile, "%d", &num);
            sum += num;
        }
        return sum;
    }

    void prime_ind(int N) {
        int num = 0, sum = 0, digit = 0;
        while (N > 0) {
            digit = N % 10;
            prime(digit);
            N = N / 10;
        }
        return;
    }

    void fibbonacci(int n) {
        if (n < 0) {
            return;
        }

        int t1 = 0, t2 = 1, i = 0;

        int nextTerm = t1 + t2;

        printf("Fibonacci Sequence: %d, %d, ", t1, t2);

        // 3 - nth
        for (i = 3; i <= n; ++i) {
            printf("%d, ", nextTerm);
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
    }
    void randomnum(void) {

    }
   

