// Code to implement the gcf function goes here
int gcf(int a, int b){
  if (b > a) {
    int c=a;
    a=b;
    b=c;
    }
    while (b != 0) {
      int remainder =a%b;
      a=b;
      b=remainder;
      }
      return a;
      }
