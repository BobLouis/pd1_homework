#include<stdio.h>
#include<string.h>

char* reference(char author[], char title[], char conference[], char location[], char date[], char ppdoi[]);

int main(){
    char author[100], title[150], conference[150], location[30], date[5], ppdoi[60];
    scanf("%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]", author, title, conference, location, date, ppdoi);
    printf("%s", reference(author, title, conference, location, date, ppdoi));
    return 0;
}

// Your code goes here
char* reference(char author[], char title[], char conference[], char location[], char date[], char ppdoi[]){
    static char result[300];
    memset(result,'\0',300);
//    char context[]={author,title,conference,location,date,ppdoi};
    char mark[][10]={", \"",",\" ",", ",", ",", ","."};
    strcat(result,author);
    strcat(result,mark[0]);
    strcat(result,title);
    strcat(result,mark[1]);
    strcat(result,conference);
    strcat(result,mark[2]);
    strcat(result,location);
    strcat(result,mark[3]);
    strcat(result,date);
    strcat(result,mark[4]);
    strcat(result,ppdoi);
    strcat(result,mark[5]);
    return result;
}

//Y. Azar et al.
//28 GHz propagation measurements for outdoor cellular communications using steerable beam antennas in New York city
//2013 IEEE International Conference on Communications (ICC)
//Budapest
//2013
//pp. 5143-5147, doi: 10.1109/ICC.2013.665
//, "
//(," )
//,
//Y. Azar et al., "28 GHz propagation measurements for outdoor cellular communications using steerable beam antennas in New York city," 2013 IEEE International Conference on Communications (ICC), Budapest, 2013, pp. 5143-5147, doi: 10.1109/ICC.2013.6655399.

