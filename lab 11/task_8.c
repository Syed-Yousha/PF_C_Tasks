#include <stdio.h>
#include <string.h>

struct book
{
    int access_num, flag;
    char title[20], author[20];

};

int main()
{
    int z=1, total;

    printf("\nEnter the total number of books in library: ");
    scanf(" %d", &total);

    int same_books[total], i=0, sum=0, j;
    struct book info[total];

    while (z == 1 && sum<total)
    {
        printf("\nEnter the book title: ");
        scanf("%s", &info[i].title);

        printf("\nEnter the author name of book: ");
        scanf("%s", &info[i].author);

        printf("\nEnter the accession number of book: ");
        scanf("%s", &info[i].access_num);

        printf("\nHow many books you want to add: ");
        scanf(" %d", &same_books[i]);

        // for ( j = 0; j < same_books[i]; j++)
        // {    
        //     printf("\nEnter the accession number of book #1: ", i+1);
        //     scanf("%s", &info[j].access_num);
        // }
        

        info[i].flag = 1;
        sum += same_books[i];
        i++;

        printf("\nEnter '1' if you want to add another book: ");
        scanf(" %d", &z);

        if (z == 1)
        {
            continue;
        }
        else
        {
            break;
        }
        
    }
    
    //Taking choice

    int choice = 1;

    while ( (choice <= 6) && (choice > 0) ) 
    {

        char user_title[20], user_author[20];

        printf("\n\nEnter, \n(1) Display book information \n(2) Add a new book \n(3) Display all the book in the library of a particular author \n(5) Display the total number of books \n(6) Issue a book \n\n Enter your choice here (value other than 1-6 will break the program): ");
        scanf(" %d", &choice);
    
        switch (choice)
        {
        case 1:
            printf("\nEnter the book title: ");
            scanf(" %s", &user_title);
            
            for ( i = 0; i < total; i++)
            {
                if ( strcmp(info[i].title, user_title)==0 )
                {
                    printf("\nBook author name: %s", info[i].author);
                    printf("\nbook accession num: %d", info[i].access_num);
                    printf("\nnumber of books available are: %d", same_books[i]);
                }
                
            }
            break;
        
        case 2:
            total++;
            printf("\nEnter the book title: ");
            scanf(" %s", &info[total].title);

            printf("\nEnter the author name of book: ");
            scanf(" %s", &info[total].author);

            printf("\nEnter the accession number of book: ");
            scanf(" %d", &info[total].access_num);
            break;    

        case 3: 
            printf("\nEnter the author name: ");
            scanf(" %s", &user_author);

            for ( i = 0; i < total; i++)
            {
            
                if (strcmp(info[i].author, user_author) == 0)
                {
                    printf("\n %s write : %s", user_author, info[i].title);
                }
            }
            break;

        case 4:
            printf("\nEnter the title: ");
            scanf(" %s", user_title);

            for ( i = 0; i < total; i++)
            {
                if (strcmp(info[i].title, user_title) == 0)
                {
                    printf("\nBooks titled as %s are: %d", user_title, same_books[i]);
                }
                
            }
            break;

        case 5:
            printf("\nTotal number of books in library are: %d", total);
            break;

        case 6:
            printf("\nEnter the title of book you want to issue: ");
            scanf(" %s", &user_title);

            for ( i = 0; i < total; i++)
            {
                if ( (strcmp(info[i].title, user_title)==0) && (info[i].flag == 1))
                {
                    same_books[i]--;
                    if (same_books[i] == 0)
                    {
                        info[i].flag = 0;
                    }
                    
                }
            }

            break;

        default:
            printf("\nYou entered an invalid value!!");
            break;
        }
    }
}