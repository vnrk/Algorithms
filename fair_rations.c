///*
// * 		fair_rations.c
// * 		TODO
// * 		Created on: 11:40:46 AM Jun 3, 2016
// * 		Author: Venkata
// */
//
//#include <math.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <limits.h>
//#include <stdbool.h>
//
//int main(){
//    int N, odd;
//    scanf("%d",&N);
//    int *B = malloc(sizeof(int) * N);
//    int flag = 0, first_index, second_index;
//    int incr = 0;
//    int B_i;
//    for(B_i = 0; B_i < N; B_i++){
//       scanf("%d",&B[B_i]);
//       if(B[B_i] % 2 == 1){
//           odd++;
//           if(flag == 0) {
//               first_index = B_i;
//               flag = 1;
//           }
//           else {
//               second_index = B_i;
//               flag = 0;
//           }
//           if(odd != 0 && odd % 2 == 0 && flag == 0)
//               incr = incr + second_index - first_index;
//       }
//    }
//    if(odd % 2 == 1){
//        printf("NO");
//    }
//    else
//        printf("%d", incr*2);
//    return 0;
//}
//
//
//
