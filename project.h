#ifndef PROJECT_H
#define PROJECT_H
void welcome_message();
int login();
void addbookinfo(int *a,uint8_t *count,struct lib l[100]);
void findwithbook(uint8_t count,char book[],struct lib l[100]);
void findwithauthor(uint8_t count, char atr_nam[],struct lib l[100]);
void findwithcateg(uint8_t count,char catgry[],struct lib l[100]);
void findwithpubyear(uint8_t count,int pubyear,struct lib l[100]);
void listofbooks(uint8_t count,struct lib l[100]);
void booknum(uint8_t count);
#endif