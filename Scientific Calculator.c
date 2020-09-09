#include<stdio.h>
#include<math.h>

float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
float sine(float, float);
float cosine(float, float);
float tangent(float, float);
float cotangent(float, float);
float secant(float, float);
float cosecant(float, float);

int main()
{
    char more;
    float ans,a,b;
    printf("Scientific Calculator\n");
    
    do{
    int first, second;
    printf("\nSelect a operation\n");
    printf("1. Basic Arithmetic\n2. Trigonometric Functions\n3. Logarithmic and Exponential\n4. Square(root) and Cube(root)\n5. Absolute and Round off\n");
    scanf("%d", &first);
    
    switch(first)
    {
        case 1 : printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        scanf("%d", &second);
        printf("Enter two values : ");
        scanf("%f %f", &a, &b);
        if(second==1)
        ans=add(a,b);
        else if(second==2)
        ans=sub(a,b);
        else if(second==3)
        ans=mul(a,b);
        else if(second==4)
        ans=div(a,b);
        else
        printf("\nInvalid option");
        printf("\nAnswer = %.2f", ans);
        break;
        
        case 2 : printf("1. Sine\n2. Cosine\n3. Tangent\n4. Cotangent\n5. Secant\n6. Cosecent\n");
        scanf("%d", &second);
        printf("Enter value : ");
        scanf("%f", &a);
        if(second==1)
        ans=sine(a);
        printf("\nAnswer = %.2f", ans);
        break;
        
        case 3 : printf("1. Natural Log\n2. Log base 10\n3. Exponent\n");
        scanf("%d", &second);
        printf("Enter value : ");
        scanf("%f", &a);
        switch(second)
        {
            
        }
        printf("\nAnswer = %.2f", ans);
        break;
        
        case 4 : printf("1. Square\n2. Cube\n3. Square Root\n4. Cube Root\n");
        scanf("%d", &second);
        printf("Enter value : ");
        scanf("%f", &a);
        switch(second)
        {
            
        }
        printf("\nAnswer = %.2f", ans);
        break;
        
        case 5 : printf("1. Absolute Value\n2. Round off Value\n");
        scanf("%d", &second);
        printf("Enter value : ");
        scanf("%f", &a);
        switch(second)
        {
            
        }
        printf("\nAnswer = %.2f", ans);
        break;
        
        default : printf("Please enter a valid option\n");
    }
    printf("\nPress Y to calculate more : ");
    more=getchar();
    }while(more=='y' || more=='Y');
    return (0);
}

float add(float a, float b)
{
    return (a+b);
}
float sub(float a, float b)
{
    return (a-b);
}
float mul(float a, float b)
{
    return (a*b);
}
float div(float a, float b)
{
    return (a/b);
}
