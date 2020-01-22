#### "Character process" source code

    #include <stdio.h>

    #define MAX_LENGTH 100

    int main()
    {
      // variable
      char  temp[MAX_LENGTH];
      char *str;
      int   c,length=0;
    
      str=&temp[0];
    
      // title
      printf("字元轉換程式\n請輸入英文字串，本程式將自動轉換成大寫：");
    
      // process
      scanf("%s", str);
    
      for(c=0;c<MAX_LENGTH;c++){
        if(temp[c]=='\0'){
          break;
        }
      }
    
      for(int i=0;i<c;i++){
        if(97<=temp[i] && temp[i]<=122){
          temp[i]=temp[i]-32;
        }
      }
    
      // output
      printf("%s\n", str);
      return(0);
    }


# Question

![](http://www.asciitable.com/index/asciifull.gif)

> ASCII table

This program changes lower case character to upper case in English.
Of course, it check every character which is lower case or not then change it to upper case word.

Question #1:
Add another function to change upper case to lower case.

Question #2:
According to the ASCII table, characters subtract 32 will become to upper case. But if we want to change to unknow string and it can be decrypt to original string, so it is a encrypt/decrypt program.

### End
