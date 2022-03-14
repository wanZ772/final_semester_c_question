// coded by wanz

#include <stdio.h>
#include <string.h>

int main()
{
    int person, rice, price;
    char conti[1] = "Y";
    
    printf("Welcome to zakat calculator\n\n");
    
    while ((strcmp(conti, "Y") == 0) || strcmp(conti, "y") == 0) {
        printf("Number of person: ");
        scanf("%d", &person);
        printf("\n\nType of rice: ");
        scanf("%d", &rice);
        while (rice != 1 && rice != 2 && rice != 3) {
            printf("\nInvalid! Please enter correct type for rice: ");
            scanf("%d", &rice);
        }
        
        switch (rice)   {
            case 1:
                price = 7 * person;
                break;
            case 2:
                price = 14 * person;
                break;
            case 3:
                price = 21 * person;
                break;
        }
        
      printf("\n\nTotal amount of Zakat Fitrah to be paid (RM): %d.00\n", price);  
      
      
      printf("Do you want to continue? (Y/y) ");
      scanf("%s", conti);
      if ((strcmp(conti, "Y") != 0) && strcmp(conti, "y") != 0)   {
          break;
      }
    }
    
    
    return 0;
}
