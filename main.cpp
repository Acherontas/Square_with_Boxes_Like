#include <iostream>
#include <iomanip>
#include <math.h>
#include <thread>

using namespace std;
   //function of weirdo-->bee
   long double dto;
   int lg=-1;

   //values of weirdo first
    long double mynmb,fractpart,intpart,xi=9,rst_of_nn,cki,tmpki=0,dfr,myntmp,stnm,get_max;
    long double ar[1000];
    int arx=0,tl=-1,preci=-1,xl=0,tldfr=0,var_log=-1;
    int arxil[107]={
    9,18,27,36,45,54,63,72,81,90,99,
    900,909,918,927,936,945,954,963,972,981,990,999,
    9000,9009,9018,9027,9036,9045,9054,9063,9072,9081,9090,9099,
    9900,9909,9918,9927,9936,9945,9954,9963,9972,9981,9990,9999,
    90000,90009,90018,90027,90036,90045,90054,90063,90072,90081,90090,90099,
    90900,90909,90918,90927,90936,90945,90954,90963,90972,90981,90990,90999,
    99000,99009,99018,99027,99036,99045,99054,99063,99072,99081,99090,99099,
    99900,99909,99918,99927,99936,99945,99954,99963,99972,99981,99990,99999,
    99990,99999,999918,999927,999936,999945,999954,999963,999972,999981,999990,999999},xki=-1;
    long double mli,kli;
    long double telil[1000],xlrst;int tli=0,xtli=0;
    long double tel_dfr[1000];
    long double tlfrd;long double rtlfrd;
    //fuctions of weirdo
    int xl_rs(long double nm,int xi,long double prec){
    tmpki=0;dfr=0;arx=0;tl=-1;
    for(;;){
       if(var_log==1){cout<<std::setprecision(preci) <<"using myntmp " << myntmp << " / " << xi <<" --> ";}
        rst_of_nn=(long double)myntmp/(long double)xi;      //309,4=2785/9
        fractpart=modf(rst_of_nn,&intpart);                //0,4=309,4  intpart=309
        cki=intpart*intpart;
        if(var_log==1){
         cout<<"result is : " << rst_of_nn << " and" ;
         cout<<std::setprecision(preci) << " fractpart " << fractpart << " intpart " << intpart <<" and ^2 " << cki <<" as cki\n";}
        if(cki>mynmb){
           if(var_log==1){cout<<std::setprecision(preci) <<" cki is bigger ";}
            tmpki=tmpki+rst_of_nn;
            dfr=mynmb-tmpki;
            if(var_log==1){cout <<std::setprecision(preci) << "tmpki " << tmpki << " and dfr " << dfr <<" --> ";}
            myntmp=dfr;
            if(var_log==1){cout<<std::setprecision(preci) <<"inserting " << intpart <<" || " << arx <<"\n";}
            ar[arx]=intpart;
            arx+=1;
            if(arx==999){arx=0;}
        }
        if(cki<mynmb){
          if(var_log==1 || var_log==12){
             long double xlrs;
             xlrs=intpart*intpart;
             cout<<std::setprecision(preci) <<"possible value " << ar[arx-1] <<" or " << intpart <<" and " << xlrs <<"\n";}
            if(xtli==0){
            if(var_log==1){cout<<"@ telil " << tli << " " << telil[tli] <<"\n";}
            telil[tli]=intpart;tli+=1;
            }
            if(xtli==1){telil[tli]=intpart;tli+=1;}
            mli=ar[arx-1]*ar[arx-1];
            kli=intpart*intpart;
            if(var_log==1){cout<<std::setprecision(20) << " or " << mli << " and " << kli <<"\n";}
            tl=1;
        }
       if(tl==1){break;}
    }
  return 0;
}

long double gt_mx(){
  get_max=telil[0]; // it was arxil[0]
  for(int i=1;i<=tli;i++){
     if(telil[i]>get_max){get_max=telil[i];}
  }
 return 0;
}

long double find_the_preci(long double the_start){
   int xl=0;
   long double tst=the_start;
   cout<<"entering the precise find function with " << tst <<"\n";
   for(;;){
    if(var_log==1){cout<<"using to find more precise the value of " << tst <<"\n";}
    tlfrd=tst*tst;
    tst+=1;
    if(tlfrd>mynmb){rtlfrd=tst-1;break;}
   }
   cout<<"returning from precise find function with " << tlfrd <<"\n";
   return 0;
}

