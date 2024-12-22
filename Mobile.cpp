/*#include<iostream>
#include<string>
using namespace std;

class Mobile{
   private:

     int mobile_id;
     string mobile_name;
     int quantity;
     float price;

     public:
     Mobile(int id , string Mobile_name, int quantity, float price){
        mobile_id = id;
        mobile_name = Mobile_name;
        quantity = quantity;
        price = price;

     }
         





  /*      void setStudentId(int id ){
            mobile_id = id;

        }
         int getStudentId(int id ){
            return id;

         }
        void setStudentName(string name){
            mobile_name =  name;

        }
          string getStudentName(string name){
            return mobile_name;
          }
          void setQuantity(int quantity){
               quantity = quantity;
          }
           int getQuantity(int quantity){
              return quantity;
           }
          float setPrice( float price){
               price = price;
          }
          float getPrice(float price){
               return price;}
       */  


    /* void displayMobileDetails (){

         cout<<"\n Mobile Id:"<<mobile_id ;
         cout<<"\n Mobile Name:"<<mobile_name;
         cout<<"\n Quantity:"<<quantity;
         cout<<"\n Price:"<<price;
      }
      void updateQuantity(int quantity){
         quantity += quantity;

      }
};
       int main() 
            {

         Mobile m1(101 ,"iPhone 14", 50, 999.99);

         m1.displayMobileDetails();

         m1.updateQuantity(10);

         cout<<"\n after upadte quantity:";
         m1.displayMobileDetails();

         return 0;
            }      
      
*/

#include<iostream>
#include<String>
using namespace std;
class Mobile{
   private:
   int mobile_id;
   string mobile_name;
   int quantity;
   float price;

   public:
   Mobile(int id, string name, int quantity, float price ){

       mobile_id = id;
       mobile_name = name;
       quantity = quantity;
       price = price;

   } 
 
      
      
      void displayMobileDetails(){
         cout<<"\n Mobile_Id:"<<mobile_id;
         cout<<"\n Mobile_Name:"<<mobile_name;
         cout<<"\n Quantity:"<<quantity;
         cout<<"\n Price:"<<price;
      }
      void updateQuantity(int quantity){
         quantity += quantity;

      }
      int main()
       {
         Mobile m1(101 , "Redmi 13" ,50 , 999.99 );

         m1.displayMobileDetails();

         m1.updateQuantity(10);

         cout<<"\n after updating quantity:";
         m1.displayMobileDetails();
         return 0;

      }


};
       
   
               
