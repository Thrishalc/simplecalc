
#include <iostream>

int main() {
    int a,b,result;
    char ch;
    char ans;
    do{
       std::cout<<"enter a number";
        std::cin>>a>>b;
        std::cout<<"enter a choice";
        std::cin>>ch; 
        switch (ch){
            case '+':
            result=a+b;
            break;
              case '-':
            result=a-b;
            break;
              case '*':
            result=a*b;
            break;
              case '/':
                 if (b==0)
                 {
                     std::cout<<"enter correct integer";
                 }
                 else{
                     result=a/b;
                     break;
                 }
                 case '%':
                 result=a%b;
                 break;
                 
            default:
            std::cout<<"enter a correct choice";
           break;
    }
    std::cout<<"result are="<<result;\n
   std::cout<<"do you want to continue(y/n)";
   std::cin>>ans;
}while(ans=='y'||ans=='Y');
}
