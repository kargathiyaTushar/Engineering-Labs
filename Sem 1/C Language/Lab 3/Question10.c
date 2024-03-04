// Question 10: In digital world color are specified in RGB format, with values of R,G and B varying on
// integer scale from 0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black(CMYK) format with values
// of C,M,Y and K verying on a real scale from 0.0 to 1.0. Convert RGB color to CMYK as per formula:
//  White = Max(Red/255,Green/255,Blue/255)
//  Cyan = (White - Red/255)/White
//  Magenta = (White - Green/255)/White
//  Yellow = (White - Blue/255)/White
//  Black = 1 - White

#include <stdio.h>

void main(){
    int R,G,B,max;
    float C,M,Y,K,W;
    printf("Enter value of R:");
    scanf("%d",&R);
    printf("Enter value of G:");
    scanf("%d",&G);
    printf("Enter value of B:");
    scanf("%d",&B);
    if(R>G){
        if(R>B){
            max=R;
        }
        else{
            max=B;
        }
    }
    else{
        if(G>B){
            max=G;
        }
        else{
            max=B;
        }
    }
    W=max/255.0;
    C=(W-R/255.0)/W;
    M=(W-G/255.0)/W;
    Y=(W-B/255.0)/W;
    K=1-W;

    printf("The C-M-Y-K format is %f-%f-%f-%f\n",C,M,Y,K);
}