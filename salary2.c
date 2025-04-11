#include <stdio.h>
int main() {
    int employeehours[10];
    int overtimepay[10];
    int overtimerate = 12;
    int i;
    //Input hour work for each employee
    for(i = 0; i<10 ; i++) {
        printf("Enter hours worked by employee%d: " , i+1);
        scanf("%d", &employeehours[i]);
    }
    //Calculating overtimepay for the employee
    for(i=0; i<10; i++) {
        if(employeehours[i] > 40) {
            overtimepay[i]= (employeehours[i] - 40) * overtimerate;
        }
        else {
            overtimepay[i] = 0;
            
        }
    }
    //Display overtimepay for each employee
    printf("\n Overtime pay for each employee: \n");
    for( i =0; i<10; i++) {
        printf("Employee %d:  Rs %d\n", i+1, overtimepay[i]);
    }
    return 0;
}