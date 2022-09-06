#include<stdio.h>
#include<stdlib.h>
struct Node{
	int prn;
	char name[100];
	struct Node* next;
};

struct Node* create_memory(){
	struct Node* temp = malloc(sizeof(struct Node));
	printf("Enter prn :");
	scanf("%d",&temp->prn);
	printf("Enter name :");
	scanf("%s",temp->name);
	temp->next = NULL;
	return temp;
}


void add_at_end(struct Node** head){
	if(*head == NULL){
		*head = create_memory();
	}else{
		//Traverse till next is NULL
		struct Node* temp= *head;
		while(temp->next != NULL){
			temp = temp->next;	
		}
		temp->next = create_memory();
	}
}

void add_at_start(struct Node** head){
	if(*head == NULL){
		*head = create_memory();
	}else{
		struct Node* temp = create_memory();
		temp->next = *head;
		*head = temp; 
	}
}

void add_at_pos(struct Node** head){
	if(*head == NULL){
		printf("No nodes\n");
		*head = create_memory();
	}else{
		int pos=0;
		printf("Enter position : \n");
		scanf("%d",&pos);
		int i = 1;
		struct Node* pt = *head;
		while( pt->next != NULL){
			if(i == pos){
				struct Node* temp = create_memory();
				temp->next = pt->next;
				pt->next = temp;
				break;
			}
			i++;
		}
		if(i > pos){
			printf("Position should be less than %d\n",i);
		}
	}

}


void display(struct Node** head){
	if(*head== NULL){
		printf("No nodes\n");
	}else{
		struct Node* temp= *head;
		while(temp->next != NULL){
			printf("PRN:%d | Name:%s--->",temp->prn,temp->name);
			temp = temp->next;	
		}
		printf("PRN:%d| Name:%s\n",temp->prn,temp->name);
	}
}



void delete_at_end(struct Node** head){
	if(*head == NULL){
		printf("No nodes\n");
	}else{
		struct Node* temp = *head;
		struct Node* pt;
		while(temp->next !=NULL){
			pt = temp;
			temp = temp->next;	
		}
		pt->next = NULL;
		free(temp);
	}
}


void delete_at_start(struct Node** head){
	struct Node* temp = *head;
	*head = (*head)->next;
	free(temp);
}

int main(){
	struct Node* head = NULL;
	add_at_end(&head);
	add_at_start(&head);
	add_at_start(&head);
	add_at_pos(&head);
	display(&head);
	return 0;
}
