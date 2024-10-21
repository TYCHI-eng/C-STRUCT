// C Structures
#include<stdio.h>
#include<string.h>

struct Book{
 char Title[30];
 char Author[30];
 int PublicationYear;
 char ISBN[13];
 float Price;
   
}Book;

int main(){
printf("Enter Title:");
scanf("%s\n",&Book.Title);
printf("Title :%s\n",Book.Title);

printf("Enter Author:");
scanf("%s\n",&Book.Author);
printf("Author:%s\n",Book.Author);

printf("Enter Publication Year:");
scanf("%d\n",&Book.PublicationYear);
printf("PublicationYear:%d\n",Book.PublicationYear);

printf("Enter ISBN:");
scanf("%s\n",&Book.ISBN);
printf("ISBN: %s\n",Book.ISBN);

printf("Enter Price:");
scanf("%f\n",&Book.Price);
printf("Price:%.2f\n",Book.Price);
/*
 
 strcpy(Book.Title,"Introduction to C Program");
 strcpy(Book.Author,"John Smith");
 Book.PublicationYear=2022;
 strcpy(Book.ISBN,"9780131103627");
 Book.Price =49.99;
 */
 
 
 return 0;
 }