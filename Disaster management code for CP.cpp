#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;
//roles vishwa;
int danger(int dead, int injured, int good, int ppl_den);
void role();
int medical_help(int injured, int denger,int ppl_den);
unordered_map<string, int> umap;
int hash_data();

class site
{
public:
    site *next=NULL;
    int den;
    char name[30];

    int dead;
    int injured;
    int goods;
    int ppl_den;
    int med;
    site()
    {
        int a, b, c, d;
       // char m[30];
        cout << "enter site name" << endl;
        cin >> name;
       // name=m;
        cout << "number of dead ppl" << endl;
        cin >> a;
        dead = a;
        cout << "number of injured ppl" << endl;
        cin >> b;
        injured = b;
        cout << "number of goods needed" << endl;
        cin >> c;
        goods = c;
        // cout << "number of medical help needed" << endl;
        // cin >> e;
        // med = e;
        cout << "number of ppl in denger" << endl;
        cin >> d;
        ppl_den = d;
        med = medical_help(b,a,d);
        den = danger(a, b, c + med, d);
    }
};
class pos
{
    public:
   char name[100];
   pos* next=NULL;
  pos(char s[]){
     strcpy(name,s); 
  }  
};
class roles
{ pos* admi=NULL;
  pos* resp=NULL;
  pos* city=NULL;
  pos* volu=NULL;
  pos* ngo=NULL;
  public:
  void push(char s[],int sol){
      if(sol==1){
          pushadmi(s);
      }else if(sol==2){
          pushresp(s);
      }else if(sol==3){
          pushcity(s);
      }else if(sol==4){
          pushvolu(s);
      }else if(sol==5){
          pushngo(s);
      }
  }
  void pop(int sol){
      if(sol==1){
          popadmi();
      }else if(sol==2){
          popresp();
      }else if(sol==3){
          popcity();
      }else if(sol==4){
          popvolu();
      }else if(sol==5){
          popngo();
      }
  }
  char* top(int sol){
      if(sol==1){
         return topadmi();
      }else if(sol==2){
         return topresp();
      }else if(sol==3){
         return topcity();
      }else if(sol==4){
         return topvolu();
      }else {
         return topngo();
      }
  }
    void pushadmi(char s[]){
        if(admi==NULL){
            admi=new pos(s);
            return;
        }
        pos* dum=admi;
        while(dum->next!=NULL){
            dum=dum->next;
        }
        pos* bum=new pos(s);
        dum->next=bum;
    }
    void pushresp(char s[]){
        if(resp==NULL){
            resp=new pos(s);
            return;
        }
        pos* dum=resp;
        while(dum->next!=NULL){
            dum=dum->next;
        }
        pos* bum=new pos(s);
        dum->next=bum;
    }
    void pushcity(char s[]){
        if(city==NULL){
            city=new pos(s);
            return;
        }
        pos* dum=city;
        while(dum->next!=NULL){
            dum=dum->next;
        }
        pos* bum=new pos(s);
        dum->next=bum;
    }
    void pushvolu(char s[]){
        if(volu==NULL){
            volu=new pos(s);
            return;
        }
        pos* dum=volu;
        while(dum->next!=NULL){
            dum=dum->next;
        }
        pos* bum=new pos(s);
        dum->next=bum;
    }
    void pushngo(char s[]){
        if(ngo==NULL){
            ngo=new pos(s);
            return;
        }
        pos* dum=ngo;
        while(dum->next!=NULL){
            dum=dum->next;
        }
        pos* bum=new pos(s);
        dum->next=bum;
    }
    void popadmi(){
        if(admi==NULL){
           cout<<"no Administrator available"<<endl;
           return;
        }
        pos* dum=admi;
        admi=admi->next;
        delete dum;
    }
    char* topadmi(){
        if(admi==NULL){
          // cout<<"no Administrator available"<<endl;
           return NULL;
        }
        return admi->name;
    }
    void popresp(){
        if(resp==NULL){
           cout<<"no Administrator available"<<endl;
           return;
        }
        pos* dum=resp;
        resp=resp->next;
        delete dum;
    }
    char* topresp(){
        if(resp==NULL){
          // cout<<"no Administrator available"<<endl;
           return NULL;
        }
        return resp->name;
    }
    void popcity(){
        if(city==NULL){
           cout<<"no Administrator available"<<endl;
           return;
        }
        pos* dum=city;
        city=city->next;
        delete dum;
    }
    char* topcity(){
        if(city==NULL){
          // cout<<"no Administrator available"<<endl;
           return NULL;
        }
        return city->name;
    }
    void popvolu(){
        if(volu==NULL){
           cout<<"no Administrator available"<<endl;
           return;
        }
        pos* dum=volu;
        volu=volu->next;
        delete dum;
    }
    char* topvolu(){
        if(volu==NULL){
          // cout<<"no Administrator available"<<endl;
           return NULL;
        }
        return volu->name;
    }
    void popngo(){
        if(ngo==NULL){
           cout<<"no Administrator available"<<endl;
           return;
        }
        pos* dum=ngo;
        ngo=ngo->next;
        delete dum;
    }
    char* topngo(){
        if(ngo==NULL){
          // cout<<"no Administrator available"<<endl;
           return NULL;
        }
        return ngo->name;
    }
    void show(pos* rishi){
        pos* gojo=rishi;
        while(gojo!=NULL){
            cout<<gojo->name<<"  ";
            gojo=gojo->next;
        }
    }
    void printppl(){
        cout<<"select option to print"<<endl;
        cout<<"print all press 0"<<endl;
        cout<<"Or select type from 1-5"<<endl;
        int done;
        cin>>done;
        if(done==0){
            cout<<"\nAdministrators:  "<<endl;
            show(admi);
            cout<<"\nResponders:  "<<endl;
            show(resp);
            cout<<"\nCitizens:  "<<endl;
            show(city);
            cout<<"\nVolunteers:  "<<endl;
            show(volu);
            cout<<"\nNGO Partners:  "<<endl;
            show(ngo);
            
        }else if(done==1){
            cout<<"\nAdministrators:  "<<endl;
            show(admi);
        }else if(done==2){
            cout<<"\nResponders:  "<<endl;
            show(resp);
        }else if(done==3){
           cout<<"\nCitizens:  "<<endl;
            show(city);
        }else if(done==4){
            cout<<"\nVolunteers:  "<<endl;
            show(volu);
        }else if(done==5){
            cout<<"\nNGO Partners:  "<<endl;
            show(ngo);
        }
    }
    
    
};
roles vishwa;
class disaster
{
    public:
    site* head=NULL;
    int available_goods=0;
    int available_med=0;
    
