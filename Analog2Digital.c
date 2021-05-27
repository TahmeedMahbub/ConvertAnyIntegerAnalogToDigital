#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void callNumber(int temp, int len)
{
    char arr0[3][10] = {" __  ","|  | ","|__| "};
    char arr1[3][10] = {"  ","| ","| "};
    char arr2[3][10] = {" __  "," __| ","|__  "};
    char arr3[3][10] = {"__  ","__| ","__| "};
    char arr4[3][10] = {"     ","|__| ","   | "};
    char arr5[3][10] = {" __  ","|__  "," __| "};
    char arr6[3][10] = {" __  ","|__  ","|__| "};
    char arr7[3][10] = {"__  ","  | ","  | "};
    char arr8[3][10] = {" __  ","|__| ","|__| "};
    char arr9[3][10] = {" __  ","|__| "," __| "};
    switch (temp)
    {
        case '0':
            printf("%s",arr0+(3-len));
            break;
        case '1':
            printf("%s",arr1+(3-len));
            break;
        case '2':
            printf("%s",arr2+(3-len));
            break;
        case '3':
            printf("%s",arr3+(3-len));
            break;
        case '4':
            printf("%s",arr4+(3-len));
            break;
        case '5':
            printf("%s",arr5+(3-len));
            break;
        case '6':
            printf("%s",arr6+(3-len));
            break;
        case '7':
            printf("%s",arr7+(3-len));
            break;
        case '8':
            printf("%s",arr8+(3-len));
            break;
        case '9':
            printf("%s",arr9+(3-len));
            break;
        default:
            printf("Error! operator is not correct");
            break;


    }


}

void extractDigits(int num)
{
    int x=0, i,len, lenTemp=3, flag=0;    //char pointer declaration
    char temp[20];
    if(num<0)
    {
        flag=1;
        num=num*-1;
    }   //assig number as string in char pointer
    sprintf((char*)temp,"%u",num);    //extract and print each digits

    len= strlen(temp);
    while(lenTemp!=0)
    {
        if(flag==1&& lenTemp!=2)
        {
            printf("    ");
        }
        if(flag==1 && lenTemp==2)
        {
            printf(" __ ");
        }
        for(i=0; i<len; i++)
        {
            callNumber(temp[i], lenTemp);
            //printf("%c\n",temp[i]);

        }
        lenTemp--;
        printf("\n");
    }



    printf("\n");
}
int main()
{
    int number;
    scanf("%d", &number);
    extractDigits(number);
    return 0;

}