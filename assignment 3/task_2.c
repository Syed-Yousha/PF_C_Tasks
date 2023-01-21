#include<stdio.h>

int lenword(char message[500]){
	int i=0;
	while(message[i] != '\0')
		i++;
	return i;
}

int main()
{
    char message[1000];
    char message_words[100][100],new_message_words[100][100],spare_word[50];
    int i,j=0,words=0,word_len,len,x,has_y = 0;
    printf("Enter your message: ");
    gets(message);
    len = lenword(message);
    for (i = 0; i <= len; i++) {
        if (message[i] == ' ' || message[i] == '\0') {
            message_words[words][j] = '\0';
            words++;
            j = 0;
        }
        else {
            message_words[words][j] = message[i];
            j++;
        }
    }
    for(i=0;i<words;i++){
    	for(j=0;j<lenword(message_words[i]);j++){
    		if(message_words[i][j] >= 65 && message_words[i][j] <= 90)
    			message_words[i][j]+=32;
		}
    	if(message_words[i][0] == 's' && message_words[i][1] == 'c' && message_words[i][2] == 'h' || message_words[i][0] == 'S' && message_words[i][1] == 'c' && message_words[i][2] == 'h'){
    		word_len = lenword(message_words[i]);
    		message_words[i][0] = 's';
    		message_words[i][1] = 'k';
    		for(j=2;j<word_len;j++){
				message_words[i][j] = message_words[i][j+1];
			}
		}
    	if(message_words[i][0] != 'a' && message_words[i][0] != 'e' && message_words[i][0] != 'i' && message_words[i][0] != 'o' && message_words[i][0] != 'u'){
			word_len = lenword(message_words[i]);
			for(j=0;j<word_len;j++){
				new_message_words[i][j] = message_words[i][(j + word_len - 2)%word_len];
			}
			for(j=0;j<word_len;j++){
				if(message_words[i][0] == 'y')
					has_y = 0;
				else if(message_words[i][j] == 'y')
					has_y = 1;					
			}
			if(has_y){
				for(j=0;j<word_len;j++){
				if(message_words[i][j] == 'y' || message_words[i][j] == 'a' || message_words[i][j] == 'e' || message_words[i][j] == 'i' || message_words[i][j] == 'o' || message_words[i][j] == 'u'){
					for(j=0;j<word_len;j++){
						spare_word[j]= new_message_words[i][(j+word_len-1)%word_len];
					}
					break;	
				}
			}
			for(j=0;j<word_len;j++){
				new_message_words[i][j] = spare_word[j];
			}	
		}
			new_message_words[i][word_len] = 'a';
			new_message_words[i][word_len+1] = 'y';
		}
		else if(message_words[i][0] == 'a' || message_words[i][0] == 'e' || message_words[i][0] == 'i' || message_words[i][0] == 'o' || message_words[i][0] == 'u'){
			word_len = lenword(message_words[i]);
			for(j=0;j<word_len;j++){
				new_message_words[i][j] = message_words[i][j];
			}
			new_message_words[i][word_len] = 'w';
			new_message_words[i][word_len+1] = 'a';
			new_message_words[i][word_len+2] = 'y';
		}
	}
	new_message_words[0][0]-=32;
	printf("22K-6007 ");
	for(i=0;i<words;i++)
		printf("%s ",new_message_words[i]);
    return 0;
}