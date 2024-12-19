#include <iostream>

double taxes(){
  double total;
  double tax;
  double amountToPay;
  std::cout<<"Enter the amount customer has to pay: "<<std::endl;
  std::cin>>amountToPay;

  std::cout<<"Enter the tax rate(Ex: 0.08 if 8%): "<<std::endl;
  std::cin>>tax;

  
     double taxes= amountToPay*tax;

     total = amountToPay + taxes;
  
  std::cout<<"Amount To Charge: "<<'$'<<total<<std::endl;
}

int main(){
    using std::cout;
    //You could write using std::cout to save some repetitions but it is not necessary
    std::cout<<"I like c++"<< std::endl;
    std::cout<<"I did c++ back in 10th grade"<< '\n';//this works as well


   std::string name;
    int age;

   //cout<<"Enter your name: "<<std::endl;
   //std::cin >> name;

   cout<<"Enter your full name: "<<std::endl;
   std::getline(std::cin, name);//The getline() method will accept strings with white spaces.

   cout<<"Enter your age: "<<std::endl;
   std::cin >> age;


   cout<<"I will let you use our tax sum calculator"<<std::endl;
   taxes();

    return 0;
}
