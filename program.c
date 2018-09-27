#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
char word[50];
int length;
struct node* next;
}Node;

int main(int argc,char **argv){
int size=0;
int Wlen;
//char *ch;
int max=0;//i=0;
FILE *f;
char str[50];
f=fopen(argv[1],"r");
Node head;
	Node* iterator = &head;
Node* pnode=&head;
while(fscanf(f,"%s",str)!=EOF){
int i=0;
//...
while(str[i]!='\0'){
if((str[i]=='.')||(str[i]=='?')||(str[i]=='[')||(str[i]==']')||(str[i]=='{')||(str[i]=='}')||(str[i]=='/')||(str[i]==';')||(str[i]==':')||(str[i]=='!')){
Wlen=strlen(str)-1;
str[i]='\0';
                       }
else{
Wlen=strlen(str);

}
i++;
}





//...
	//printf("%s",str);
strcpy(iterator->word,str);
//printf("%s\n",iterator->word);

iterator->length=Wlen;
//printf("%d\n",iterator->length);
Node* newNodep=(Node*)malloc(sizeof(Node));
iterator->next = newNodep;
		//size=iterator->length;
if(max<(strlen(str))){
        max=strlen(str);
                     }
iterator = newNodep;	
                             }
fclose(f);
//printf("%d",max);


while(max!=0){//printf("%d\n",max);
pnode=&head;

while(pnode->next!= NULL){
	      //printf("%s\n", pnode->word);     
if(max==(pnode->length)){

	printf("%s\n", pnode->word);
                        }

pnode=pnode->next;
                              }
max--;
  }

}
