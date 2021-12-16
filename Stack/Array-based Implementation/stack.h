
#define MAXSTACK 100
#define StackEntry char

typedef struct stack{
    int top;
    StackEntry entry[MAXSTACK];
}Stack;

void CreateStack    (Stack *);
void Push           (StackEntry , Stack *);
int StackFull       (Stack *);
void Pop            (StackEntry *,Stack *);
int StackEmpty      (Stack *);
void StackTop       (StackEntry *, Stack *);
int StackSize       (Stack *);
void ClearStack     (Stack *);
void TraverseStack  (Stack *,void(*)(StackEntry));



/***

        Functions List :
                StackEntry e;
                Stack s;
                CreateStack(&s);
                push(e,&s);
                StackFull(&s)
                Pop(&e,&s)
                StackEmpty(&s)
                StackTop(&e,&s)
                StackSize(&s)
                clearStack(&s)
                TraverseStack(&s,&Display)

***/
