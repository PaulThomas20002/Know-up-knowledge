    #include<stdio.h> 
    #include<math.h> 
     
    int main() 
    { 
            float a; 
            printf("enter a digit\n"); 
            scanf("%f",&a); 
     
            int x = ceil(a); 
            if ( x == a) 
            { 
                    printf("it's an integer\n"); 
            } 
            else 
            { 
                    printf("it's a float\n"); 
            } 
            return 0; 
    } 
