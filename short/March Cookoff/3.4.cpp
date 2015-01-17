#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;


typedef struct trie trie;
struct trie
{
  char key;
  trie *next,*children;
};

trie *newnode(char s)
{
  trie *t=(trie *)malloc(sizeof(trie));
  t->key=s;
  t->next=t->children=NULL;
}

void insert(trie **t,char *s,int start)
{if(s[start]=='\0')
    {
      *t=newnode('#');
      return;
    } 
  if(*t==NULL)
    {
      *t=newnode(s[start]);
      insert(&(*t)->children,s,start+1);
    }       
  if((*t)->key==s[start])
    insert(&(*t)->children,s,start+1);
  else
    insert(&(*t)->next,s,start);
}


bool search(trie *t ,char *s,int start)
{


  if(t==NULL)
    return false;

  if(t->key=='#' && s[start]=='\0')
    return true;

  if(t->key!='#' && s[start]=='\0' || t->key=='#' && s[start]!='\0')
    return false;

  if(t->key==s[start])
    return search(t->children,s,start+1);

  else
    return search(t->next,s,start);

  return false;
}

int main(){
  char a[100001];
  char b[100001];

  trie * t1 = NULL;
  trie * t2 = NULL;

  cin >> a >> b;
  insert(&t1,a,0);
  insert(&t2,b,0);
  
  int ans = 0;
  for(int i=0; i<

  return 0;
}
