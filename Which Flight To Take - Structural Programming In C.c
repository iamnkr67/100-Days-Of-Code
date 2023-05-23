/*
Which flight to take
Mr. Gopal has to book a flight for his holiday. He prefers to fly cheap. However, if two flights have same price, he prefers one with shorter flight duration. 
If two flights have same price and flight duration, he prefers to fly during early hours in a day. Mr. Gopal needs your help. 
Given description of his flight options in format '{flight number} {departure time} {flight duration} {price}', he wants you to give him three options out of 
all in decreasing order of his preference.

------------------
Input : 
------------------

First line of input will contain a positive integer i.e. number of test cases. Each test case will contain multiple lines. 
First line will contain a positive integer N i.e. number of flights to choose. Next N lines will contain description of 
flights in format '{flight number} {departure time} {flight duration} {price}' . Departure time will be in format 'HH:mm' 
where HH is hour in 24 hour clock and mm is minutes. Flight duration will be in minutes.

-------------------
Output : 
-------------------

For each test case, print on a single line flight numbers of top three options for Mr. Gopal in decreasing order of his preference. 
The flight numbers should be separated by single space. There should be no space after last flight number on each line.  

------------------------------------------------------------------------------------------------------------------
for example : 
Input :  1 //test case
         6 //no. of flights to choose
         F1 07:35 135 300
         F2 08:30 165 350
         F3 05:36 195 270
         F4 18:20 155 350
         F5 11:35 205 300
         F6 15:35 215 270

Output : F3 F6 F1
-----------------------------------------------------------------------------------------------------------------
*/



//CODE THAT I HAVE IMPLEMENTED...

#include <stdio.h>
#include<stdlib.h>
struct fDetails {                                                                                   //structure 
  char num[10];
  char dep[10];
  int dur;
  int price;
};
          //swapping 
void swap(struct fDetails* f1, struct fDetails* f2) {
    struct fDetails temp = *f1;
    *f1 = *f2;
    *f2 = temp;
}

         //*DRIVER CODE*
int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int n;
    scanf("%d", &n);
    struct fDetails flight[n];
    for (int i = 0; i < n; i++) {
      scanf("%s", flight[i].num);
      scanf("%s", flight[i].dep);
      scanf("%d", &flight[i].dur);
      scanf("%d", &flight[i].price);
    }
              // Sorting
    int swapped = 0, i = 0;
    do {
      swapped = 0;
      for (int j = 0; j < n - 1 - i; j++) {
        if (flight[j].price > flight[j + 1].price) {
          swap(&flight[j], &flight[j + 1]);
          swapped = 1;
        }
        if (flight[j].dur > flight[j + 1].dur && flight[j].price == flight[j + 1].price) {
            swap(&flight[j], &flight[j + 1]);
          	swapped = 1;
        }
        char t[5], t2[5];
          t[0] = flight[j].dep[0];
          t[1] = flight[j].dep[1];
          t[2] = flight[j].dep[3];
          t[3] = flight[j].dep[4];
          t[4] = '\0';
          t2[0] = flight[j + 1].dep[0];
          t2[1] = flight[j + 1].dep[1];
          t2[2] = flight[j + 1].dep[3];
          t2[3] = flight[j + 1].dep[4];
          t2[4] = '\0';
          if (atoi(t) > atoi(t2) && flight[j].dur == flight[j + 1].dur) {                        //atoi() used to convert a string of characters representing an integer into an actual integer value. 
            swap(&flight[j], &flight[j + 1]);
          	swapped = 1;
          }
      }
      i++;
    } while(swapped);
    for (int i = 0; i < 3; i++) {
      printf("%s",flight[i].num);
      if (i < 2) printf(" ");
    }
    printf("\n");
  }
  return 0;
}