   void push(){
       if(head==NULL){
           head=new site;
           return;
       }
       site* dum=head;
       site* bum=new site;
       site* jum=NULL;
       while(dum->den>bum->den){
           jum=dum;
           dum=dum->next;
           if(dum==NULL){
               break;
           }
       }
     // site* bum=new site;
     if(jum==NULL){
         bum->next=head;
         head=bum;
         return;
     }
        bum->next=jum->next;
        jum->next=bum;
   }
   void print(){
       site* dum=head;
       while(dum!=NULL){
        cout <<"\nsite-"<<dum->name<< " denger index-"<<dum->den<<"\n"<< endl; 
        cout << "number of dead ppl-"<<dum->dead<< endl;
        cout << "number of injured ppl-"<<dum->injured << endl;
        cout << "number of goods needed-"<<dum->goods << endl;
        cout << "number of medical help needed-"<<dum->med<< endl;
        cout << "number of ppl in denger-"<<dum->ppl_den<<"\n"<< endl;
           dum=dum->next;
       }
   }
   void supply(){
       int s,p;
       cout<<"\nnumber of goods adding "<<endl;
       cin>>s;
       cout<<"number of medicines adding "<<endl;
       cin>>p;
       available_goods+=s;
       available_med+=p;
   }
   void inventary(){
       cout<<"\nnumber of goods available- "<<available_goods<<endl;
       cout<<"number of medicines available- "<<available_med<<"\n"<<endl;
   }
   void allocate(){
        site* dum=head;
        if(dum==NULL){
            cout<<"\nthere isn't any denger zone "<<endl;
            return;
        }
       if(available_med<dum->med||available_goods<dum->goods){
           cout<<"\nresource not available"<<endl;
           return;
       }
       cout<<"\nAllocating resources to the site- "<<dum->name<<endl;
       cout<<"Allocating "<<dum->med<<" medicines and "<<dum->goods<<" goods"<<endl;
       available_med-=dum->med;
       available_goods-=dum->goods;
       cout<<"avaible goods-"<<available_goods<<" avaible medicines-"<<available_med<<"\n"<<endl;
       head=head->next;
       people(dum);
       delete dum;
   }
   void people(site* dum){
       int a,b,c,d,e;
       cout<<"number of Administrators required"<<endl;
       cin>>a;
       cout<<"number of Responders required"<<endl;
       cin>>b;
       cout<<"number of Volunteers required"<<endl;
       cin>>c;
       cout<<"number of NGO Partners required"<<endl;
       cin>>d;
    //   cout<<"number of Responders required"<<endl;
    //   cin>>b;
    cout<<"\nRescue Workers or Humanitarian Workers on site -"<<dum->name<<endl;
    if(a>0){
        while(a>0){
            cout<<"assigning -"<<vishwa.top(1)<<" as Administrators"<<endl;
            vishwa.pop(1);
            a--;
        }
    }
    if(b>0){
        while(b>0){
            cout<<"assigning -"<<vishwa.top(2)<<" as Responders"<<endl;
            vishwa.pop(2);
            b--;
        }
    }
        if(c>0){
        while(c>0){
            cout<<"assigning -"<<vishwa.top(4)<<" as Volunteers"<<endl;
            vishwa.pop(4);
            c--;
        }
        }
        if(d>0){
        while(d>0){
            cout<<"assigning -"<<vishwa.top(5)<<" as ngo partner"<<endl;
            vishwa.pop(5);
            d--;
        }
    }
    }
   
};





