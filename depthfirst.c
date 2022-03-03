#include<stdio.h>
#include<conio.h>;
struct disjointSet {
int parent[10];
int rank[10];
int n;
}
dis;
void makeset()
{

int i;
for(i=0;i&lt;dis.n;i++)
dis.parent[i]=i;
dis.rank[i]=0;
}
void displayset()
{
int i;
printf("\nparent array\n&quot;);
for(i=0;i&lt;dis.n;i++)
{
printf(&quot;%d&quot;,dis.parent[i]);
}
printf(&quot;\nrank of array\n&quot;);
for(i=0;i&lt;dis.n;i++)
{
printf(&quot;%d&quot;,dis.rank[i]);
}
printf(&quot;\n&quot;);
}
int find(int x)
{
if(dis.parent[x]!=x)
{
dis.parent[x]=find(dis.parent[x]);
}
return dis.parent[x];
}
void Union(int x,int y)
{
int xset=find(x) , yset=find(y);
if(xset==yset)
return;
if(dis.rank[xset]&lt;dis.rank[yset])
{
dis.parent[xset]=yset;
dis.rank[xset]=-1;
}
else if(dis.rank[xset]&gt;dis.rank[yset])
{
dis.parent[yset]=xset;
dis.rank[yset]=-1;
}
else
{
dis.parent[yset]=xset;
dis.rank[xset]=dis.rank[xset]+1;
dis.rank[yset]=-1;
}
}
int main()

{
int x,y,n;
printf(&quot;\nenter number of elements :\n&quot;);
scanf(&quot;%d&quot;,&amp;dis.n);
makeset();
int ch,w;
do{
printf(&quot;\n1.UNION\n2.FIND \n3.DISPLAY&quot;);
printf(&quot;\nenter choice :&quot;);
scanf(&quot;%d&quot;,&amp;ch);
switch(ch)
{
case 1:
printf(&quot;\nenter elements to perform union :&quot;);
scanf(&quot;%d%d&quot;,&amp;x,&amp;y);
Union(x,y);
break;
case 2:
printf(&quot;\nenter elements to check if connected
components :&quot;);
scanf(&quot;%d%d&quot;,&amp;x,&amp;y);
if(find(x)==find(y))
printf(&quot;\nconnected components !&quot;);
else
printf(&quot;\nnoi connected components !&quot;);
break;
case 3:
displayset();
break;
}
printf(&quot;\n do you want to continue ?(1/0)&quot;);
scanf(&quot;%d&quot;,&amp;w);
}
while(w==1);
return 0;
}

5) Program to implement stack operations.
#include&lt;stdio.h&gt;

#include&lt;conio.h&gt;
int top=-1,s[n],n;
void push();
void pop();
void display();
void main()
{
int choice;
while(1)
{
printf(&quot;\n enter the value of n: &quot;);
scanf(&quot;%d&quot;,&amp;n);

printf(&quot;\n\n1.Push \n2.Pop \n3.Display
\n4.Exit&quot;);
printf(&quot;\n\nEnter your choice(1-4):&quot;);
scanf(&quot;%d&quot;,&amp;choice);
switch(choice)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
default: printf(&quot;\n!!Invalid Choice!!&quot;);
}
}
}
void push()
{
int x;
if(top&gt;=n-1)
{
printf(&quot;\nStack is overflow!!&quot;);
}
else
{
printf(&quot;\nEnter element to push:&quot;);
scanf(&quot;%d&quot;,&amp;x);
top++;
s[top]=x;
}
}
void pop()
{
if(top&lt;=-1)
{
printf(&quot;\nStack is underflow!!&quot;);
}
else
{
printf(&quot;\nDeleted element is %d&quot;,s[top]);
top--;
}
}
void display()
{
int i;

if(top==-1)
{
printf(&quot;\nStack is empty!!&quot;);
}
else
{
printf(&quot;\n Elements in the Stack is...\n&quot;);
for(i=top;i&gt;=0;i--)
printf(&quot;\n%d&quot;,s[i]);

}
}
