/*
*CodeBlocks
*
*Author: Rebrin M.M.
*
*On 20th of Feubruary 2021
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include <unistd.h>

int Bin(int num) {
    int bin = 0, k = 1;

    while (num) {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return printf("This is your number in bin:%d\n", bin);
}

int main() {
    int Task = 0;
    while (1){
    printf("Choose the task(1-4):");
    scanf("%d", &Task);
           switch (Task){
            case 1:{
            int num;
            printf("Write down your integer number:");
            scanf("%d", &num);
            Bin(num);
            printf("Press enter to continue");
            getch();
            system("cls");
            break;
            }
            case 2: {
                struct fractangle {
                    int length;
                    int width;
                    int perimeter;
                    int square;
                };
                typedef struct fractangle Fract;

                int Perimeter (Fract a1, Fract a2, Fract a3, Fract a4){
                    a3.perimeter = (a1.length + a2.width)*2;
                    a4.square = a1.length * a2.width;
                    printf("The perimeter of the Fract is:%d\n", a3.perimeter);
                    printf("The square of the Fract is:%d\n", a4.square);
                    return;
                }

                Fract a1, a2, a3, a4;
                a1.length = 0;
                a2.width = 0;
                a3.perimeter = 0;
                a4.square = 0;
                printf("Please enter length of the fract:");
                scanf("%d", &a1.length);
                printf("Please enter width of the fract:");
                scanf("%d", &a2.width);
                Perimeter(a1, a2, a3, a4);
                printf("Press enter to continue");
                getch();
                system("cls");
                break;
            }
            case 3: {
                struct line{
                    float len;
                        struct FP{
                            float Xa;
                            float Ya;
                        };
                        struct SP{
                            float Xb;
                            float Yb;
                        };
                };
                typedef struct line Line;
                typedef struct FP fp;
                typedef struct SP sp;

                float LengthOfTheLine (fp x1, fp y1, sp x2, sp y2, Line l){
                    l.len = sqrt(((x2.Xb - x1.Xa)*(x2.Xb - x1.Xa))+((y2.Yb-y1.Ya)*(y2.Yb-y1.Ya)));
                    return printf("The length of the line is:%f\n", l.len);
                }

                Line l;
                fp x1, y1;
                sp x2, y2;
                l.len = 0;
                x1.Xa = 0;
                y1.Ya = 0;
                x2.Xb = 0;
                y2.Yb = 0;
                printf("Please enter first point:");
                scanf("%1f %1f", &x1.Xa, &y1.Ya);
                printf("Please enter second point:");
                scanf("%1f %1f", &x2.Xb, &y2.Yb);
                LengthOfTheLine(x1, y1, x2, y2, l);
                printf("Press enter to continue");
                getch();
                system("cls");
                break;
            }
            default: {
            printf("Please, write down correct option\n");
            continue;
            }
            case 4: {
                int *a;
                int i, j;
                int n = 2;
                int m = 2;
                a = (int*)malloc(n*m*sizeof(int));
                for (i = 0; i<n; i++) {
                    for (j = 0; j<m; j++) {
                        printf("a[%d][%d] = ", i, j);
                        scanf("%d", (a + i*m + j));
                    }
                }
                for (i = 0; i<n; i++) {
                    for (j = 0; j<m; j++) {
                        printf("%5d ", *(a + i*m + j));
                    }
                    printf("\n");
                }
                free(a);
                printf("Press enter to continue");
                getch();
                system("cls");
                break;
            }
        }

    }
return 0;
}
