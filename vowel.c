//check wheather vowel or not//
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;

    printf("Enter a character:- \t");
    scanf("%c", &ch);

if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
{
    printf("Character is vowel ");

}
else{
    printf("Character is not Vowel");
}

    return 0;
}
