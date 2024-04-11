#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* right;
	struct node* left;
};

struct node* createBST(struct node* root, int x) {
	if (root == NULL) {
		root = (struct node*) malloc(sizeof(struct node));
		root -> data = x;
		root -> left = NULL;
		root -> right = NULL;
		return root;
	}
	
	if (root -> data == x) {
        printf("%d is already present hence can't insert\n\n",x);
		root -> data = x;
        return  root;
	}
	else if (root -> data > x) {
		root -> left = createBST(root -> left,x);
	}
	else {
		root -> right = createBST(root -> right, x);
    }
	return root;
}

void search(struct node* root, int x) {
	if (root == NULL ) {
		printf("not found\n\n");
		return;
	}
	
	if (root -> data == x) {
		printf("element found\n\n");
		return;
	} else if (root -> data > x) {
		search(root -> left, x);
	}
	else {
		search(root -> right, x);
	}
}

void preorder(struct node* root) {
	if (root == NULL) return;
	
	
	preorder(root -> left);
	printf(" %d",root -> data);
	preorder (root -> right);
}

struct node* deleteFun(struct node* root, int num) {
	if (root == NULL) return NULL;

	if (root -> data > num) {
		root -> left = deleteFun(root ->left , num);
	} else if (root -> data < num) {
		root -> right = deleteFun(root -> right, num);
	} else {
		if (root -> left == NULL && root -> right == NULL) {
			free(root);
            return NULL;
		}
	}
	
	return root;
}

int main() {
	int choice, num;

	struct node* root = NULL;
	struct node* temp = NULL;
	printf("--menu--\n1.insert \n2.search \n3. del \n4.traversal \n5.exit \n");
	do {
		printf("\nenter the choice: ");
		scanf("%d",&choice);
		
		switch (choice) {
			case 1:
				printf("enter the number to insert: ");
				scanf("%d",&num);
				if (root == NULL) {	
					root = createBST(root, num);
					break;
				}
				root = createBST(root, num);
				break;
			case 2:
			printf("enter the number to search: ");
				scanf("%d",&num);
				search(root, num);
				break;
			case 3:
				printf("enter the number of leaf node to delte: ");
				scanf("%d",&num);
				deleteFun(root, num);
				break;
	 		case 4:
				preorder(root);
                printf("\n");
				break;
			case 5:
				printf("exiting...");
				break;
		}
	} while (choice != 5);

	return 0;
}