int xmx_ofrs(){
  int xpos=0;
  long double da_mx_rs;
  da_mx_rs=tel_dfr[0];
  for(int i=1;i<=tldfr;i++)
  {
    if(tel_dfr[i]>da_mx_rs && tel_dfr[i]<=mynmb){da_mx_rs=tel_dfr[i];}
  }
  cout<<"the maximum number of the list is " <<std::setprecision(preci)<< da_mx_rs <<"\n";
 return 0;
}
 //Main function of weirdo the main class of weirdo as a function on weirdo_bee conjuction
 void weirdo(long double number_one,long double sto_xi,int prc){
    mynmb=number_one;
    preci=prc;
    xi=sto_xi;
    myntmp=mynmb;
    if(var_log==1){cout<<"using " << mynmb << " with " << xi  <<" and precision " << preci <<"\n";}
    if(xi!=0){xtli=1;
        cout<<"entering once with " << std::setprecision(preci) << xi <<"\n";
        xl_rs(mynmb,xi,preci); goto A;}
    if(xi==0){
      cout<<"entering for all the times\n";
      for(int i=0;i<=106;i++){
      if(var_log==1){
        cout<<"@i second ";
        cout<<"enter with " << arxil[i] << " and main nm " << mynmb <<"\n";}
        if(var_log==12){cout<<"@i second ";
        cout<<"enter with " << arxil[i] << " and main nm " << mynmb <<"\n";}
        xl_rs(mynmb,arxil[i],preci);
        myntmp=mynmb;
      }
      A:
    cout<<"\n";
      cout<<"\n";
      cout<<"for ur number " <<std::setprecision(preci) <<  mynmb <<" with tli " << tli <<"\n";
      for(int i=0;i<=tli;i++){
        xlrst=telil[i]*telil[i];
        tel_dfr[tldfr]=xlrst;
        tldfr+=1;
        cout<<"@i " << i <<" with value of " <<std::setprecision(preci)<< arxil[i] << " and ";
        cout<<"  " <<std::setprecision(preci) << telil[i] <<" ^2 ::== ";
        cout<<"  " <<std::setprecision(preci) << xlrst <<"\n";
      }
    }
    cout<<"\n";

    //pow max
    if(xi==0){gt_mx();}
    if(xi!=0){get_max=telil[0];}
    long double mxm,rffr,rfmdl,rfend;
    mxm=get_max*get_max;
    cout<<"the max of them is " << std::setprecision(preci) <<get_max << " with ^2 "<< std::setprecision(preci) <<mxm <<"\n";
    xmx_ofrs();
    cout<<"trying to find the precise nearest value\n";
    find_the_preci(get_max);
    rffr=(rtlfrd-1)*(rtlfrd-1);
    rfmdl=rtlfrd*rtlfrd;
    rfend=(rtlfrd+1)*(rtlfrd+1);
    cout<<"|-------------------------------------------------------------------------\n";
    cout<<"|the maximum possible allowed numbers to use are : \n";
    cout<<"|number of " << (rtlfrd-1) << " with ^2 of " <<std::setprecision(preci)<< rffr <<"\n";
    cout<<"|number of " << rtlfrd << " with ^2 of " <<std::setprecision(preci)<< rfmdl <<"\n";
    cout<<"|number of " << (rtlfrd+1) << " with ^2 of " <<std::setprecision(preci) << rfend <<"\n";
    cout<<"|-------------------------------------------------------------------------\n";

 }

 //all the bee as a function
 int rtr=0;
 void bee(long double fr,long double sc,int rts,int logl){
    cout<<"first number second number is the qube one dimension and third the precision \n";
    int lxpre=-1;;
    long double first,second,rst;
    first=fr;
    second=sc;
    lxpre=rts;
    rst=first/second;
    long double fr_f,int_f,fr_s,int_s,fr_rs,int_rsl;
    fr_f=modf(first,&int_f);
    fr_s=modf(second,&int_s);
    fr_rs=modf(rst,&int_rsl);
    cout<<"\n";
    cout<<"first " << std::setprecision(lxpre) << int_f << " \n";
    cout<<"     doted " <<std::setprecision(lxpre) << fr_f << "\n";
    cout<<"     makes " <<std::setprecision(lxpre)<< first<<"\n";
    cout<<"\n";
    cout<<"second " << std::setprecision(lxpre) <<int_s << " \n";
    cout<<"     doted " <<std::setprecision(lxpre) << fr_s << " \n";
    cout<<"     makes " <<std::setprecision(lxpre) << second <<"\n";
    cout<<"\n";
    cout<<"result " <<std::setprecision(lxpre) << int_rsl << " \n";
    cout<<"     doted " <<std::setprecision(lxpre) << fr_rs << " \n";
    cout<<"     makes " <<std::setprecision(lxpre) << rst <<"\n";
    long double get_dfr;
    if(int_s>int_rsl){get_dfr=int_s-int_rsl;}
    if(int_s<int_rsl){get_dfr=int_rsl-int_s;}
    cout<<"\n";
    if(get_dfr==1){cout<<"u can easily almost retrieve the dots digits \n";}
    //getting the last digit of the int_rsl
    string last_digit;
    last_digit.clear();
    last_digit+=to_string(int_rsl);
    int xp=-1;
    char mk;
    int lk;
    for(int i=0;i<=last_digit.size()-1;i++){
            if(last_digit.at(i)!=*"."){xp+=1;}
            if(last_digit.at(i)==*"."){
            mk=last_digit.at(i-1);
            lk=stoi(&mk);
            break;}
            }
            xp+=1;
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    cout<<"\n";
    cout<<"for the integer string " <<std::setprecision(lxpre)  << last_digit << "\n";
    cout<<"the numbers are " <<std::setprecision(lxpre) << xp <<"\n";
    cout<<"the retrievable integer digit is " <<std::setprecision(lxpre) << lk <<"\n";
    cout<<"\n";
    //lowering
    long double newd,new_int_t=-1,nr_lw;
    new_int_t=lk;
    newd=new_int_t+fr_rs;
    cout<<"entering with number of " <<std::setprecision(lxpre) <<newd <<"\n";
    int myfunc=-1,xpp=1,stop=-1,status=-1,lx=1,tmp_lk=-1,tms=0,go_down=0;
    string int_string;string mn_string;
    mn_string.clear();
    mn_string+=to_string(newd);
    tmp_lk=lk;
    long double da_rst,da_sq_rst,fr_da,int_da;
    //sometimes the value of power of the second is bigger than the first so we use the second-1;
    //so we recheck
    long double recheck_them;
    recheck_them=second*second;
    long double frck,intck;
    frck=modf(recheck_them,&intck);
    cout<<"recheck values of " << second << " and result of " << recheck_them << " with intpart " << intck <<"\n";
    cout<<"\n";
    if(intck>first){
      //if the second power is bigger than the actual first power we lower it;
      if(logl==1){cout<<"recheck power " << second << " of result " << recheck_them <<"\n";}
      if(logl==1){cout<<"lowering second to value of " << second <<"\n"; cout<<"\n";}
      second=second-1;
    }
    for(;;){
        if(logl==1){cout<<"     ----> using " <<std::setprecision(lxpre) << newd ;
                       //cout<<" with string " << mn_string;
                      }
        nr_lw=newd/2;
        tms+=1;
        if(logl==1){cout<<" rst is " <<std::setprecision(lxpre)<< nr_lw <<"\n";}
        da_rst=-1;
        frck=modf(nr_lw,&intck);
        if(logl==1){cout <<"     ----> using " << nr_lw <<" with intpart " << intck <<" and fract " << frck <<"\n";}
        da_rst=second+frck;
        da_sq_rst=da_rst*da_rst;
        fr_da=modf(da_sq_rst,&int_da);
        if(logl==1){
          cout<<"                     with combination da_rst " << da_rst << " sq of rst " << da_sq_rst << "\n";
          cout<<"                     with intpart " << int_da << " and other part " << fr_da <<"\n";
        }
        if(int_da==first){
        cout<<"\n";
        cout<<"     ----> using " <<std::setprecision(lxpre)<< newd << " \n";
        cout<<"     ----> with rst " <<std::setprecision(lxpre)<< nr_lw <<" \n";
        cout<<"     ----> the times i run " <<std::setprecision(lxpre)<< tms <<"\n";
        cout<<"     ----> i just go down :" <<std::setprecision(lxpre)<< go_down <<"\n";
        cout<<"     ------------------- found  @--------------------------- \n";
        cout<<"     for number " <<std::setprecision(lxpre) << first <<"  \n";
        cout<<"     power result is  " <<std::setprecision(lxpre) <<da_rst << "\n";
        cout<<"     with result of the power * power  " <<std::setprecision(lxpre)<< da_sq_rst <<"\n";
        cout<<"\n";
        rtr=1;
        }
        int_string.clear();
        int_string+=to_string(nr_lw);
        if(logl==1){
          cout<<"                     the int string is " << int_string <<"\n";
          cout<<"\n";}
        if(lx==2){lx=1;}
        if(mn_string.at(0)=='0' && int_string.at(2)=='0' && new_int_t==0){
           stop=1;
        }
        if(mn_string.at(0)!='0' && int_string.at(2)=='0'){
            go_down+=1;
            if(logl==1){cout<<"from new int t  of " <<std::setprecision(lxpre)<< new_int_t <<" ---> ";}
          new_int_t=tmp_lk-1;
          newd=new_int_t+fr_rs;
          mn_string.clear();
          mn_string+=to_string(newd);
          int_string.clear();
          nr_lw=-1;
          if(logl==1){cout<<std::setprecision(lxpre)<< new_int_t << " with " <<std::setprecision(lxpre)<< newd <<"\n";}
          lx=2;
          if(tmp_lk>=0){tmp_lk=tmp_lk-1;}
        }
        if(lx==1){newd=nr_lw;}
        if(stop==1){break;}
        if(rtr==1){break;}
    }
}