int medical_help(int injured, int denger,int ppl_den)
{
    return denger/2+injured*2+ppl_den/5;
}


int danger(int dead, int injured, int good, int ppl_den)
{
    return 6 * dead + 2 * injured + ppl_den + good;
}

int main()
{
    int choice;
    // hash_data();
    // role();
    disaster rujuta;
    // rujuta.push();
    // rujuta.push();
    // // rujuta.push();
    // rujuta.print();
    // rujuta.supply();
    // rujuta.allocate();

     cout << "Disaster Recovery System Menu:" << endl;
        cout << "1. User Management" << endl;
        cout << "2.find User" << endl;
        //cout << "2. Geographical Information" << endl;
        cout << "3. Add Resource " << endl;
        cout << "4. Allocate Resources" << endl;
        cout << "5. Reporting a disaster" << endl;
        cout << "6. print all disaster sites" << endl;
        cout << "7. check inventary" << endl;
        cout << "8. print registered Rescue Workers or citizens" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";

    while (choice != 9)
    {
        // cout << "Disaster Recovery System Menu:" << endl;
        // cout << "1. User Management" << endl;
        // cout << "2.find User" << endl;
        // //cout << "2. Geographical Information" << endl;
        // cout << "3. Add Resource " << endl;
        // cout << "4. Allocate Resources" << endl;
        // cout << "5. Reporting a disaster" << endl;
        // cout << "6. Exit" << endl;
        // cout << "Enter your choice: ";
        
        cout << "next task: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            hash_data();
            cout<<"         ------------------------------------"<<endl;   
        
            break;
        }
        case 2:
        {
            role();
            cout<<"         ------------------------------------"<<endl;   
        
            break;
        }
        case 3:
        {
            rujuta.supply();
            cout<<"         ------------------------------------"<<endl;   
        
            break;  
            }
        case 4:
        {
            rujuta.allocate();
            cout<<"         ------------------------------------"<<endl;   
        
            break;
        }
        case 5:
        {
            rujuta.push();
            cout<<"         ------------------------------------"<<endl;   
        
            break;
        }
        case 6:
        {
            rujuta.print();
            cout<<"         ------------------------------------"<<endl;   
        
            break;
        }
        case 7:
        {
            rujuta.inventary();
            cout<<"         ------------------------------------"<<endl;   
        
            break;
        }
        case 8:
        {
            vishwa.printppl();
            cout<<"         ------------------------------------"<<endl;   
        
            break;
        }
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }
    return 0;
}
void role(){
   char key[100];
    cout<<"\n\nenter your name"<<endl;
    cin>>key;
    cout<<"your role is type -"<<umap[key]<<endl;
    if(umap[key]==1){
        cout << "Administrators: You are the backbone of disaster management, ensuring that everything runs smoothly. Your leadership and coordination keep everyone aligned, making sure resources are available where and when they're needed. The safety of thousands depends on your decisions.\n" << endl;

    }else if(umap[key]==2){
        cout<<"Responders: You are the heroes on the frontlines, risking your own safety to help others. In the face of danger, you bring hope and rescue, showing incredible bravery and skill. Your quick actions save lives, and your dedication inspires communities to stay strong.\n"<<endl;
    }else if(umap[key]==3){
        cout<<"Citizens: You are not just witnesses, but active participants in protecting your community. By reporting dangers and following instructions, you help responders work faster and smarter. Your vigilance and cooperation are key to keeping everyone safe..\n"<<endl;
    }else if(umap[key]==4){
        cout<<"Volunteers: Your compassion and hard work bring relief and comfort to those in need. Whether it's delivering supplies, offering shelter, or providing a helping hand, your efforts help communities recover and heal. You show the power of humanity in every small act of service\n"<<endl;
    }else if(umap[key]==5){
        cout<<"NGO Partners: Your expertise and commitment are vital to long-term recovery. By bringing specialized resources and care, you fill in the gaps and ensure that no one is left behind. Your support is the foundation upon which we rebuild, stronger and more resilient\n"<<endl;
    }
    
}
int hash_data()        //function for storing user data and assigning tasks with Hash Map
{

    // Create an unordered_map
    //unordered_map<string, int> umap;// string = name of person   int = type of the person  umap=name for the map
    int n;// number of users
    char key[100];// string to store names
    int value;//type of value

    cout << "Enter the number of entries: ";
    cin >> n;

    cout << "\n Administrator ==> Type 1" << endl;
    cout << "\n Responders ==> Type 2" << endl;
    cout << "\n Citizens ==> Type 3" << endl;
    cout << "\nVolunteers ==> Type 4" << endl;
    cout << "\n NGO Partners ==> Type 5\n" << endl;

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter Name : ";
        cin >> key;
        cout << "Enter Type : ";
        cin >> value;
        umap[key] = value; //The name (key) is mapped to the role type (value) in the unordered map umap.
        vishwa.push(key,value); // the name and role type are pushed to a stack vishwa.
    }

    // Print the key-value pairs
    cout << "\nStored key-value pairs:\n";
    for (auto it : umap)
        cout << it.first << " " << it.second << endl;/*it prints all stored key-value pairs in umap.
                                                       it.first refers to the user's name,
                                                       and it.second refers to their role type.
                                                       When you iterate over the map, each it (the iterator) is a std::pair<Key, Value>, where:
                                                       it.first is the key (of type Key).
                                                       it.second is the value (of type Value).*/

    return 0;
}