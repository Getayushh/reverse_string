#include<stdio.h>
#include<string.h>

int main(){
  char str[100];
  printf("Enter a string: ");
    scanf("%s", str);
    int len=strlen(str);
    // for(int i=len-1;i>=0;i--){
    //   printf("%c",str[i]);
    // }
    int i=0;
    int j=len-1;
    int temp;
    while(i<=j){
      temp=str[j];
      str[j]=str[i];
      str[i]=temp;
      i++;
      j--;
    }
    printf("reversed string: ");
    printf("%s",str);
    return 0;
}