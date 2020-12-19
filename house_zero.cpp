#include <bits/stdc++.h>
using namespace std;

class house
{

    int r;
    char name[7];
    char deposit[7];
    char current[7];
    char net[7];
    char home[7];
    public:
    void main_menu();
    void deposit_money();
    void current_bill();
    void net_bill();
    void home_rent();
    void meal_rate();
    void individual_meal_cost();
    void show_details();


};



void house::main_menu()
{

    int press;
    cout<<"\n\n\t\t\t\t****************************";
    cout<<"\n\t\t\t\t* WELCOME TO MESS MANAGER *";
    cout<<"\n\t\t\t\t****************************";
    cout<<"\n\n\t\t\t1.Deposit Money for Meal";
    cout<<"\n\n\t\t\t2.Pay Current Bill";
    cout<<"\n\n\t\t\t3.Pay Net Bill";
    cout<<"\n\n\t\t\t4.Pay Home Rent ";
    cout<<"\n\n\t\t\t5.Show Mess Meal Rate";
    cout<<"\n\n\t\t\t6.Individual Meal rate";
    cout<<"\n\n\t\t\t7.Show Details Information";

    cout<<"\n\n\t\t\t8.EXIT";


     cout<<"\n\n\t\t\tEnter Your Choice: ";

cin>>press;
     switch(press){
     case 1: deposit_money();
     break;
     case 2: current_bill();
     break;
     case 3: net_bill();
     break;
     case 4: home_rent();
     break;
     case 5: meal_rate();
     break;
     case 6:individual_meal_cost();
     break;
     case 7: show_details();
     break;
     case 8: cout<<"GOOD BYE"<<endl;
     break;
     default:
        {
                cout<<"\n\n\t\t\tWrong choice!!!";
                cout<<"\n\t\t\tPress any key to continue!!";

        }



     }






}

void house::deposit_money(){
        /*int r,top;

        cout<<"Enter your id"<<endl;
        cin>>r;
        cout<<"Deposit amount"<<endl;
        cin>>deposit;
        int p=r;
        ofstream file_("deposit.txt");
        if(file_.is_open()){
                if(r==p){
                file_<<r<<" "<<deposit<<endl;
                }
        }
        file_.close();

        cout<<"DEPOSITE COMPLETE!"<<endl; */

     cout<<"\n\tDEPOSIT OPTION UNDER CONSTRUCTION :)"<<endl<<"\tSORRY FOR DISTRUB !!"<<endl;
        cout<<"\nPress 1 key for continue \n";
        int x;
        cin>>x;
        main_menu();

}
void house::current_bill(){
        int r,money;
        string nam;
        ifstream file_("current.txt");
        if(file_.is_open()){
        cout<<"\n\t\t**CURRENT BILL**"<<endl;
        while(file_>>r>>nam>>money){
           cout<<"\tID: "<<r<<"\tName :"<<nam<<"\tPaid: "<<money<<endl;

        }
        }
        file_.close();

        cout<<"\nPress 1 key for continue \n";
        int x;
        cin>>x;
        main_menu();
}


void house::net_bill(){

        int r,money;
        string nam;
        ifstream file_("net.txt");
        if(file_.is_open()){
        cout<<"\n\t\t**INTERNET BILL**"<<endl;
        while(file_>>r>>nam>>money){
           cout<<"\tID: "<<r<<"\tName :"<<nam<<"\tPaid: "<<money<<endl;

        }
        }
        file_.close();
        cout<<"\nPress 1 key for continue \n";
        int x;
        cin>>x;
        main_menu();


}


void house::home_rent(){
        int r,money;
        string nam;
        ifstream file_("home.txt");
        if(file_.is_open()){
        cout<<"\n\t\t**HOME RENT**"<<endl;
        while(file_>>r>>nam>>money){
              cout<<"\tID: "<<r<<"\tName :"<<nam<<"\tPaid: "<<money<<endl;

        }
        }
        file_.close();
        cout<<"\nPress 1 key for continue \n";
        int x;
        cin>>x;
        main_menu();

}


