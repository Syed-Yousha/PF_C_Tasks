#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct hardware
{
    int record, qnty, cost;
    char name[20];
};


int main()
{
    struct hardware tool;
    int choice;
    printf("\nWelcome to the harware inventory, Please enter your choice,\n\n1.Create\n2.Read\n3.Update\n4.Delete\n\n=>  ");
    scanf("%d", &choice);

    FILE *fptr, *fptr2;

    switch (choice)
    {
    case 1:
        printf("\n******** Creating data ******** ");
    
        fptr = fopen("hardware.txt","a");

        printf("\nEnter the tool record: ");
        scanf(" %d", &tool.record);
        // fputs(tool.record, fptr);
        fprintf(fptr, "\n%d\t", tool.record);

        printf("\nEnter the tool name: ");
        scanf(" %[^\n]%*c", &tool.name);
        // fputs(tool.name, fptr);
        fprintf(fptr, "%s\t", tool.name);

        printf("\nEnter the tool quantity: ");
        scanf(" %d", &tool.qnty);
        // fputs(tool.qnty, fptr);
        fprintf(fptr, "%d\t", tool.qnty);

        printf("\nEnter the tool cost: ");
        scanf(" %d", &tool.cost);
        // fputs(tool.cost, fptr);
        fprintf(fptr, "%d\t", tool.cost);

        fclose(fptr);
        break;
    
    case 2: 
        printf("\n******** Reading data ******** ");

        fptr = fopen("hardware.txt", "r");

        char content[1000];
        if (fptr != NULL)
        {

            printf("\n");
            printf("\nRecord\ttool\tqntity\tcost\n");
            while (fgets(content, 1000, fptr))
            {
                printf("\n%s", content);
            }
            
        }
        else
        {
            printf("\nFile not found!!");
        }
        fclose(fptr);
        break;

    case 3: 
        printf("\n******** Updating data ******** ");

        fptr = fopen("hardware.txt","r+");
        fptr2 = fopen("copy.txt", "a+");       
        int record;

        printf("\nEnter the record you want to update: ");
        scanf("%d", &record);

        if (fptr != NULL)
        {
            // char content[1000];
            while (fread(&tool, sizeof(struct hardware), 1, fptr))
            // while(fgets(content, 1000, fptr))
            // while(fscanf(fptr, "%d %s %d %d", &tool.record, &tool.name, &tool.qnty, &tool.cost))
            {
                if (tool.record != record)
                {
                    fwrite(&tool, sizeof(struct hardware), 1, fptr2);
                    // printf("\n%s %s %s %s", tool.record, tool.name, tool.qnty, tool.cost);
                    // fprintf(fptr2, "%d %s %d %d", tool.record, tool.name, tool.qnty, tool.cost);
                }
                
            }


            struct hardware tool2;

            printf("\nEnter the new record: ");
            scanf(" %d", &tool2.record);

            printf("\nEnter the tool name: ");
            scanf(" %[^\n]%*c", &tool2.name);

            printf("\nEnter the tool quantity: ");
            scanf(" %d", &tool2.qnty);

            printf("\nEnter the tool cost: ");
            scanf(" %d", &tool2.cost);
            
            fprintf(fptr2, "\n");
            // fputs()
            fwrite(&tool2, sizeof(struct hardware), 1, fptr2);
            // fprintf(fptr2, "%d %s %d %d", tool2.record, tool2.name, tool2.qnty, tool2.cost);
        
            fclose(fptr);
            fclose(fptr2);
            remove("hardware.txt");
            rename("copy.txt", "hardware.txt");

            printf("\nRecord Updated Successfully!!");
            return 0;
        }
        else
        {
            printf("\nFile not found!!");
            exit(1);
        }
        
        break;
    
    case 4: 
        printf("\n******** Deleting data ******** ");
        break;

    default:
        printf("\nYou entered an invalid choice!!");
        break;
    }

}