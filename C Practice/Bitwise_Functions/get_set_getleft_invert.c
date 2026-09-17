// Getting the left bits instead of right bits
#include <stdio.h>
unsigned getbits(unsigned x, int p, int n) { 
    return (x >> (p+1-n)) & ~(~0 << n); 
} 
/*Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at 
position p set to the rightmost n bits of y, leaving the other bits unchanged.*/
unsigned setRightBits(unsigned x, int p, int n, unsigned int y){
    return(x | (y << (p-n+1)));
}
/*Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at 
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.  */
unsigned invert(unsigned x, int p, int n){
    // Getting the n bits from position p from x
    unsigned int y =  getbits(x,p,n);
    // One's Compliment of the returned bits 
    y = ~y;
    //getbits the specific bits for inverted
    y = getbits(y,n-1,n);
    // SetRightBits to invert the specific bits choosen
    return setRightBits(x,p,n,y);
    
}
unsigned getLeftBits(unsigned x, int p, int n) { 
    return (x >> (p)) & ~(~0 << n); 
} 

int main(){
    
       short int x = 225;
      // int y = getbits(x,7,3);
       //int y = getLeftBits(x,4,3);
       //int y = setRightBits(x,4,4,15);
       unsigned int y = invert(x, 4, 4);
       printf("%d", y);   

       // 
}