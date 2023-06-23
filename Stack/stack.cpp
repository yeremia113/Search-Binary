#include <iostream>
using namespace std;

int stack[100], n=100, top=-1; //batas stack 100
void push(int val) {
   if(top>=n-1) //ketika mencapai maksimal
   cout<<"Stack overflow"<<endl;
   else {
      top++; //top bertambah
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1) //ketika isinya kosong
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"Elemen yang muncul "<< stack[top] <<endl;
      top--; //top berkurang
   }
}
void display() {
   if(top>=0) {
      cout<<"Elemen stack adalah:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" "; //menampilkan seluruh stack
      cout<<endl;
   } else
   cout<<"Stack kosong";
}
int main() {
   int ch, val;
   cout<<"1) Stack dalam push"<<endl;
   cout<<"2) Stack dari pop"<<endl;
   cout<<"3) Stack display"<<endl;
   cout<<"4) Keluar"<<endl;
   do {
      cout<<"Masukkan pilihan : "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Masukkan value yang akan di push:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Keluar"<<endl;
            break;
         }
         default: {
            cout<<"Pilihan tidak tersedia"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}