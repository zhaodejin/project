#include <stdio.h>
#include <stdlib.h>
struct person_t
{
    char name[100];
    int age;
};
struct classess
{
    char name[100];
    struct person_t *Person;
    struct person_t *Person2;
};
struct school_t
{
    char name[100];
    struct classess *classes_t;
};
typedef struct schoolNode_t
{
    struct school_t *school;
    struct schoolNode_t *next;
} LinkList;

LinkList *creat(int n)
{
    printf("creating");
    LinkList *head, *node, *end;

    head = (LinkList *)malloc(sizeof(LinkList));
    end = head;
    for (int i = 0; i < n; i++)
    {
        node = (LinkList *)malloc(sizeof(LinkList));
        scanf("%d", &node->school->classes_t->Person->age);
        end->next = node;
        end = node;
    }
    end->next = NULL;
    return head;
}
LinkList *change(LinkList *list, int n)
{
    LinkList *t = list;
    int i = 0;
    while (i < n && t != NULL)
    {
        t = t->next;
        i++;
    }
    if (t != NULL)
    {
        puts("请输入要改变的值");
        scanf("%d", &t->school->classes_t->Person->age);
    }
    else
    {
        puts("节点不存在");
    }
}
int test(){
    return 6/2*(2+1);
}

int main(int argc, char **argv)
{
    LinkList *head;
    head=(LinkList *)malloc(sizeof(LinkList));
    printf("%d\n",test());
    struct person_t person = {"zhaodejin", 23};
    struct person_t person2 = {"zhaode", 24};
    struct classess classes = {"高三一班", &person, &person2};
    struct school_t school = {
        "十里中学",
        &classes};
    printf("school name:%s,school class name:\t%s\t person1 name:\t%s\t\nperson1 age:%d\tperson2 name:\t%s\tperson2 age\t%d\n",
           school.name, school.classes_t->name, school.classes_t->Person->name, school.classes_t->Person->age, school.classes_t->Person2->name, school.classes_t->Person2->age);
    return 0;
}