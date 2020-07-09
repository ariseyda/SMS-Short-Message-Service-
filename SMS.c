#include<stdio.h>
#include<string.h>

//Today, when writing SMS (Short Message Service) messages, 
//the messages are shortened by removing the vowels in the words due to the 160 character limit and the effort to write fast. 
//If the first letter of the word is a vowel, it remains. 
//Write the function called makeShortSMS, which turns a sentence entered into the keyboard into a shortened SMS message, 
//together with a main function where the original of the message is entered from the keyboard and the abbreviated version is printed on the screen. 
//The function copies the shortened version of the original message received in the first parameter to the second parameter.
//If the letter after the space is a vowel, print that letter as well.
   
void makeShortSMS(char *SMS,char *shortsms){
	
	
	int i,a=1,count=0;
	shortsms[0]=SMS[0];
	for(i=1;SMS[i]!='\0';i++){
		if(SMS[i]==' '){
			shortsms[a]=SMS[i];
			a++;
			shortsms[a]=SMS[i+1];
			a++;
			i+=2;
		}
		if(SMS[i]!='a'&&SMS[i]!='e'&&SMS[i]!='i'&&SMS[i]!='o'&&SMS[i]!='u'&&SMS[i]!='A'&&SMS[i]!='E'&&SMS[i]!='I'&&SMS[i]!='O'&&SMS[i]!='U'){
			shortsms[a]=SMS[i];
			a++;
		}
	}
	

	printf("SMS:%s",SMS);
	printf("\nShort SMS:%s",shortsms);
}
int main(){
	
	char sms[160]="";
	printf("Enter sms:");
	gets(sms);
	char _short[160]="";
	
	makeShortSMS(&sms,&_short);

	return 0;
}