void house::meal_rate(){
        int money;
        float COUNT1=0;
        {

        ifstream file_("bazar.txt");
        if(file_.is_open()){
        while(file_>>money){
        COUNT1+=money;

        }
        cout<<"TOTAL BAZAR COST :"<<COUNT1<<endl;
        }file_.close();}
        {
        float COUNT2=0,temp[6];
        int i=0,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15,d16,d17,d18,d19,d20,d21,d22,d23,d24,d25,d26,d27,d28,d29,d30,d31;
        ifstream file_("date.txt");
        if(file_.is_open()){
//This will count the date & meal
        while(file_>>d1>>d2>>d3>>d4>>d5>>d6>>d7>>d8>>d9>>d10>>d11>>d12>>d13>>d14>>d15>>d16>>d17>>d18>>d19>>d20>>d21>>d22>>d23>>d24>>d25>>d26>>d27>>d28>>d29>>d30>>d31) {

        if(d1!=8){COUNT2=d1+d2+d3+d4+d5+d6+d7+d8+d9+d10+d11+d12+d13+d14+d15+d16+d17+d18+d19+d20+d21+d22+d23+d24+d25+d26+d27+d28+d29+d30+d31;
        temp[i]=COUNT2; //storing individual  mess member's meal
        i++;
        COUNT2=0;
        }}
        int Count_meal=0;
for(int i=0;i<=1;i++){
        Count_meal+=temp[i];

}

        cout<<"TOTAL MESS MEAL :"<<Count_meal<<endl;
        float x=COUNT1/Count_meal;
        //cout<<"Meal RATE :"<<x<<endl;
        printf("MEAL RATE : %.2f\n",x);

cout<<"\n\t\t**MEAL COUNTING**\n"<<endl;
               cout<<"\tNANDAN : "<<temp[0]<<"\tNANDAN MEAL COST :"<<temp[0]*x<<endl;
                cout<<"\tDIDAR  : "<<temp[1]<<"\tDIDAR MEAL COST  :"<<(temp[1]*x)<<endl;
               /*
                cout<<"\tSEBA   : "<<temp[2]<<"SEBA MEAL COST   :"<<temp[2]*x<<endl;
                cout<<"\tUJJAL  : "<<temp[3]<<"UJJAL MEAL COST  :"<<temp[3]*x<<endl;
                cout<<"\tRAHUL  : "<<temp[4]<<"RAHUL MEAL COST  :"<<temp[4]*x<<endl;
                cout<<"\tARUN   : "<<temp[5]<<"ARUN MEAL COST   :"<<temp[5]*x<<endl;
                cout<<"\tSOUROV : "<<temp[6]<<"SOUROV MEAL COST :"<<temp[6]*x<<endl; */

                //create a new txt file for individual meal rate
                        ofstream file_("meal_cost.txt");
                        if(file_.is_open()){

                                file_<<temp[0]*x<<endl;                 //1
                                file_<<temp[1]*x<<endl;       //2
                        //        file_<<temp[2]*x<<endl;            //3
                          //      file<<_temp[3]*x<<endl;             //4
                            //    file<<_temp[4]*x<<endl;             //5
                              //  file<<_temp[5]*x<<endl;             //6
                                //file<<_temp[6]*x<<endl;             //7


                        } file_.close();

        }
        file_.close();
        }


        char see;
        cout<<"\nDo YOU WANT TO SEE DEPOSIT MONEY LIST ?"<<endl<<"[Y/N]"<<endl;
        cin>>see;
        if(see=='y'){
            show_details();
        }else{
      /*  cout<<"\nPress 1 key for continue \n";
        int x;
        cin>>x;
        main_menu();*/

         char u;
        cout<<"\nDo YOU WANT TO SEE PABE/DIBE LIST ?"<<endl<<"[Y/N]"<<endl;
        cin>>u;
        if(u=='y'){
            individual_meal_cost();
        }else{
        cout<<"\nPress 1 key for continue \n";
        int x;
        cin>>x;
        main_menu();

                }

}
}


void house::individual_meal_cost(){
       float r,money;
       int i=0;
    float taka[6];
    string nam;
{
    ifstream file_("deposit.txt");

    if(file_.is_open()){
    while(file_>>r>>nam>>money){

            taka[i]=money;
            i++;
}

}
file_.close();
}
int q=0;
ifstream file_("meal_cost.txt");
if(file_.is_open()){
    while(file_>>r){

    if(taka[q]<r){
        cout<<"\tID :"<<q+1<<"  Dibe  ";printf("%.f\n",abs(taka[q]-r));
            q++;

    }
    else
    {
        cout<<"\tID :"<<q+1<<"  pabe  ";printf("%.f\n",abs(taka[q]-r));
        q++;

    }
    }

    }file_.close();
     cout<<"\nPress 1 key for continue \n";
        int x;
        cin>>x;
        main_menu();

}






void house::show_details(){
        int money,taka=0;
        string nam;

        ifstream file_("deposit.txt");
        if(file_.is_open()){
            while(file_>>r>>nam>>money){
                    //if(r==p){
                cout<<"\tID: "<<r<<"\tName :"<<nam<<"\tDeposit: "<<money<<endl;
                 taka+=money;

            //}
        }file_.close();
        cout<<"\n\tTOTAL DEPOSIT : "<<taka<<endl;
        }
char u;
        cout<<"\nDo YOU WANT TO SEE PABE/DIBE LIST ?"<<endl<<"[Y/N]"<<endl;
        cin>>u;
        if(u=='y'){
            individual_meal_cost();
        }else{
        cout<<"\nPress 1 key for continue \n";
        int x;
        cin>>x;
        main_menu();

}
}

int main(){
        house fifty_nine;

        cout<<"\n\t\t\t\t****************************";
        cout<<"\n\t\t\t\t     * HOUSE FIFTY NINE *";
          cout<<"\n\t\t\t\t      **UTTARA ,DHAKA **";

        fifty_nine.main_menu();
}
