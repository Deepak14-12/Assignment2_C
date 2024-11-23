//string declaration and basic understandings of string
#include<stdio.h>
#include<string.h>

int main(){

char n[10] = {'H','E','L','L','O','G','\0'};
char t[] = "HELLO";
int i = 0,j = 0;
printf("\n n length = %d",strlen(n));

printf("\n string is: ");

while (n[i] != '\0' || t[i] != '\0')
{
    printf(" %c ",n[i]);
    
    i++;
}
j = strlen(t); i =0;
printf("\n second string and its length and : %d\n",j);
while (i != j )
{
    printf(" %c ",t[i]);
   
   i++;
} 
 //   printf(" %c ",t[i]);

}