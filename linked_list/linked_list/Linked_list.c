#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct node* listpointer;
typedef struct node {
	char word[4];
	listpointer link;
}node;

node* buildnode(char baguni[]) { //������ ���� �ٲٴ� �ڵ�
	node* record = malloc(sizeof(*record));
	char word[5];
	strcpy(word, strtok(baguni, "\t\n "));
	
	strcpy(record->word, word);
	record->link = NULL;

	return record;
}

void insert(listpointer* first,node* record,node* before) { //record = ����, before = �� ����
	if (*first) {
		if (before) {
			
			record->link = before->link;
			before->link = record;

		}
		else { //before�� ������ ���ο� first�� �Ǵ� ���
			record->link = *first;
			*first = record;
		}
	}
	else {
		record->link = NULL;
		*first = record;
	}

}

listpointer Search(char* key, listpointer first) {		//key�� ã������ ��
	
	while (first) {
		if (!strcmp(first->word, key)) {
			return first;
		}
		else {
			first = first->link;
		}
	}
	return NULL; // ã������ ���� ���� ���
}

listpointer Search_before(listpointer first, char key[]){
	if (!first) {		//linked list�� �ƹ��͵� ���� ���
		return NULL;
	}
	listpointer curr = first;
	listpointer before = NULL;
	while (curr && strcmp(curr->word, key) < 0) {
		before = curr;
		curr = curr->link;
	}
	return before;
}
listpointer pre_delete_search(listpointer first, char key[]) {
	listpointer prev, curr;
	prev = NULL;
	curr = first;
	while (curr != NULL) {
		if (strcmp(curr->word, key) == 0) {
			return prev;
		}
		else {
			prev = curr;
			curr = curr->link;
			
		}
	}
	return NULL;
}
listpointer Delete(listpointer first, char key2[]) {
	listpointer target;	//�����Ϸ��� ���

	//���� ��� ��ġ ã��
	listpointer prev;
	prev = pre_delete_search(first, key2);
	//�����Ϸ��� ����� ��ġ ã��
	target = prev->link;
	//���� �� ����
	prev->link = target->link;
	free(target);
		
}



void printList(listpointer first) {
	printf("Linked list: ");
	for (; first; first = first->link) {
		printf("%s, ", first->word);
	}
	printf("\n");
}

listpointer Load_File(char* filename, listpointer first){
	char baguni[5];
	FILE* fp;
	node* nodeptr;
	node* beforeptr;
	//listpointer first = &ffirst;

	fp = fopen(filename, "r");
	if (!fp) {
		printf("file open error");
	}
	while (fgets(baguni, sizeof(baguni), fp)!=NULL) {
		//printf("%s", baguni);
		nodeptr = buildnode(baguni);
		beforeptr = Search_before(first,nodeptr->word);
		insert(&first, nodeptr, beforeptr);
	}
	//printList(first);
	return first;
}

		
void main() {
	char* input = "dataStructure.txt";
	listpointer first = NULL;
	node* info;
	node* previnfo; 
	char record[5];
	first = Load_File(input, first);
	
	printf("Load finished \n");
	printf("LinkedList status:.. \n");
	printList(first);

	while (1) {
		printf("\nPlease enter your Command\n");
		printf("S or s : search\nI or i : insert\nD or d: delete\nCommand >> ");

		char command[2] = {"\n"	};
		char key[5] = {"\n"};
		scanf("%s %s", command, key);

		if (!strcmp(command, "Q") || !strcmp(command, "q")) { // ������
			printf("Thank you \n");
			return;
		}
		if (!strcmp(command, "I") || !strcmp(command, "i")) { // key ����
			//buildnode(key);
			//���� ��带 ���� ã��
			info = buildnode(key);
			previnfo = Search_before(first, info->word);
			insert(first, info, previnfo);
		}
		else if (!strcmp(command, "S") || !strcmp(command, "s")) { // key Ž��
			listpointer searchData =NULL;
			searchData=Search(key, first);
			printf("%s\n", searchData->word);
		}
		else if (!strcmp(command, "D") || !strcmp(command, "d")) { // key ����
			Delete(first, key);
		}
		else if (!strcmp(command, "P") || !strcmp(command, "p")) { // ���
			printList(first);
		}
		else {
			printf("Unknown command\n!");
		}
	}
	
}