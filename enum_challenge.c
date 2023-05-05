#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company Google = GOOGLE;
    enum company Xerox = XEROX;
    enum company Ebay = EBAY;

    printf("%d\n", Xerox);
    printf("%d\n", Google);
    printf("%d", Ebay);

    return 0;
}
