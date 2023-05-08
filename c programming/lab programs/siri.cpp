#include<stdio.h>
int main()
{ 
  float aq,mq,pq,tq,ap,mp,pp,tp,ac,mc,pc,tc,tot,ch;
  printf("enter the quantity and price of apples");
  scanf("%f%f",&aq,&ap);
  printf("enter the quantity and price of mangoes");
  scanf("%f%f",&mq,&mp);
  printf("enter the quantity and price of potatoes");
  scanf("%f%f",&pq,&pp);
  printf("enter the quantity and price of tomatoes");
  scanf("%f%f",&tq,&tp);
  ac=aq+ap;
  mc=mq+mp;
  pc=pq+pp;
  tc=tq+tp;
  tot=ac+mc+pc+tc;
  ch=500-tot;
  printf("\n s.no\t name\t quantity\t price\t total\n");
  printf("\n 1\t apples \t %.2f\t %.2f\t %.2f\n",aq,ap,ac);
  printf("\n 2\t mangoes\t %.2f\t %.2f\t %.2f\n",mq,mp,mc);
  printf("\n 3\t potatoes \t %.2f\t %.2f\t %.2f\n",pq,pp,pc);
  printf("\n 4\t tomatoes \t %.2f\t %.2f\t %.2f\n",tq,tp,tc);
  printf("total bill is %.2f\n",tot);
  printf("change to be returned is %.2f",ch);
}
