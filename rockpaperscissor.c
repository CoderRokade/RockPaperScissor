// Rock paper scissor
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int check(char computer, char user){
    // Here we wil check who is winner of battle

    if(computer==user){
        return -1;
    } 
    else if (computer == 'r'&& user == 'p'){
        return 1;
    }
    else if (computer == 'r' && user == 's'){
        return 0;
    }
    else if (computer == 'p' && user == 's')
    {
        return 1;
    }
    else if (computer == 'p' && user == 'r')
    {
        return 0;
    }
    else if (computer == 's' && user == 'r')
    {
        return 1;
    }
    else if (computer == 's' && user == 'p')
    {
        return 0;
    }
    else{
        return 2;
    }
}

void main(){
    
    
//In this game of rock ,paper and scissor we had 2 player one is user
// and other one is computer
char user,computer;

// Both the players had 3 options they can take any one of 
// rock or paper or secissor

// char rock="r",paper="p",sissor="s";
char rock  = 'r';
char paper = 'p';
char sissor= 's';

// Now we take input from user

printf("Enter a option from 's','p','r'\n");
scanf("%c",&user);

// To take input from computer we use rand and srand function here
// We take time function here so that we are able to genrate a truly 
// random value in each run of code . As we know time is being constantly 
// chanding so seed value of srand will also change
srand(time(NULL));

int value = rand()%10;

// here lower bound is 0 and upperbound is 9 
// so here i set range of value that i get from rand function
// if value will lie in between 0 to 3 i set option r for computer,
// if value lie in 3 to 6 i set option p , and for range 6 to 9 i set
// option s 

if(value>0&&value<=3){
    computer = 'r';
}
else if (value>3 && value <=6)
{
    computer = 'p';
    /* code */
}
else{
    computer = 's';
}

int result = check(computer,user);

if(result==1){
    printf("User is winner \n");
}
else if(result==0){
    printf("Computer is winner \n");
}
else if (result == -1)
{
    printf("Match is tied between both of you \n");
}
else{
    printf("User input unnecery input \n");
}

printf("Options choose by user is %c\n ", user);
printf("Options choose by com[puter is %c\n ", computer);



}