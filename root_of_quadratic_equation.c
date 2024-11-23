//program program calculate and prints the complex roots of the quadratic equation
#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    float dt,r1,r2,rp,imp;
    printf("enter coefficient: ");
    scanf("%f%f%f",&a,&b,&c);
//calculating  determinant
    dt = b*b-4*a*c;
    printf("%f ",dt);

//checking for roots
    if(dt < 0){
        rp = -b/(2*a);

        imp = sqrt(-dt)/(2*a);
        //displaying roots
        printf("roots are complex and distinct:\n");
        printf("root1 =%.2f + %.2fi  \n",rp,imp);
        printf("root2 =%.2f - %.2fi  \n",rp,imp);
        
    }
    return 0;
}
