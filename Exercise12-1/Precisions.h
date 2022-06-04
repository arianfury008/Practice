//
// Created by aryan on 6/3/2022.
//

#ifndef EXERCISE12_1_PRECISIONS_H
#define EXERCISE12_1_PRECISIONS_H




#define LimitNum 20

typedef struct {
    int digits[LimitNum];
    int decpt;
    char sign
} high_precision_t;


extern void multiply_high(high_precision_t,high_precision_t);
extern void subtract_high(high_precision_t,high_precision_t);
extern void add_high(high_precision_t,high_precision_t);
extern void print_high(high_precision_t);
extern int scan_high(high_precision_t);




#endif //EXERCISE12_1_PRECISIONS_H
