#include <stdio.h>

int main() {
    int choice = 0;
    printf("1. Alphabet Skipper\n");
    printf("2. Digit Counter\n");
    printf("3. Digit Addition\n");
    printf("4. Exit\n");
    printf("Enter your choice :- ");
    
    scanf("%d",&choice);
    
while (choice != 4){
    switch (choice) {
        
        case 1:
            char a = 'a';
            do{
                printf("%c\t",a);
                a+=4;
        
            }while(a <= 'z');
            
            printf("\n\n");
            
            break;
            
        case 2:
            int dig = 0;
            int num;
    
            printf("Enter a number :- ");
            scanf("%d",&num);
    
            while (num != 0){
                num = num / 10;
                dig++;
            }
    
            printf("No. of Digits in the Given Number :- %d\n\n",dig);
            
            break;
            
        case 3:
            
            int x,y,sum;
    
            printf("Enter a number :- ");
            scanf("%d",&x);
            
            y = x % 10;
            
            while (x >= 10){
                x = x / 10;
            }
            
            sum = x + y;
            
            printf("Sum of First and Last Digits in the Given Number :- %d\n\n",sum);
            
            break;
            
        default:
            printf("Invalid Choice !!! \n\n");
            break;
            
    }
    printf("1. Alphabet Skipper\n");
    printf("2. Digit Counter\n");
    printf("3. Digit Addition\n");
    printf("4. Exit\n");
    printf("Enter your choice :- ");
    
    scanf("%d",&choice);
}

    return 0;
}