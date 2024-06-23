#include <conio.h>
#include <stdbool.h>

#define SIZE  100
int list[SIZE];
int start = -1, end = -1;

bool push(value){
  if(end == SIZE - 1){
    return false; 
  }else{
    if(start == -1){
      start ++; 
    }
    end ++;
    list[end] = value;
    return true;
  }
}

int pop(){
  if(start == end){
    return NULL;
  }else{
    start ++;
    return list[start - 1];
  }
}

char* predictPartyVictory(char* s){
  int i = 0;
  for (char character = *s; character != '\0'; character = *++s){
    character// Do something with character.
  }

}