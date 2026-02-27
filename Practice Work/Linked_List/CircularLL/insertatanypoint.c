// struct node* insert_at_position(struct node* head , int data , int pos){
//     struct node* newnode = (struct node*)malloc(sizeof(struct node));
//     newnode->data = data;

//     if (head == NULL){
//         if (pos == 1){
//             newnode->next = newnode;
//             return newnode;
//         }
//         else{
//             printf("Invalid position.\n");
//             return head;
//         }
//     }
//     if(pos==1){
//         struct node* temp = head;
//         while(temp->next != head){
//             temp = temp->next;
//         }
//         temp->next = newnode;
//         newnode->next = head;
//         head = newnode;
//         return head;
//     }

//     struct node* temp = head;
//     int i = 1;

//     while(i< pos - 1 && temp->next != head){
//         temp = temp-> next;
//         i++;
//     }
//     if(i != pos - 1){
//         printf("Invalid position.\n");
//         return head;
//     }

//     newnode->next = temp->next;
//     temp->next = newnode;

//     return head;


// }

