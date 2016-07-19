#include <stdio.h>
#include <cs50.h>

int main(void) {
    int height;
    int spaces;
    int hashes;
    
    int spaceNow;
    int hashNow;
    
    do {
        printf("How tall would you like Mario's tower?\n");
        height = GetInt();
    }
    while (height > 23 || height < 0);
    
    spaces = height - 1;
    hashes = 2;
    
    //do the printing
    while (height>0){
        
        hashNow = hashes;
        spaceNow = spaces;
        
        //print spaces
        while (spaceNow > 0) {
            printf(" ");
            spaceNow--;
        }
        
        //print hashes
        while (hashNow > 0) {
            printf("#");
            hashNow--;
        }
        
        printf("\n");
        height--;
        spaces--;
        hashes++;
    }
}