int main(int argc,char** argv)
{
    cout<<"voyeristic behaviours have fun \n";
    cout<<"so they say they want the result of a square root of a specific number \n";
    cout<<"without the use of the square itself even as a small cpu intensive unit process task and the result of it.\n";
    cout<<"So the combination of emvadon tou tetragonou me tin thesi ton 9X! \n";
    cout<<"exoume to apotelesma pou theloume \n";
    cout<<"enter the number \n";
    cout<<"0 gia na kanei elenxo me olous | allios enan opoiondipote arithmo theloume \n";
    cout<<"precision eg 5,8,9,12,20,50 \n";
    cout<<"logs 0[disabled] 1[all_enabled] or 12[specific logs] \n";
    cout<<"for the fun of us if number is big logs should be turned off \n";
    cout<<"all the values but its slow \n";
    cout<<"9,18,27,36,45,54,63,72,81,90,99,\n";
    cout<<"900,909,918,927,936,945,954,963,972,981,990,999,\n";
    cout<<"9000,9009,9018,9027,9036,9045,9054,9063,9072,9081,9090,9099,\n";
    cout<<"9900,9909,9918,9927,9936,9945,9954,9963,9972,9981,9990,9999,\n";
    cout<<"90000,90009,90018,90027,90036,90045,90054,90063,90072,90081,90090,90099,\n";
    cout<<"90900,90909,90918,90927,90936,90945,90954,90963,90972,90981,90990,90999,\n";
    cout<<"99000,99009,99018,99027,99036,99045,99054,99063,99072,99081,99090,99099,\n";
    cout<<"99900,99909,99918,99927,99936,99945,99954,99963,99972,99981,99990,99999,\n";
    cout<<"99990,99999,999918,999927,999936,999945,999954,999963,999972,999981,999990,999999,\n";
    mynmb=stold(argv[1]);
    xi=stold(argv[2]);
    preci=stoi(argv[3]);
    var_log=stoi(argv[4]);
    cout<<"entering thesi kai emvadon\n";
    weirdo(mynmb,xi,preci);
    cout<<"\n";
    cout<<"\n";
    cout<<"enter deutero arithmo \n";

    cin>>dto;
    cout<<"entering emvadon kai .....\n";

    cout<<"enter log level : \n";
    cin>>lg;
    bee(mynmb,dto,preci,lg);
    cout<<"\n";
    if(rtr==0){
    int xlt=-1;
    cout<<"bee error cant find the power u want. Press 1 to retry or 0 to exit\n";
    cin>>xlt;
    if(xlt==0){return 0;}
    if(xlt!=0){
      cout<<"enter deutero arithmo \n";
      cin>>dto;
      bee(mynmb,dto,preci,lg);
    }
    }
    return 0;
}
